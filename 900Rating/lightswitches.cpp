// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define f(i, a, n) for (int i = a; i < n; i++)
// #define vll vector<ll>
// #define pb push_back
// #define po pop_back
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(v.begin(), v.end())

// signed main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int t; 
//     cin >> t;
//     while (t--) {
//         int n, k, ans = -1;
//         cin >> n >> k;
//         vll v(n);
//         f(i, 0, n) {
//             cin >> v[i];
//         }

//         ll max_ti = *max_element(v.begin(), v.end());
//         vll chk = v;
//         f(i, 0, n) {
//             chk[i] += k;
//         }
//         for (ll i = max_ti; i <= max_ti + k; ++i) {
//             int flag = 0;
//             f(j, 0, n) {
//                 if ((i - v[j]) % (2 * k) >= k) {
//                     flag = 1;
//                     break;
//                 }
//             }
//             if (!flag) {
//                 ans = i;
//                 break;
//             }
//         }
//         cout << ans << "\n";
//     }    
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i, a, n) for(int i = a; i < n; i++)
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
        ll n, k; 
        cin >> n >> k;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        sort(v.begin(), v.end());
        
        ll max_val = v[n-1];
        bool possible = true;
        
        for (int i = 0; i < n; i++) {
            ll diff = max_val - v[i];
            ll mul = diff / (2 * k);
            v[i] += mul * (2 * k);
            if (v[i] + k <= max_val) {
                v[i] += 2 * k;
            }
        }
        
        sort(v.begin(),v.end());
        
        if (v[n-1] - v[0] >= k) {
            cout << -1 << '\n';
        } else {
            cout << v[n-1] << '\n';
        }
    }
    return 0;
}
