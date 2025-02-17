#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,n) for(int i = 0; i < n; i++)
#define sot(v) sort(v.begin(),v.end())

void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    f(i, n) {
        cin >> v[i];
    }

    int chek = 0, chek1 = 0, cnt = 0, cnta = 0, cntb = 0;
    int i = 0, j = 0, k = n - 1;

    while (j <= k) {
        if (i % 2 == 0) {
            // Alice's turn
            chek = 0;  // Reset current move sum
            while (j <= k && chek <= chek1) {
                chek += v[j];
                j++;
            }
            cnt++;
            cnta += chek;
        } else {
            // Bob's turn
            chek1 = 0;  // Reset current move sum
            while (j <= k && chek1 <= chek) {
                chek1 += v[k];
                k--;
            }
            cnt++;
            cntb += chek1;
        }
        i++;
    }

    cout << cnt << " " << cnta << " " << cntb << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) { 
        solve();
    }

    return 0;
}
