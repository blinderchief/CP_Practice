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
        int n;cin>>n;
        string s;
        cin>>s;
        int ans=0;
        vector<int> c(26,0);
        f(i,0,n){
            c[s[i]-'a']++;
        }
        bool flag = false;
        f(i,0,26){
            if(c[i]>=3){
              yes
              flag = true;
              break;
            }
        }
        if(flag) continue;
        for(int i =0;i<26;i++){
          if(c[i]==2){
            char ch = i + 'a';
            if(s[0]!=ch || s[n-1]!=ch){
               yes
               flag  =  true;
              break;
            }
          }
        }
        if(flag) continue;
        no
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}