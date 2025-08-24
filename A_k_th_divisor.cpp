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
    vll v; 
   ll cnt=0,c1=0;
    ll n,k;cin>>n>>k;
   for(ll i =1;i*i<=n;i++){  
    if(n%i==0){
        v.pb(i);
        cnt++;
      }
      if(k==cnt){
          cout<<v[k-1];
          return 0;
        }
     
   }
   ll size  = (ll)v.size()*2;
   if(!v.empty() && v.back()*v.back()==n){
    size--;
   }
    if(k>size){
        cout<<-1<<'\n';
        return 0;
      }
      else{
          cout<<n/(v[size-k]);
          return 0;
        
      }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
  //  cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
}