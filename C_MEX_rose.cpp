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
#define ll long long
#define ull unsigned ll
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define vi vector<int>
#define pb emplace_back
#define po pop_back
#define me(a, x) memset(a, x, sizeof(a))
#define all(v) (v).begin(), (v).end()
#define rall(x) (x).rbegin(), (x).rend()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
#define sz(x) (int)(x).size()
#define inf 0x3f3f3f3f
const int mod = (int)(1e9 + 7);
//Small observations-Think,read Problem again
/*
0 1 3 4 4 7 
0 1 3 4 5 7
*/
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
signed main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
      int n, k; cin >> n >> k;
        vi v(n);
        set<int> s;
        int cnt = 0;
        f(i,0,n) {
            cin >> v[i];
            s.insert(v[i]);
            if (v[i] == k) cnt++;
        }

        int cnt1 = 0;
        int j = 0;
        for (int x : s) {
            if (j >= k) break;      
            if (x > j) {
                cnt1 += (min(x,k)-j);
                j = x + 1;
            } else j++;
        }
        if (j < k) cnt1 += (k - j);
        
            cout << max(cnt, cnt1) << '\n';
        }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}