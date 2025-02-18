// /**
//  * writer:blinderchief 
// **/
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i,a,n) for(int i = a; i < n; i++)
// #define vll vector<ll>
// #define vi vector<int>
// #define pb push_back
// #define po pop_back
// #define me(a, x) memset(a, x, sizeof(a))
// #define all(v) v.begin(),v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(all(v))
// const int N = 1e3 + 10;
// int dp[N][N];

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     int t; 
//     cin >> t;

//     while (t--) {
//         string a, b, c; 
//         cin >> a >> b >> c;

//         int n = a.size();
//         int m = b.size();
//         me(dp, -1);  

//         function<int(int, int)> rec = [&](int i, int j) -> int {
//             int pos = i + j;  
//             if (i==a.size() && j==b.size()) return 0;  
//             if (dp[i][j] != -1) return dp[i][j]; 
//             int ans = INT_MAX;
//             if (i < n ) {
//                  int cost = rec(i + 1, j) + (a[i] != c[pos]);
//                   ans = min(ans, cost);
//             }
//             if (j < m ) {
//                 int cost = rec(i, j+1) + (b[j] != c[pos]);
//                   ans = min(ans, cost);
//             }

//             return dp[i][j] = ans;
//         };

//         int res = rec(0, 0);
       
//             cout << res << "\n";
       
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define vi vector<int>
const int INF = 1e9;
const int N = 1005;
int dp[N][N];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        string a, b, c;
        cin >> a >> b >> c;

        int n = a.size();
        int m = b.size();

        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= m; j++) {
                dp[i][j] = INF;
            }
        }
        dp[0][0] = 0; 

        
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= m; j++) {
                int pos = i + j; 
                if (pos >= c.size()) continue;
                if (i < n) {
                    int cost = (a[i] != c[pos]) ? 1 : 0;
                    dp[i + 1][j] = min(dp[i + 1][j], dp[i][j] + cost);
                }
                if (j < m) {
                    int cost = (b[j] != c[pos]) ? 1 : 0;
                    dp[i][j + 1] = min(dp[i][j + 1], dp[i][j] + cost);
                }
            }
        }
        cout << dp[n][m] << "\n";
    }
    return 0;
}
