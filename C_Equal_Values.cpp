// /**
//  * writer:blinderchief
//  **/
// #include<bits/stdc++.h>
// using namespace std;
// /*
// #define LOCAL
// #ifdef LOCAL
// #include "algo/debug.h"
// #else
// #define debug(...) "india"
// #endif
// */
// #define int long long
// #define f(i,a,n) for(int i = a; i < n; i++)
// #define vll vector<int>
// #define pb push_back
// #define po pop_back
// #define me(a, x) memset(a, x, sizeof(a))
// #define all(v) v.begin(), v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(all(v))
// #define sz(x) (int)(x).size()
// #define INF (int)1e18
// const int mod = (int)(1e9 + 7);
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
// signed main() {
//     auto begin = chrono::high_resolution_clock::now();
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int t; cin >> t;
//     while (t--) {
//         int n; cin>>n;
//         vll v(n);
//         map<int,int> mp;
//         int c=0;
//         int cnt=0;
//         f(i,0,n){
//             cin>>v[i];
//             mp[v[i]]++;
//         }
//     int ans= 1e18;;
//     int beg = 0;
//     while (beg < n) {
//       int end = beg;
//       while (end + 1 < n && v[end + 1] == v[end]) {
//         end += 1;
//       }
//       int len = end - beg + 1;
//       int cur = (n - len) * v[beg];
//       ans = min(ans, cur);
//       beg = end + 1;
//     }
//             cout<<ans<<'\n';
        
//     }
//     auto end = chrono::high_resolution_clock::now();
//     auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
//    //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
//     return 0;
// }

/**
 * writer:blinderchief
 **/
#include<bits/stdc++.h>
using namespace std;
/*
#define LOCAL
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) "india"
#endif
*/
#define ll long long
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<int>
#define pb push_back
#define po pop_back
#define me(a, x) memset(a, x, sizeof(a))
#define all(v) v.begin(), v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
#define sz(x) (int)(x).size()
#define INF (int)9e18;
const int mod = (int)(1e9 + 7);
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
signed main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
    ll n;
    cin >> n;
    vll a(n);
    f(i,0,n) cin>>a[i];
    ll p1 = 0, p2 = 0;
    ll ans = LLONG_MAX;
    while(p1 < n) {
        while(p2 < n && a[p1] == a[p2]) p2++;
        ans = min(ans, p1 * a[p1] + (n - (p2 - 1) - 1) * a[p2 - 1]);
        p1 = p2;
    }
 
    cout << ans <<'\n';
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}


