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
         ll n;
        cin>>n;
        vector<pair<ll,ll>> v(n);
        multiset<ll> row,col;
        for(auto &it:v){
            cin>>it.first>>it.second;
            row.insert(it.first);
            col.insert(it.second);
        }
        if(n==1){
            cout<<1<<'\n';
            continue;
        }
        ll ans=1e18;
        for(auto it:v){
            row.erase(row.find(it.first));
            col.erase(col.find(it.second));
            ll l=*row.rbegin()-*row.begin()+1;
            ll b=*col.rbegin()-*col.begin()+1;
            if(l*b>=n){
                ans=min(ans,l*b);
            } else {
                ans=min({ans,(l+1)*b,l*(b+1)});
            }
            row.insert(it.first);
            col.insert(it.second);
        }
        cout<<ans<<'\n';    
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}