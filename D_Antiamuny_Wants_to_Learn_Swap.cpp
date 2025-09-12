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
1 4 3 2 5
1 3 2 4 5
1 2 4 5
2 1 4 5
1 2 4 5-> 1 5 2 4-> 1 4 2 5-> 1 2 4 5
2 1 4 5->2 1 


*/
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
signed main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n,q;cin>>n>>q;
        vi v(n+1);
        f(i,1,n+1)cin>>v[i];
      vi mxl(n+1),mir(n+1);
      for(int i =2;i<=n;i++){
          mxl[i] = i-1;
          while(v[mxl[i]]<v[i]) {
              mxl[i] = mxl[mxl[i]];
          }
      }
      for(int i =n-1;i>=1;i--){
        mir[i] =i+1;
        while(v[mir[i]]<v[i]){
            mir[i] = mir[mir[i]];
        }
      }
      vi L(n+1,0);
      for(int i =2;i<n;i++){
        if(mxl[i]>0 && mir[i]<=n){
          L[mir[i]] = max(L[mir[i]],mxl[i]);
        }
      }
      for(int i =1;i<=n;i++){
        L[i] = max(L[i],L[i-1]);
      }
      for(int i =0;i<q;i++){
        int l,r;cin>>l>>r;
        if(l<=L[r]){
          no
        }else{
          yes
        }
      }
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}