/**
 * writer:blinderchief
 **/
#include<bits/stdc++.h>
using namespace std;

// #define LOCAL
// #ifdef LOCAL
// #include "algo/debug.h"
// #else
// #define debug(...) "india"
// #endif

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
        int n,m;cin>>n>>m;
        vll c(n),r(n);
        f(i,0,n) cin>>c[i];
        f(i,0,n) cin>>r[i];
        // (x-xi)**2+y**2<=r**2
        map<ll,ll> mp;
        for(int i =0;i<n;i++){
        for(int j=c[i]-r[i];j<=c[i]+r[i];j++){
            ll y= sqrt((r[i]*r[i])-((j-c[i])*(j-c[i])));
            mp[j] =max(mp[j],y);  
        }
      }
        ll ans =0;
        for(const auto i:mp){
          ans+=((2*i.second)+1);
        }
cout<<ans<<'\n';

    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}