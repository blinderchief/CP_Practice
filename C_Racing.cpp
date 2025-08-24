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
// Small observations-Think,read Problem again
/*
 */
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
signed main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--)
    {
      int n;
      cin >> n;
      int d[n];
      int L[n], R[n];
      for (int i = 0; i < n; i++)
      {
        cin >> d[i];
      }
      for (int i = 0; i < n; i++)
      {
        cin >> L[i] >> R[i];
      }
      int l = 0, r = 0;
      int hl[n], hr[n];
      bool flag = false;
      f(i, 0, n)
      {
        if (d[i] == 1)
        {
          l++;
          r++;
        }
        if (d[i] == -1)
        {
          r++;
        }
        l = max(l, L[i]);
        r = min(r, R[i]);
        hl[i] = l;
        hr[i] = r;
        if (l > r)
        {
          cout << -1 << '\n';
          flag = true;
          break;
        }
      }
      if (flag)
        continue;
      int x = l;
      for (int i = n - 1; i >= 0; i--)
      {
        if (d[i] != -1)
        {
          x -= d[i];
        }
        else if ((i == 0 ? x == 0 : (x >= hl[i - 1] && x <= hr[i - 1] && x >= hl[i] && x <= hr[i])))
        {
          d[i] = 0;
        }
        else
        {
          x--;
          d[i] = 1;
        }
      }
      f(i, 0, n)
      {
        cout << d[i] << " ";
      }
      cout << '\n';
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}