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
//     cin>>s;
//     map<char,int> mp;
//     f(i,0,s.size()){
//         mp[s[i]]++;
//     }
//     vector<pair<char,int>> see;
//     for(auto it = mp.begin();it!=mp.end();it++){
//         see.push_back({it->second,it->first});
//     }
//     sort(see.rbegin(),see.rend());
//     string temp = string(s.size(),see[0].second);
//     char sto = '0';
//     int cnt=1;
//     for(int i =0;i<s.size();i++){
//       if(s[i]!=temp[i]){
//         if(s[i]!=sto){
//           cnt++;
//           sto = s[i];
//         }
//       } 
//     }
//     cout<<cnt<<'\n';
    
    
//     auto end = chrono::high_resolution_clock::now();
//     auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
//    //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
//     return 0;
// }
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
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
int main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    vector<vector<int>> dp(s.size(), vector<int>(s.size(), 0));
    for (int i = 0; i < s.size(); ++i) {
        dp[i][i] = 1;
    }

    // Fill the DP table for substrings of increasing lengths
    for (int i = 2; i <= s.size(); i++) { // Length of substring
        for (int j = 0; j <= s.size() - i; j++) { // Starting index
            int k = j + i - 1; // Ending index

            // Initially assume we need one more turn than the substring [j, k-1]
            dp[j][k] = dp[j][k - 1] + 1;

            // Check if any character between j and k matches s[k]
            for (int l = j; l < k; l++) {
                if (s[l] == s[k]) {
                    if (dp[j][l] + dp[l + 1][k - 1] < dp[j][k]) {
                        dp[j][k] = dp[j][l] + dp[l + 1][k - 1];
                    }
                }
            }
        }
    }
    cout << dp[0][s.size() - 1] << '\n';

    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    // cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}

