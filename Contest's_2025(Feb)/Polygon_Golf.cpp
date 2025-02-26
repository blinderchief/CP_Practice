/**
 * writer:blinderchief
 **/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define po pop_back
#define me(a, x) memset(a, x, sizeof(a))
#define all(v) v.begin(), v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
#define INF (int)1e18
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
int main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n,m,k;cin>>n>>m>>k;
        vi v(k),v1(m),d(m);
        f(i,0,k) cin>>v[i];
        f(i,0,m) cin>>v1[i];
        f(i,0,m) cin>>d[i]; 
        vector<bool> check(m, false);
        ll ans = 0;
         f(i,0,m){
            ll mini = INT_MAX;
            for(int h : v) {
                ll seec;
                if (d[i] == 0) {
                    seec = (h - v1[i] + n) % n;
                } else {
                    seec = (v1[i] - h + n) % n;
                }
               mini  =min(seec,mini);
            }
           ans= max(ans,mini);
        }
        cout << ans<<'\n';

    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}
// /**
//  * writer:blinderchief
//  **/
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define f(i,a,n) for(int i = a; i < n; i++)
// #define vll vector<ll>
// #define vi vector<int>
// #define pb push_back
// #define po pop_back
// #define me(a, x) memset(a, x, sizeof(a))
// #define all(v) v.begin(), v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(all(v))
// #define INF (int)1e18
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
// int main() {
//     auto begin = chrono::high_resolution_clock::now();
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int t; cin >> t;
//     while (t--) {
//         int n,m,k;cin>>n>>m>>k;
//         vi v(k),v1(m),d(m);
//         f(i,0,k) cin>>v[i];
//         f(i,0,m) cin>>v1[i];
//         f(i,0,m) cin>>d[i]; 
//         vector<bool> check(m, false);
//         ll ans = 0;
//         while(true) {
//             bool ck = true;
//             for(int i = 0; i < m; i++) {
//                 if(check[i]) continue;
//                 ck = false;
//                 if(d[i] == 0) {
//                     v1[i] = (v1[i] + 1) % n;
//                 } else {
//                     v1[i] = (v1[i] + n - 1) % n;
//                 }
//                 // collisions
//                 for(int j = i + 1; j < m; j++) {
//                     if( !check[j] && v1[i] == v1[j]) {
//                         d[i] = 1 - d[i];
//                         d[j] = 1 - d[j];
//                     }
//                 }
//                 //  hole
//                 for(int h : v) {
//                     if(v1[i] == h) {
//                         check[i] = true;
//                         break;
//                     }
//                 }
//             }
//             if(ck) break;
//             ans++;
//         }
//         cout <<ans <<'\n';

//     }
//     auto end = chrono::high_resolution_clock::now();
//     auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
//    //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
//     return 0;
// }
