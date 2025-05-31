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
int get(int a, int b) {
    int la = a & -a;
    int lb = b & -b;
    if (a / la != b / lb || a < b) {
        return lb;
    }
    return la - 2 * lb + 1;
}
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
signed main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
  vector<int> pre(n), suf(n);
    for (int i = 1; i < n; i++) {
        pre[i] = pre[i - 1] + get(a[i - 1], a[i]);
    }
    for (int i = n - 2; i >= 0; i--) {
        suf[i] = suf[i + 1] + get(a[i + 1], a[i]);
    }
    bool flag = true;
    for (int i = 0; i < n; i++) {
        if (pre[i] + (a[i] & -a[i]) + suf[i] >= k) {
            yes
          flag = false;
            break;
        }
    }
  
    if(flag){
      no
    }
}
    
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}