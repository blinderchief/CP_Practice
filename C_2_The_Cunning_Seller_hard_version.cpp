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
see i have to buy n  watermelon, in less than k deals
*/
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
signed main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        ll n,k;cin>>n>>k;
      ll cal =0;
      int ck=0;
      bool flag = false;
      ll m=0;
     while(m>0){
      int cnt =0;
     ll p=1;
      while(p*3<=m){
        p*=3;
        cnt++;
      }
      cal+=(p*3+cnt*p/3);
      ck++;
      if(ck>k) {
        cout<<-1<<'\n';
        flag  =true;
        break;
      }
      m-=p;
     }
     if(flag) continue;
     else{
    ck =0;
      ll cal2=0;
      int see=1;
   while(true){  
      ll p=see;
      int cnt=0;
     while(p*3<=n){
        p*=3;
        cnt++;
      }
    cal2+=(p*3+cnt*p/3);
      ck++;
      n-=p;
    if(n==0&&cal2<cal && ck<=k){
      cal=cal2;
    }
    if(ck>k || cal2>cal){
      break;
    }
    see*=3;
  }

       cout<<cal<<"\n";

  }
}
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}
