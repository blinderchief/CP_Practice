// #include <bits/stdc++.h>
// using namespace std;

// #define MAXN 1000

// int q(int a, int b) {
//     cout << "? " << a << " " << b << endl;
//     fflush(stdout);
//     int r;
//     cin >> r;
//     return r;
// }

// void iterativeDFS(int a, int b, vector<int>& vis, vector<pair<int, int>>& edges) {
//     stack<pair<int, int>> stk;
//     stk.push({a, b});
    
//     while (!stk.empty()) {
//         int u = stk.top().first;
//         int v = stk.top().second;
//         stk.pop();
        
//         int x = q(u, v);
//         if (x == u || x == v) {
//             edges.push_back({u, v});
//             vis[x] = 1;
//             vis[v] = 1;
//             continue;
//         }
        
//         if (vis[u] && vis[x]) {
//             stk.push({x, v});
//         } else {
//             stk.push({u, x});
//             stk.push({x, v});
//         }
//     }
// }

// int main() {
//     int t;
//     cin >> t;
    
//     while (t--) {
//         int n;
//         cin >> n;
        
//         if (n == 2) {
//             cout << "! 1 2" << endl;
//             fflush(stdout);
//             continue;
//         }
        
//         vector<int> vis(n + 1, 0);
//         vector<pair<int, int>> edges;
        
//         for (int i = 1; i < n; ++i) {
//             for (int j = i + 1; j <= n; ++j) {
//                 if (vis[j]) continue;
//                 iterativeDFS(i, j, vis, edges);
//             }
//         }
        
//         cout << "!";
//         for (const auto& edge : edges) {
//             cout << " " << edge.first << " " << edge.second;
//         }
//         cout << endl;
//         fflush(stdout);
//     }
    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

#define ll long long int 
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define pb push_back
#define po pop_back
#define all(v) v.begin(),v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(),v.end())

vll adj[1001];
vll vis(1001, 0);
int cnt = 0;

void query(int a, int b) {
    if(vis[a] && vis[b]) return;
    cout << "? " << a << " " << b << endl;
    int node;
    cin >> node;
    if(node == a || node == b) {
        adj[a].pb(b);
        adj[b].pb(a);
        vis[a] = 1;
        vis[b] = 1;
        cnt++;
        return;
    }
    query(a, node);
    query(node, b);
}

void solve() {
    int n;
    cin >> n;
    cnt = 0;
    f(i, 1, n+1) {
        adj[i].clear();
        vis[i] = 0;
    }
    vis[1] = 1;
    f(i, 2, n+1) {
        if(!vis[i]) query(1, i);
    }
    cout << "! ";
    f(i, 1, n+1) {
        for(int ch : adj[i]) if(ch > i) cout << i << " " << ch << " ";
    }
    cout << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
