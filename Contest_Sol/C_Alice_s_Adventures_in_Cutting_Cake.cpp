/**
 * writer: blinderchief
**/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i, a, n) for (int i = a; i < n; i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define po pop_back
#define all(v) v.begin(), v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        ll n, m, v; 
        cin >> n >> m >> v;
        
        vll a(n + 1), pref(n + 1, 0);
        
        f(i, 1, n + 1) {
            cin >> a[i];
            pref[i] = pref[i - 1] + a[i];
        }
        
        vll v1, v2;
        v1.pb(1);  
        v2.pb(n);  
        ll s = 0;
        f(i, 1, n + 1) {
            s += a[i];
            if (s >= v) {
                v1.pb(i + 1);  
                s = 0;        
            }
        }

        s = 0;
        for (int i = n; i >= 1; i--) {
            s += a[i];
            if (s >= v) {
                v2.pb(i - 1); 
                s = 0;       
            }
        }

        if (v1.size() - 1 < m || v2.size() - 1 < m) {
            cout << "-1\n";
            continue;
        }

        ll ans = -1;

        f(i, 0, m + 1) {
            ll x = i;
            ll y = m - i;
            ll sum = pref[v2[y]] - pref[v1[x] - 1];
            ans = max(ans, sum);
        }

        cout << ans << '\n';
    }
    return 0;
}
