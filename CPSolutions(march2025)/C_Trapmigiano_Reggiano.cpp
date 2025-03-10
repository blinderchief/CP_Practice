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
void dfs(int node, int parent, vector<int> &dist, vector<vector<int>> &adj) {
  for (int neighbor : adj[node]) {
      if (neighbor != parent) {
          dist[neighbor] = dist[node] + 1;
          dfs(neighbor, node, dist, adj);
      }
  }
}
void solve() {
  int n, st, en;
  cin >> n >> st >> en;
  
  vector<vector<int>> adj(n + 1);
  for (int i = 0; i < n - 1; i++) {
      int u, v;
      cin >> u >> v;
      adj[u].push_back(v);
      adj[v].push_back(u);
  }
  
  vector<int> dist(n + 1, -1);
  dist[en] = 0;
  dfs(en, -1, dist, adj);
  
  vector<int> nodes(n);
  iota(nodes.begin(), nodes.end(), 1);
  sort(nodes.begin(), nodes.end(), [&](int a, int b) {
      return dist[a] > dist[b];
  });
  
  for (int x : nodes) cout << x << " ";
  cout << "\n";
}
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
int main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}
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
// void dfs(int node, int parent, vector<int> &dist, vector<vector<int>> &adj) {
//   for (int neighbor : adj[node]) {
//       if (neighbor != parent) {
//           dist[neighbor] = dist[node] + 1;
//           dfs(neighbor, node, dist, adj);
//       }
//   }
// }
// void solve() {
//   int n, st, en;
//   cin >> n >> st >> en;
  
//   vector<vector<int>> adj(n + 1);
//   for (int i = 0; i < n - 1; i++) {
//       int u, v;
//       cin >> u >> v;
//       adj[u].push_back(v);
//       adj[v].push_back(u);
//   }
  
//   vector<int> dist(n + 1, -1);
//   dist[en] = 0;
//   dfs(en, -1, dist, adj);
  
//   vector<int> nodes(n);
//   iota(nodes.begin(), nodes.end(), 1);
//   sort(nodes.begin(), nodes.end(), [&](int a, int b) {
//       return dist[a] > dist[b];
//   });
  
//   for (int x : nodes) cout << x << " ";
//   cout << "\n";
// }
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
// int main() {
//     auto begin = chrono::high_resolution_clock::now();
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int t; cin >> t;
//     while (t--) {
//         solve();
//     }
//     auto end = chrono::high_resolution_clock::now();
//     auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
//    //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
//     return 0;
// }