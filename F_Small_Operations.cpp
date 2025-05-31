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
        int x,y,k; cin>>x>>y>>k;
        int g = __gcd(x,y);
        x/=g;
        y/=g;
        auto func = [&](int val) {
            if (val == 1) return 0LL;
            vector<int> div;
            for (int i = 1; i * i <= val; i++) {
                if (val % i == 0) {
                    div.pb(i);
                    if (i != val / i) div.pb(val / i);
                }
            }
            sot(div);
            vector<int> dp(div.size(), 100);
            dp[0] = 0; 
            for (int i = 0; i < div.size(); i++) {
                if(dp[i]>=100) continue;
                for (int j = 0; j < div.size(); j++) {
                    if (div[j] > k) continue;
                    int prod = div[i] * div[j];
                    if (prod > val) continue;
                    auto it = lower_bound(all(div), prod);
                    if (it != div.end() && *it == prod) {
                        int idx = it - div.begin();
                        dp[idx] = min(dp[idx], dp[i] + 1);
                    }
                }
            }
            int idx = lower_bound(all(div), val) - div.begin();
            return dp[idx];
        };
        int cal = func(x)+func(y);
        if(cal>=100){
            cal=-1;
        }
        cout<<cal<<"\n";
    }   
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}