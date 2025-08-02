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
        int n,s; cin>>n>>s;
        vi v(n); f(i,0,n) cin>>v[i];
        int cnt1=0,cnt2=0;
        f(i,0,n){
          if(v[i]==1) cnt1++;
          else if(v[i]==2) cnt2++;
        }
          int acc = accumulate(all(v),0);
          if(acc%s==0 || s%acc==0 || s%10==0){
            cout<<-1<<'\n';
          }
          else{
           int acc = accumulate(all(v),0);
           if(acc>s){
            for(int i =0;i<n-1;i++){
               if(v[i]>v[i+1]){
                swap(v[i],v[i+1]);
              }
              cout<<v[i]<<" ";
            }
            cout<<v[n-1]<<" ";
             cout<<'\n';
           }else{
            for(int i =0;i<n-1;i++){
              if(v[i]<v[i+1]){
                swap(v[i],v[i+1]);
              }
              cout<<v[i]<<" ";
            }
            cout<<v[n-1]<<" ";
            cout<<'\n';
           }
            
                 }
        }

  
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}