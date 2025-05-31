

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
#define MOD (998244353)
int po[100001];
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
signed main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
     po[0] = 1;
    for(int i =1 ; i<= 100000; i++) {
        po[i] = 2 * po[i-1] % MOD;
    }
    while (t--) {
      int n; cin>>n;
      vll a(n),b(n);
      f(i,0,n) cin>>a[i];
      f(i,0,n) cin>>b[i];
      vll ans;
      vll posa(n),posb(n);
      f(i,0,n){
        posa[a[i]]=i;
        posb[b[i]]=i;
      }
      set<int> sa, sb;
    f(i,0,n) {
        sa.insert(a[i]);
        sb.insert(b[i]);
        int x = *sa.rbegin();
        int y = *sb.rbegin();
        pair<int,int> p1 = make_pair(x, b[i - posa[x]]);
        pair<int,int> p2 = make_pair(y, a[i - posb[y]]);
        pair<int,int> ansp = max(p1,p2);
        ans.push_back((po[ansp.first] + po[ansp.second]) % MOD);
    }
    f(i,0,n) {
        cout << ans[i] << ' ';
    }
    cout<<'\n';
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}