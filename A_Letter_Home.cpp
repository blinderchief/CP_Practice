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
        int n,s;cin>>n>>s;
        vector<int>v(n);
        f(i,0,n) cin>>v[i];
        int ans=0;
        sot(v);
       
        // int cal  =(2*(v[n-1]-s));
        // if(cal>0) ans+=(cal);
        // int cal2=(s-v[0]);
        // if(cal2>0) ans+=(cal2);
        // cout<<ans<<'\n';
        if(v[0]>=s){
          int cal= v[n-1]-s;
          ans+=(cal);
          cout<<ans<<'\n';
        }
        else{
          if(v[n-1]-s<s-v[0]){
           int cal  =(2*(v[n-1]-s));
        if(cal>0) ans+=(cal);
        int cal2=(s-v[0]);
        if(cal2>0) ans+=(cal2);
        cout<<ans<<'\n';     
          }
          else{
            int cal  =(2*(s-v[0]));
        if(cal>0) ans+=(cal);
        int cal2=(v[n-1]-s);
        if(cal2>0) ans+=(cal2);
        cout<<ans<<'\n';
          }
              }


    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}