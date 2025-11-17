#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct DP {
    ll a, b, c;
};

DP dfs(int u, int p, ll wp, ll l, const vector<vector<pair<int, ll>>>& adj) {
    DP res;
    ll suma = 0;
    ll sumc = 0;
    for (auto& pr : adj[u]) {
        int v = pr.first;
        ll w = pr.second;
        if (v == p) continue;
        DP dv = dfs(v, u, w, l, adj);
        ll maxab = max(dv.a, dv.b);
        suma += maxab;
        ll not_att = -w + maxab;
        ll att = dv.c;
        sumc += max(not_att, att);
    }
    res.a = suma;
    res.c = sumc;
    res.b = l - wp + sumc;
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int test = 0; test < t; ++test) {
        int n;
        cin >> n;
        vector<vector<pair<int, ll>>> adj(n + 1);
        for (int i = 0; i < n - 1; ++i) {
            int u, v;
            ll w;
            cin >> u >> v >> w;
            adj[u].emplace_back(v, w);
            adj[v].emplace_back(u, w);
        }
        int q;
        cin >> q;
        for (int iq = 0; iq < q; ++iq) {
            ll l;
            cin >> l;
            DP dp = dfs(1, -1, 0LL, l, adj);
            ll ans = max(dp.a, dp.b);
            cout << ans << '\n';
        }
    }
    return 0;
}