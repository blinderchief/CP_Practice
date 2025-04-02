// /**
//  * writer:blinderchief
//  **/
// #include<bits/stdc++.h>
// using namespace std;
// /*
// #define LOCAL
// #ifdef LOCAL
// #include "algo/debug.h"
// #else
// #define debug(...) "india"
// #endif
// */
// #define int long long
// #define f(i,a,n) for(int i = a; i < n; i++)
// #define vll vector<ll>
// #define vi vector<int>
// #define pb push_back
// #define po pop_back
// #define me(a, x) memset(a, x, sizeof(a))
// #define all(v) v.begin(), v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(all(v))
// #define sz(x) (int)(x).size()
// #define INF (int)9e18;
// const int mod = (int)(1e9 + 7);
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
// signed main() {
//     auto begin = chrono::high_resolution_clock::now();
//     ios_base::sync_with_stdio(false);
//     cin.tie(0); 
//     int n,x;cin>>n>>x;
//     vi v(n);
//     f(i,0,n)cin>>v[i];
//     int dp[n+1][x+1];
//     f(i,0,n){
//       dp[i][0]=1;
//     }
//     for(int l =n-1;l>=0;l--){
//       for(int s=0;s<=x;s++)
// { 
//   dp[l][s] = dp[l+1][s];
//   if(s>=v[l] && dp[l][s-v[l]])
// {
//   dp[l][s]= (dp[l][s]+dp[l][s-v[l]])%mod;
// }
// }    }
// cout<<dp[0][x]<<'\n';
//     auto end = chrono::high_resolution_clock::now();
//     auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
//    //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, x;
    cin >> n >> x;

    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    vector<int> dp(x + 1, 0);
    dp[0] = 1; 

    for (int i = 0; i < n; i++) {
        int coin = coins[i];
        for (int s = coin; s <= x; s++) {
            dp[s] = (dp[s] + dp[s - coin]) % MOD;
        }
    }

    cout << dp[x] << '\n';
    return 0;
}