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
/* Small observations-Think,read Problem again
on any day we can not buy more than  m ticket
and on a day if I buy x ticket then all the coming days the tickets prices will be increase by x

we want k tickets in lowest cost 
*/
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
signed main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        ll n,mx,k;
        cin>>n>>mx>>k;
        vll v(n);
        f(i,0,n){
          cin>>v[i];
        }
        ll maxidays  = k/mx;
        vll temp=v;
sort(all(temp));
ll ans=0;
ll incr =0;
for(int i =0;i<maxidays;i++){
 ans+=(1LL*mx*(temp[i]+incr));
 incr+=mx;
}   
ans+=((k%mx)*(temp[maxidays]+incr));     
cout<<ans<<'\n';


    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}