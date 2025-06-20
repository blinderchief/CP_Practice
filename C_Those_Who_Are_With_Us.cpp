/**
 * writer:blinderchief
 **/
#include<bits/stdc++.h>
using namespace std;
/*
#define LOCAL
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) "india"
#endif
*/
#define int long long
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<int>
#define pb push_back
#define po pop_back
#define me(a, x) memset(a, x, sizeof(a))
#define all(v) v.begin(), v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
#define sz(x) (int)(x).size()
#define INF (int)9e18;
const int mod = (int)(1e9 + 7);
bool check(vector<pair<int,int>> v, int r, int c) {
    for(auto x : v) {
        if(x.first != r && x.second != c) return false;
    }
    return true;
}
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
signed main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
     int n,m;
    cin >> n >> m;
    int a[n][m];
    int ma = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
            ma = max(ma, a[i][j]);
        }
    }
    vector<pair<int,int>> v;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(a[i][j] == ma) {
                v.push_back(make_pair(i,j));
            }
        }
    }
    if(v.size() == 1) {
        cout << ma - 1 << '\n';
        continue;
    }
    if(v[0].first  == v[1].first) {
        int r = v[0].first, c = -1;
        bool flag = true;
        for(int i = 0; i < v.size(); i++) {
            if(v[i].first != r) {
                if(c == -1) {
                    c = v[i].second;
                    continue;
                }
                else if(c != v[i].second) {
                    flag = false;
                    break;
                }
            }
        }
        if(flag) {
            cout << ma - 1 << '\n';
            continue;
        }
    }
    if(v[0].second  == v[1].second) {
        int c = v[0].second, r = -1;
        bool flag = true;
        for(int i = 0; i < v.size(); i++) {
            if(v[i].second != c) {
                if(r == -1) {
                    r = v[i].first;
                    continue;
                }
                else if(r != v[i].first) {
                    flag = false;
                    break;
                }
            }
        }
        if(flag) {
            cout << ma - 1 << '\n';
            continue;
        }
    }
 
    if(check(v, v[0].first, v[1].second) || check(v,v[1].first,v[0].second)) {
        cout << ma - 1 << '\n';
        continue;
    }
    cout << ma << '\n';
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}