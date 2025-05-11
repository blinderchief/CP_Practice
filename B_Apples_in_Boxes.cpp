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
#define INF (int)9e18;
const int mod = (int)(1e9 + 7);
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
signed main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
      int n,k;
      cin>>n>>k;
      vll v(n);
      for(int i=0;i<n;i++)cin>>v[i];
      int mx=-1,mn=1e9,tot=0;
      map<int,int>mp;
      for(auto i:v){
              mp[i]++;
              tot+=i;
              mx=max(mx,(int)i);
              mn=min(mn,(int)i);
      }
      if(mx-mn>k+1 || (mp[mx]>1 && mx-mn>k)){
              cout<<"Jerry";
      }
      else if(tot%2)cout<<"Tom";
      else cout<<"Jerry";
     

      cout<<"\n";
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}