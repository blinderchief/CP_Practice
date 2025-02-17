#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
#define vll vector<ll>
#define pb push_back
#define po pop_back
#define all(v) v.begin(),v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(),v.end())

const ll N = 200005;
vector<pair<int,int>> dp(N);

void precompute() {
    dp[0] = {1, 0};
    dp[1] = {0, 1};
    dp[2] = {1, 1};
    f(i, 3, N) {
        dp[i].first = dp[i-1].second;
        dp[i].second = dp[i-1].first + dp[i-1].second;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    precompute();
    
    int t; 
    cin >> t;

    while (t--) {
        ll n, k; 
        cin >> n >> k;

        int cnt = 0;

        if (k >= 7 && k >= n) {
            cout << 0 << '\n';
            continue;
        }
        int x = dp[k-1].first, y = dp[k-1].second;
        f(i, 0, n+1) {
            int z = n - x * i;
            if (z % y == 0 && z / y >= 0 && z / y >= i) {
                cnt++;
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}
