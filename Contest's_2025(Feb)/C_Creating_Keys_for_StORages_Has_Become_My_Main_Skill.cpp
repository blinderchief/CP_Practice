/**
 * writer:blinderchief
 **/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define po pop_back
#define me(a, x) memset(a, x, sizeof(a))
#define all(v) v.begin(), v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
#define INF (int)1e18

ll ok(ll x){
  ll k = 0;
  while ((1 << k) < x) k++;
  return k;
}
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
int main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
      int n;
      int x;
      cin >> n >> x;
      if (n == 1){
          cout << x << endl;
          continue;
      }
      int m1 = 0;
      for (; m1 <= n; m1++){
          if ((m1 & (~x)) != 0) break;
      }

      int base = min(m1, n);
      int k = ok(base);
      int r = ((1 << k) - 1);
      bool exact = ((int)r == x);
      int m;
      if (exact) m = base;
      else m = min(m1, n - 1);
      vector<int> key;
      for (int i = 0; i < m; i++) {
          key.push_back(i);
      }
      if (!exact)
          key.push_back(x);
      while ((int)key.size() < n)
          key.push_back(0);
      for (int i = 0; i < n; i++){
          cout << key[i] << (i + 1 == n ? "\n" : " ");
      }
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}
