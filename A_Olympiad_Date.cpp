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
        int n; cin>>n;
        vi v(n);
        int c=0;
        int ans=0;
        int cnt0=3,cnt1=1,cnt2=2,cnt3=1,cnt5=1;
        int cn0=0,cn1=0,cn2=0,cn3=0,cn5=0;
        f(i,0,n){
          cin>>v[i];
          if(v[i]==0 && cn0<cnt0) cn0++,ans=i;
          if(v[i]==1 && cn1<cnt1) cn1++,ans=i;
          if(v[i]==2 && cn2<cnt2) cn2++,ans=i;
          if(v[i]==3 && cn3<cnt3) cn3++,ans=i;
          if(v[i]==5 && cn5<cnt5) cn5++,ans=i;
        }
         c = cn0+cn1+cn2+cn3+cn5;
        if(c==8) cout<<ans+1<<'\n';
        else cout<<0<<'\n';
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}