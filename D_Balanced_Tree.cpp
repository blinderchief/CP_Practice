#pragma GCC optimize("O3")
//#pragma GCC optimize("Ofast")
//#pragma GCC optimize("unroll-loops")
//#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;


struct custom_hash {
        static uint64_t splitmix64(uint64_t x) {
                http://xorshift.di.unimi.it/splitmix64.c
                x += 0x9e3779b97f4a7c15;
                x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
                x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
                return x ^ (x >> 31);
        }

        size_t operator()(uint64_t x) const {
                static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
                return splitmix64(x + FIXED_RANDOM);
        }
};
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
template<typename T>
T rand(T a, T b){
    return uniform_int_distribution<T>(a, b)(rng);
}

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
typedef tree<pair<int,int>, null_type, less<pair<int,int>>, rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;
typedef vector<int> vi;


#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) begin(x), end(x)
#define sz(x) static_cast<int>((x).size())
#define int long long

const ll mod = 998244353;
const ll inf = 1e18;

/* ----------------------------------------------------- GO DOWN ---------------------------------------------------------------------- */

void dfs (int x, vector<int> adj[], int p, int l[], int r[], int val[], int p_inc[]) {

        if (sz(adj[x]) == 1 && p != -1) {
                val[x] = l[x];
                p_inc[x] = 0;
                return;
        }

        int sm = 0;
        int mx = 0;
        for (auto u : adj[x]) {
                if (u == p) continue;
                dfs(u, adj, x, l, r, val, p_inc);
                sm += p_inc[u];
        }
        p_inc[x] = sm;
        for (auto u : adj[x]) {
                if (u == p) continue;
                val[u] += sm - p_inc[u];
                mx = max(mx, val[u]);
        }
        l[x] += sm;
        r[x] += sm;
        if (mx >= l[x] && mx <= r[x]) {
                val[x] = mx;
                return;
        }
        if (mx < l[x]) {
                val[x] = l[x];
                return;
        }
        vector<int> v;
        for (auto u : adj[x]) {
                if (u == p) continue;
                v.push_back(val[u]);
        }
        int lef = mx, rig = inf;
        int ne = -1;
        while (lef < rig) {
                int m = (lef + rig) / 2;
                int tot = m - r[x];
                int need = 0;
                for (auto u : v) {
                        need += max(0ll, tot - (m - u));
                }
                if (need <= tot) {
                        ne = need;
                        rig = m;
                }
                else lef = m + 1;
        }
        p_inc[x] += ne;
        val[x] = lef;

}



signed main() {

        ios::sync_with_stdio(0);
        cin.tie(0);

        int t;
        cin >> t;

        while (t--) {

                int n;
                cin >> n;
                int l[n], r[n], val[n], p_inc[n];
                for (int i = 0; i < n; i++) {
                        cin >> l[i] >> r[i];
                }
                vector<int> adj[n];
                for (int i = 1; i < n; i++) {
                        int u, v;
                        cin >> u >> v;
                        u--; v--;
                        adj[u].push_back(v);
                        adj[v].push_back(u);
                }

                dfs(0, adj, -1, l, r, val, p_inc);

                /* for (auto u : val) cout << u << " ";
                cout << "\n";
                for (auto u : p_inc) cout << u << " ";
                cout << "\n"; */
                cout << val[0] << "\n";

        }

       
}