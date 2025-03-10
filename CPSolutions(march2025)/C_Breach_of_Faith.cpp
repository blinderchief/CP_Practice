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
#define debug(...) 42
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
#define INF (int)1e18
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
int main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vll v(2*n);
        for(int i=0;i<2*n;i++){
          cin>>v[i];
        }
        sot(v);
        ll sum = accumulate(all(v),0ll);
        ll sum1= accumulate(v.begin(),v.begin()+n,0ll);
        ll sum2 = sum-sum1;
        ll see = abs(sum1-sum2);
        // bool ck =false;
        // for(int i=0;i<n;i++){
        //   if(!ck){
        //     cout<<v[i]<<" ";
        //     ck  =true;
        //   }
        //   else{
        //     cout<<v[n+i]<<" ";
        //     ck  = false;
        //   }
        // }
        if (see > 0 && see <= 1e18 && !binary_search(all(v), see)){
          cout <<see << " ";
          for (int i = 0; i < n; i++){
              cout << v[n + i] << " " << v[i] << " ";
          }
          cout << "\n";
      }
      else{
        vector<ll> o, e;
        for (int i = 2*n -(n+1);i < 2*n; i++){
            o.pb(v[i]);
        }
        for (int i = 0; i < n-1; i++){
            e.pb(v[i]);
        }
        ll sumo = accumulate(all(o),0ll), sume = accumulate(all(e),0ll);
      
        ll cal = sumo - sume;
        vector<ll> a(2*n+1, 0);
        a[1] = cal;
        int j = 0;
        for (int i = 0; i < 2*n+1; i += 2){
            a[i] = o[j++];
        }
        j=0;
        for (int i = 3; i < 2*n+1; i += 2){
            a[i] = e[j++];
        }
        for (int i = 0; i < 2*n+1; i++){
            cout << a[i] << " ";
        }
        cout << "\n";
      }
      }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}

