#include <bits/stdc++.h>
using namespace std;
#define ll long long 
ll get_v(ll x) {
    ll cnt = 0;
    while (x >= 2) {
        x /= 2;
        cnt++;
        if (x < 2) break;
        x += 1;
    }
    return cnt;
}

bool is_critical(ll a) {
    if (a < 3) return false;
    ll  p = a - 1;
    return (p & (p - 1)) == 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        vector<long long> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        vector<long long> val(n + 1), crit(n + 1);
        for (int i = 1; i <= n; i++) {
            val[i] = get_v(a[i]);
            crit[i] = is_critical(a[i]) ? 1 : 0;
        }
        vector<long long> val_prefix(n + 1, 0), crit_prefix(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            val_prefix[i] = val_prefix[i - 1] + val[i];
            crit_prefix[i] = crit_prefix[i - 1] + crit[i];
        }
        for (int qq = 0; qq < q; qq++) {
            int l, r;
            cin >> l >> r;
            ll sumv = val_prefix[r] - val_prefix[l - 1];
            ll cntc = crit_prefix[r] - crit_prefix[l - 1];
            ll ans = sumv + (cntc / 2);
            cout << ans << '\n';
        }
    }
    return 0;
}