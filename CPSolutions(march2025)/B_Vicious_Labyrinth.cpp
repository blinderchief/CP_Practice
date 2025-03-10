/**
 * writer:blinderchief
 **/
#include<bits/stdc++.h>
using namespace std;
// #define LOCAL
// #ifdef LOCAL
// #include "algo/debug.h"
// #else
// #define debug(...) 42
// #endif
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
        int n,k; cin>>n>>k;
        vi v(n);
        iota(all(v),1);
        if(k&1){
          for (int i = 1; i < n; i++){
              v[i-1] = n; 
          }
          v[n-1]= n-1; 
      }
      else{
          for (int i = 1; i < n - 1; i++){
              v[i-1] = n-1;
          }
         v[n-2] = n;
         v[n-1]  = n-1;
      }
      f(i,0,n) cout<<v[i]<<" ";
      cout<<'\n';
        
       
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}
