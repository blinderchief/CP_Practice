#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<ll> a(n), b(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    vector<ll> diff(n);
    for(int i = 0; i < n; i++) {
        diff[i] = a[i] - b[i];
    }

    sort(diff.begin(), diff.end());

    ll cnt = 0;
    int j = n - 1;

    for(int i = 0; i < n; i++) {
        if (diff[i] <= 0) continue;

        auto it = lower_bound(diff.begin(), diff.begin() + i, -diff[i] + 1);
        cnt += (diff.begin() + i) - it;
    }

    cout << cnt << '\n';

    return 0;
}
