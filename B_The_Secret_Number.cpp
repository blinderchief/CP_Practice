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
#define ll long long int
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
        ll n; cin >> n;
        set<ll> ans;
        for(int k =1;k<=18;k++){
          ll d =1;
          for(int i =0;i<k;i++){
            if(d>(ll)1e17) {d = -1; break;}
            d*=10;
          }
          if(d==-1) break;
          d+=1;
          if(n%d==0){
            ll cal = n/d;
            if(cal>0){
              ans.insert(cal);
            }
          }
        }
        if(ans.empty()){
          cout<<0<<'\n';
        }
        else{
          cout<<ans.size()<<'\n';
          for(auto x:ans) cout<<x<<" ";
          cout<<'\n';
        }
    }

    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}

