
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

int n, m, b = 0;
vector<vector<int>> adj;
vector<int> v, vis;

void dfs(int a, int k) {
    vis[a] = 1;
    if(k > m) return; 
    int flag = 1;
    for(auto &i : adj[a]) {
        if(!vis[i]) {
            flag = 0;
            dfs(i, k*v[i] + v[i]); 
        }
    }
    if(flag) b++;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

        cin >> n >> m;
        v.resize(n);
        vis.assign(n, 0);
        adj.assign(n, vector<int>());

        f(i, 0, n) cin >> v[i];

        f(i, 0, n - 1) {
            int u, v;
            cin >> u >> v;
            u--; v--;
            adj[u].pb(v);
            adj[v].pb(u);
        }

        b = 0;
        dfs(0, v[0]);
        cout << b << '\n';
    

    return 0;
}
