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
#define int long long
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
#define INF  (int)9e18;
const int mod = (int)(1e9 + 7);
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
int32_t main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
      int n, k;
      cin>>n>>k;
      vector<int> a(n);
      f(i,0,n){
          cin>>a[i];
      }
      if(k==1) {
          vi v = a;
          sort(v.rbegin(),v.rend());
          if(v[1] > a[0] && v[1]>a[n-1]) {
              cout<<max(a[0], a[n-1]) + v[0]<<'\n';
          }
          else cout<<v[0]+v[1]<<'\n';
      }
      else {
        sort(a.rbegin(),a.rend());
          int ans = 0;
          f(i,0,k+1) ans += a[i];
          cout<<ans<<'\n';
      }
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}

