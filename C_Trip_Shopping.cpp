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
    int t; cin >> t;
    while (t--) {
        ll n,k; cin>>n>>k;
        vector<pair<ll,ll>>v(n);
        for(int i =0;i<n;i++){
          cin>>v[i].first;
        }
        for(int i =0;i<n;i++){
          cin>>v[i].second;
          if(v[i].second<v[i].first) swap(v[i].second,v[i].first);
        }
        sot(v);
        ll ans = 0;
        for(int i =0;i<n;i++){
          ans+=(v[i].second-v[i].first);
        }
        ll mi = LLONG_MAX;
        bool flag =true;
        for(int i=0;i<n-1;i++){
          if(v[i+1].first<=v[i].second){
            cout<<ans<<'\n';
            flag = false;
            break;
          }
          mi = min(mi,v[i+1].first-v[i].second);
        }
        if(flag) {
          cout<<ans+2*(mi)<<'\n';
        }

        
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}