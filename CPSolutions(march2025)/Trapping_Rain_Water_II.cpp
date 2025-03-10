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
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int n, m;
//     cin >> n >> m;
//     vector<vector<int>> v(n, vector<int>(m));
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> v[i][j];
//         }
//     }
//     if (n < 3 || m < 3) {
//         cout << 0 <<'\n';
//         return 0;
//     }
//     vector<vector<bool>> visited(n, vector<bool>(m, 0));
//     priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> minHeap;
    
//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < m; ++j) {
//             if (i == 0 || i == n - 1 || j == m - 1) {
//                 minHeap.push(make_tuple(v[i][j], i, j));
//                 visited[i][j] = 1;
//             }
//         }
//     }

//     vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
//     int ans = 0;
//     int see = 0;
//     while (!minHeap.empty()) {
//         auto [h, r, c] = minHeap.top();
//         minHeap.pop();
        
//         if (h < see) {
//             ans += see - h;
//         } else {
//             see = h;
//         }
        
//         for (const auto& i : d) {
//             int nr = r + i.first;
//             int nc = c + i.second;
//             if (nr >= 0 && nr < n && nc >= 0 && nc < m && !visited[nr][nc]) {
//                 visited[nr][nc] = 1;
//                 minHeap.push(make_tuple(v[nr][nc], nr, nc));
//             }
//         }
//     }
    
//     cout << ans <<'\n';
//     return 0;
// }

/**
 * writer:blinderchief
 **/
#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
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
    int n,m;cin>>n>>m;
    vector<vector<int>> v(n,vector<int>(m));
    f(i,0,n){
        f(j,0,m){
            cin>>v[i][j];
        }
    }
    if(n<3 || m<3) {
        cout<<0<<'\n';
        return 0;
    }
    priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<tuple<int,int,int>>> minpq;
    int ans=0;
    int ckmaxi =0;
    vector<vector<int>> vis(n,vector<int>(m,0));
  for(int i= 0;i<n;i++){
    f(j,0,m){
        if(i==0||i==n-1 || j==m-1){
            minpq.push(make_tuple(v[i][j],i,j));
            vis[i][j]=1;
        }
    }
  }
  vector<pair<int,int>> dir = {{-1,0},{1,0},{0,-1},{0,1}}
; while(!minpq.empty()){
    // what to do
    auto [h,r,c]  =minpq.top();
    minpq.pop();
    if(h<ckmaxi){
        ans+=(ckmaxi-h);
        debug(ans);
    }
    else{
        ckmaxi =h;
    }
    for(const auto& i:dir){
        int nr = r+i.first;
        int nc = c+i.second;
        if(nr>=0 && nr<n && nc>=0 && nc<m && 
            !vis[nr][nc]){
                minpq.push(make_tuple(v[nr][nc],nr,nc));
                vis[nr][nc]=1;
        }
    }
  }
  cout<<ans;
   
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}
