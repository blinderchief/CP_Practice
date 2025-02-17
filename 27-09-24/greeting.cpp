// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define f(i, a, n) for (int i = a; i < n; i++)
// #define vll vector<ll>
// #define pb push_back
// #define po pop_back
// #define all(v) v.begin(), v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(v.begin(), v.end())
// signed main()
// {
//   ios_base::sync_with_stdio(false);
//   cin.tie(0);
//   int t;
//   cin >> t;
//   while (t--)
//   {
//     int n;
//     cin >> n;
//     vector<vector<ll>> p;
//     vector<ll> se;
//     f(i, 0, n)
//     {
//       ll x, y;
//       cin >> x >> y;
//       p.pb({x, y});
//       se.pb(y);
//     }
//     sot(p);
//     sot(se);
//     int cn = 0;
//     f(i, 0, n)
//     {
//       auto it = lower_bound(all(se), p[i][1]);
//       cn += distance(se.begin(), it);
//       se.erase(it);
//     }
//     cout << cn << '\n';
//   }
//   return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
#define vll vector<ll>
#define pb push_back
#define po pop_back
#define all(v) v.begin(),v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(),v.end())
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; 
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        vector<vector<ll>> p(n);
        
        f(i, 0, n) {
            ll x, y;
            cin >> x >> y;
            p[i] = {x, y};
        }
        
        sot(p);

        vll se;
        f(i, 0, n) {
            se.pb(p[i][1]);
        }
        sot(se);

        ll cn = 0;

        f(i, 0, n) {
            auto it = lower_bound(all(se), p[i][1]);
            cn += distance(se.begin(), it);
            se.erase(it);
        }

        cout << cn << '\n';
    }
    
    return 0;
}
