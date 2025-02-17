/**
 * writer:blinderchief
 **/
#include<bits/stdc++.h>
using namespace std;
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
#define INF (int)1e18
const int mod = 998244353;
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
int main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
      int n; cin >> n;
    vector <int> a(n + 1);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    if (n == 1){
        if (a[1] == 0){
            cout << 2 << '\n';
            continue;
        }
        cout << 1 << '\n';
        continue;
    }
    
    vector <int> dp(n + 1, 0);
    
    // dp[0] = ways such that i is a truth guy and this is valid 
    for (int i = 1; i <= n; i++){
        if (a[i] >= i) continue;
        // this is a truth guy and the first truth guy 
        if (a[i] == i - 1 && i <= 2){
            dp[i] = 1;
        }
        // this is not the first truth guy 
        // either i - 1 is truth guy 
        if (i >= 2 && a[i] == a[i - 1]){
            dp[i] += dp[i - 1];
        } 
        // or i - 2 is truth and i - 1  is lyijng 
        if (i >= 3 && a[i] == a[i - 2] + 1){
            dp[i] += (dp[i - 2]);
        }
        dp[i] %= mod;
    }
    
    int ans = dp[n] + dp[n - 1];
    ans %= mod;
    cout << ans << '\n';

    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}