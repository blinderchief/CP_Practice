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
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
int main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
      int n, m;
      cin >> n >> m;
      
      vector<pair<ll, ll>> v(n);
      for (int i = 0; i < n; ++i) {
          vector<ll> a(m);
          for (int j = 0; j < m; ++j) {
              cin >> a[j];
          }
          ll sum = 0;
          ll c = 0;
          for (int j = 0; j < m; ++j) {
              sum += a[j];
              c += a[j] * j;
          }
        v[i] = {sum, c};
      }
      
      sort(all(v), greater<pair<ll, ll>>());
      
      long long sum_over_p = 0;
      for (int p = 0; p < n; ++p) {
          sum_over_p += (n - p) * v[p].first;
      }
      
      long long sum_over_c_p = 0;
      for (int p = 0; p < n; ++p) {
          sum_over_c_p +=v[p].second;
      }
      
      ll total= m * sum_over_p - sum_over_c_p;
      cout << total<< '\n';
  
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}
