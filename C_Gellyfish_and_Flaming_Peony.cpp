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
#define ll int
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
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
    cin >> n;
    vll v(n);
    f(i,0,n) cin>>v[i];
    vector<ll> dp(5001, INT_MAX);
    queue<ll> q;
    f(i,0,n)
    {
        dp[v[i]] = 0;
        q.push(v[i]);
    }

    ll g = 0;
    f(i,0,n)
    {
        g = __gcd(g, v[i]);
    }

    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == g)
        {
            cnt++;
        }
    }
    if (cnt > 0)
    {
        cout << n - cnt << '\n';
        continue;
    }
    while (q.size())
    {
        ll val = q.front();
        q.pop();
        for (auto x : v)
        {
            ll gc = __gcd(x,val);
            if (dp[gc] == INT_MAX)
            {
                dp[gc] = 1 +dp[val] ;
                q.push(gc);
            }
        }
    }
    cout << n+dp[g]-1<<'\n';
    
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}