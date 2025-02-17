#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i, a, n) for (int i = a; i < n; i++)
#define vll vector<ll>
#define pb push_back
#define po pop_back
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(), v.end())

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);

        f(i, 0, n) {
            cin >> v[i];
        }

        int res = 0;
        f(i, 1, n+1) {
            if (n % i == 0) {
                int k = n / i;
                int g = 0;

                f(m, 0, k) {
                    int updte = 0;
                    for (int j = m; j < n; j += k) {
                        updte = __gcd(updte, abs(v[j] - v[m]));
                    }
                    g = __gcd(g, updte);
                }
                res += (g != 1);
            }
        }
        cout << res << '\n';
    }

    return 0;
}
