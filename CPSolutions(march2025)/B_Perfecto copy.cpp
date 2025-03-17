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
// #define sz(x) (int)(x).size()
// const int INF = 9e18;
// const int mod = 1e9 + 7;
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
// int main() {
//     auto begin = chrono::high_resolution_clock::now();
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int t; cin >> t;
//     while (t--) {
//       int n;
//       cin >> n;
//       vector<int> p(n + 1);
//       for (int i = 1; i <= n; i++) {
//         p[i] = i;
//       }
//       bool fail = false;
//       int64_t s = 0;
//       for (int i = 1; i <= n; i++) {
//         s += p[i];
//         int64_t u = int64_t(sqrt(s) + 0.5);
//         if (u * u == s) {
//           if (i == n) {
//             fail = true;
//             break;
//           }
//           s -= p[i];
//           swap(p[i], p[i + 1]);
//           s += p[i];
//         }
//       }
//       if (fail) {
//         cout << -1 << '\n';
//       } else {
//         for (int i = 1; i <= n; i++) {
//           cout << p[i] << " \n"[i == n];
//         }
//       }
//     }
//     auto end = chrono::high_resolution_clock::now();
//     auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
//    //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
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
#define sz(x) (int)(x).size()
const int INF = 9e18;
const int mod = 1e9 + 7;
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
int main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
      int n; cin >> n;
      vi p(n);
      iota(all(p),1);
      if (n == 1){
          cout << -1 << "\n";
          continue;
      }
      auto check = [&](ll sum){
          ll v = sqrtl(sum);
          if (v * v == sum) return false;
          return true;
      };
      ll v = (1LL*n * (n + 1)) / 2;
      if (!check(v)){
          cout << -1 << "\n";
        continue;
      }
      ll sum = 0;
      for (int i = 0; i < n; i++){
          sum += (i + 1);
          if (!check(sum)){
              swap(p[i], p[i + 1]);
          }
      }
      for (int i = 0; i < n; i++){
          cout << p[i] << " \n"[i + 1 == n];
      }
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}