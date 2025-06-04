/**
 * writer:blinderchief
 **/
#include <bits/stdc++.h>
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
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
signed main()
{
  auto begin = chrono::high_resolution_clock::now();
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> n >> m;
    vector<int> f(n+1);
    f[0] = 1;
    f[1] = 2;
    // 3,5 
    for (int i = 2; i<=n; i++)
    {
      f[i] = f[i - 1] + f[i - 2];
    }
    for (int i = 0; i < m; i++)
    {
      int temp[3];
      for(int i =0;i<3;i++){
        cin>>temp[i];
      }
      sort(temp,temp+3);
      cout << (temp[0]>= f[n - 1] && temp[2] >=f[n] ? 1 : 0);
    }
    cout << '\n';
  }
  auto end = chrono::high_resolution_clock::now();
  auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
  // cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
  return 0;
}