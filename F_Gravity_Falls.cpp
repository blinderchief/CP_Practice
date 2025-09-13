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
        int n;cin>>n;
        vector<vi>a(n);
        int maxi = 0,idx=0; 
        f(i,0,n)
        {
          int k;cin>>k;
          a[i].resize(k);
          for(int j=0;j<k;j++){
            cin>>a[i][j];
          }
          if(k>maxi) {
            maxi = k;
          }

        }
        int lexsmallone= 0;
        f(i,1,n)
        {
          if(a[i]<a[lexsmallone]){
            lexsmallone = i;
          }
        }
        idx = a[lexsmallone].size();
        vi temp(maxi,INT_MAX);
        for(int i=0;i<n;i++){
          for(int j =0;j<a[i].size();j++){
            temp[j] = min(temp[j],a[i][j]);
          }
        }
        for(int i =0;i<idx;i++){
          cout<<a[lexsmallone][i]<<" ";
        }
        f(i,idx,maxi){
          cout<<temp[i]<<" ";
        }
        cout<<'\n';


    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}
