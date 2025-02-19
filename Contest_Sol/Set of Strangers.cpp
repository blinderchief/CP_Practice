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
//     int t; cin >> t;
//     while (t--) {
//       int n, m; 
//         cin >> n >> m;
        
//         vector<int> prevRow(m), currRow(m);
//         unordered_map<int,int> cost; 
        
//         for (int j = 0; j < m; j++){
//             cin >> prevRow[j];
//             if(cost.find(prevRow[j]) == cost.end())
//                 cost[prevRow[j]] = 1;
//         }
//         for (int j = 0; j < m - 1; j++){
//             if(prevRow[j] == prevRow[j+1])
//                 cost[prevRow[j]] = 2;
//         }
 
//         for (int i = 1; i < n; i++){
//             for (int j = 0; j < m; j++){
//                 cin >> currRow[j];
//                 if(cost.find(currRow[j]) == cost.end())
//                     cost[currRow[j]] = 1;
//             }
//             for (int j = 0; j < m - 1; j++){
//                 if(currRow[j] == currRow[j+1])
//                     cost[currRow[j]] = 2;
//             }
//             for (int j = 0; j < m; j++){
//                 if(currRow[j] == prevRow[j])
//                     cost[currRow[j]] = 2;
//             }
//             prevRow = currRow;
//         }
 
//         int totalCost = 0, maxCost = 0;
//         for(auto &p : cost){
//             totalCost += p.second;
//             maxCost = max(maxCost, p.second);
//         }
 
//         cout << totalCost - maxCost << "\n";

//     }
//     auto end = chrono::high_resolution_clock::now();
//     auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
//    //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
//     return 0;
// }


// // /**
// //  * writer:blinderchief
// //  **/
// // #include<bits/stdc++.h>
// // using namespace std;
// // #define ll long long int
// // #define f(i,a,n) for(int i = a; i < n; i++)
// // #define vll vector<ll>
// // #define vi vector<int>
// // #define pb push_back
// // #define po pop_back
// // #define me(a, x) memset(a, x, sizeof(a))
// // #define all(v) v.begin(), v.end()
// // #define no cout << "NO" << '\n';
// // #define yes cout << "YES" << '\n';
// // #define sot(v) sort(all(v))
// // #define INF (int)1e18
// // mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
// // int main() {
// //     auto begin = chrono::high_resolution_clock::now();
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(0);
// //     int t; cin >> t;
// //     while (t--) {
// //       int n, m;
// //       cin >> n >> m;
// //       vector<vector<int>> grid(n, vector<int>(m));
// //       set<int> s;
// //       unordered_map<int, bool> mp;
// //       for (int i = 0; i < n; ++i) {
// //           for (int j = 0; j < m; ++j) {
// //               cin >> grid[i][j];
// //               s.insert(grid[i][j]);
// //           }
// //         }
// //       for (int x : s) {
// //           mp[x] = false;
// //       }
// //       for (int i = 0; i < n; ++i) {
// //           for (int j = 0; j < m; ++j) {
// //               int color = grid[i][j];
// //               if (j < m - 1 && grid[i][j + 1] == color) {
// //                   mp[color] = true;
// //               }
// //               if (i < n - 1 && grid[i + 1][j] == color) {
// //                   mp[color] = true;
// //               }
// //           }
// //       }

// //       int ans = INT_MAX;
// //       for (int c : s) {
// //           int steps = 0;
// //           for (int d : s) {
// //               if (d == c) continue;
// //               steps += mp[d] ? 2 : 1;
// //           }
// //           ans= min(ans, steps);
// //       }

// //       cout <<ans << '\n';

// //     }
// //     auto end = chrono::high_resolution_clock::now();
// //     auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
// //    //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
// //     return 0;
// // }

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
    int t; cin >> t;
    while (t--) {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));
 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cin>>arr[i][j];
    }
 
    map<int,int>mp;
    int maxi=0;
 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        { 
            int temp = 1;
            if(i+1<n && arr[i][j]== arr[i+1][j]) temp++; 
            if(j+1<m && arr[i][j]== arr[i][j+1]) temp++; 
            if(i-1>=0 && arr[i][j]== arr[i-1][j]) temp++; 
            if(j-1>=0 && arr[i][j]== arr[i][j-1]) temp++; 
            
            if(temp>1)
            temp =2;
 
            mp[arr[i][j]] = max(temp,mp[arr[i][j]]);
    
            maxi = max(maxi,mp[arr[i][j]]);
        }
    }
    
    int sum =0;
    for(auto it: mp)
    {
        sum+=it.second;
    }
 
    cout<<sum-maxi<<'\n';
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}


