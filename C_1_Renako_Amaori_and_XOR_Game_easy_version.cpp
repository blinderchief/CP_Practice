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
//Small observations-Think,read Problem again
/*
*/
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
signed main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n;cin>>n;
        vi a(n),b(n);
        f(i,0,n)cin>>a[i];
        f(i,0,n)cin>>b[i];
        int axor = a[0],bxor =b[0];
        for(int i =1;i<n;i++){
          axor^=a[i];
        bxor^=b[i];
        }
      if(axor ==bxor) {
        cout<<"Tie"<<'\n';
        continue;
      }
        for(int i =0;i<n;i++){
          if(axor==0 && i%2==0){
            if(a[i]!=b[i]){
            axor =1;
            bxor = 0;
            }
          }
          else if(bxor==0 && i%2!=0){
          if(a[i]!=b[i]){
            bxor =1;
            axor = 0; 
          }
          }
        }

        if(axor>bxor){
        cout<<"Ajisai"<<'\n';
        }
        else if(bxor>axor){
 cout<<"Mai"<<'\n';
        }
        else{
cout<<"Tie"<<'\n';
        }
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}
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
// #define ll long long
// #define ull unsigned ll
// #define f(i,a,n) for(int i = a; i < n; i++)
// #define vll vector<ll>
// #define vi vector<int>
// #define pb emplace_back
// #define po pop_back
// #define me(a, x) memset(a, x, sizeof(a))
// #define all(v) (v).begin(), (v).end()
// #define rall(x) (x).rbegin(), (x).rend()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(all(v))
// #define sz(x) (int)(x).size()
// #define inf 0x3f3f3f3f
// const int mod = (int)(1e9 + 7);
// //Small observations-Think,read Problem again
// /*
// */
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
// signed main() {
//     auto begin = chrono::high_resolution_clock::now();
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int t; cin >> t;
//     while (t--) {
//         int n;cin>>n;
//         vi a(n),b(n);
//         f(i,0,n)cin>>a[i];
//         f(i,0,n)cin>>b[i];
//         int axor = a[0],bxor =b[0];
//         for(int i =1;i<n;i++){
//           axor^=a[i];
//         bxor^=b[i];
//         }
//         bool v = false;
//         if(axor>bxor){
//         for(int i =0;i<n;i++){
//           if(((a[i]==0 && b[i]==1) || (a[i]==1 && b[i]==0))&& i%2!=0){
//                cout<<"Mai"<<'\n';
//                v= true;
//               break;
//           }
//         }
//         if(v) continue;
//        cout<<"Ajisai"<<'\n';
//         }
//         else if(bxor>axor){
//               for(int i =0;i<n;i++){
//           if(((a[i]==0 && b[i]==1) || (a[i]==1 && b[i]==0))&& i%2==0){
//        cout<<"Ajisai"<<'\n';
//        v = true;
//               break;
//           }
//         }
//         if(v) continue;

//        cout<<"Mai"<<'\n';
//         }else{
//           cout<<"Tie"<<'\n';
//         }

//     }
//     auto end = chrono::high_resolution_clock::now();
//     auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
//    //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
//     return 0;
// }