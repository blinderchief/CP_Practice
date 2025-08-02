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
// #define INF (int)9e18;
// const int mod = (int)(1e9 + 7);
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
// signed main() {
//     auto begin = chrono::high_resolution_clock::now();
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int t; cin >> t;
//     while (t--) {
//         int n; cin>>n;
//         multiset<int> ms;
//          for(int i =0;i<n;i++){
//           int x; cin>>x;
//           ms.insert(x);
//          }
//          if(ms.find(0)==ms.end()){
//           int acc = accumulate(ms.begin(),ms.end(),0ll);
//           cout<<acc<<'\n';
//          }
//          else{
//           int ans=0;
//           int idx =0;
//           multiset<int>::iterator it1 = ms.end();
//           for(auto it=ms.begin();it!=ms.end();it++,idx++){
//             if(*it!=idx){
//               ans+=(*it+1);
//               it1 = it;
//             }
//           }
//           if(it1!=ms.end()){
//             int ccc = max(accumulate(it1,ms.end(),0ll),*max_element(all(ms))+1);
//             cout<<ans+ccc<<"\n";
//           }
//           else{
//           int cal = *ms.rbegin();
//           int cnt=0;
//           for(auto it=ms.rbegin();it!=ms.rend();++it){
//             if(*it==cal){
//               cnt++;
//             }
//             else break;
//           }
//           cout<<cnt*(cal+1)<<'\n';
//           }
//          }
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
#define ull unsigned ll
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define vi vector<int>
#define pb emplace_back
#define po pop_back
#define me(a, x) memset(a, x, sizeof(a))
#define all(v) (v).begin(), (v).end()
#define rall(x) (x).rbegin(), (x).rend()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
#define sz(x) (int)(x).size()
#define inf 0x3f3f3f3f
const int mod = (int)(1e9 + 7);
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
signed main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n;cin>>n;
        int ans= 0;
        for(int i =0;i<n;i++){
          int x; cin>>x;
          ans+=(max(x,1));
        }
        cout<<ans<<'\n';    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}