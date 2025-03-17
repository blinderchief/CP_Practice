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
// #define ll long long int
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
// const int INF = 9e18;
// const int mod = 1e9 + 7;
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
// int main() {
//     auto begin = chrono::high_resolution_clock::now();
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     string s; cin>>s;
//     int n= s.size();
//     vector<vector<int>>dp(n,vector<int>(n,-1));
//     auto Ask = [&](auto& self,int l, int r)->int{
//       if(l==r)return 1;
//       if(l>r) return 0;
//         if(dp[l][r]!=-1) return dp[l][r];
//         int i = l+1; 
//       int basic = 1+self(self,i,r);
//         for(int j =i;j<=r;j++){
//             if(s[j]==s[l]){
//             basic = min(basic,self(self,i,j-1)+self(self,j,r)); 
//             }
//         }
//         return dp[l][r]=basic;
//     };
//    int res= Ask(Ask,0,s.size()-1);
//    cout<<res;
//     auto end = chrono::high_resolution_clock::now();
//     auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
//    //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
//     return 0;
// }
// /**
//  * writer:blinderchief
//  **/
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
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
// #define INF (int)1e18
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
// int main() {
//     auto begin = chrono::high_resolution_clock::now();
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     string s;
//     cin >> s;
//     vector<vector<int>> dp(s.size(), vector<int>(s.size(), 0));
//     for (int i = 0; i < s.size(); ++i) {
//         dp[i][i] = 1;
//     }

//     for (int i = 2; i <= s.size(); i++) { 
//         for (int j = 0; j <= s.size() - i; j++) { 
//             int k = j + i - 1; 

//             dp[j][k] = dp[j][k - 1] + 1;

//             for (int l = j; l < k; l++) {
//                 if (s[l] == s[k]) {
//                     if (dp[j][l] + dp[l + 1][k - 1] < dp[j][k]) {
//                         dp[j][k] = dp[j][l] + dp[l + 1][k - 1];
//                     }
//                 }
//             }
//         }
//     }

//     cout << dp[0][s.size() - 1] << '\n';

//     auto end = chrono::high_resolution_clock::now();
//     auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
//     // cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int strangePrinter(string s) {
    int n = s.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));

    for (int l = n - 1; l >= 0; --l) {
        dp[l][l] = 1; // A single character needs one print
        for (int r = l + 1; r < n; ++r) {
            dp[l][r] = 1 + dp[l + 1][r]; // Print s[l] separately

            for (int j = l + 1; j <= r; ++j) {
                if (s[j] == s[l]) {
                    dp[l][r] = min(dp[l][r], dp[l+1][j - 1] + (j <= r ? dp[j][r] : 0));
                }
            }
        }
    }

    return dp[0][n - 1];
}

int main() {
    string s;
    cin >> s;
    cout << strangePrinter(s) << endl;
    return 0;
}


