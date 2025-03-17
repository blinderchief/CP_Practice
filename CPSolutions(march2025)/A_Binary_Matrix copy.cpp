/**
 * writer:blinderchief
 **/
#include<bits/stdc++.h>
using namespace std;

// #define LOCAL
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) "india"
#endif

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
#define sz(x) (int)(x).size()
const int INF = 9e18;
const int mod = 1e9 + 7;
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
int main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n,m; cin>>n>>m;
        vector<string> v(n);
        f(i,0,n)cin>>v[i];
        int cntr=0,cntc=0;
        f(i,0,n){
          int cnt=0;
          f(j,0,m)
        {
          cnt+=int(v[i][j]);
        }
        if(cnt&1) cntr++;
        }
        f(i,0,m){
          int cnt=0;
          f(j,0,n)
        {
          cnt+=int(v[j][i]);
        }
        if(cnt&1) cntc++;
        }
        int ans =max(cntr,cntc);
        cout<<ans<<'\n';

    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}