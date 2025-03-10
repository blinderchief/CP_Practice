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
    int t; cin>>t;
    while(t--){
      int n, k;
      cin >> n >> k;
      vector<int> a(n);
      for (int i = 0; i < n; i++) {
        cin >> a[i];
      }
      vector<int> b = a;
      sort(b.begin(), b.end());
      int low = 0, high = (int) 1e9;
      while (low < high) {
        int mid = (low + high + 1) >> 1;
        bool found = false;
        for (int i = 0; i < n - 1; i++) {
          int cnt = 0;
          if (a[i] < mid) {
            cnt += 1;
          }
          if (a[i + 1] < mid) {
            cnt += 1;
          }
          int val = (mid + 1) / 2;
          cnt += (int) (lower_bound(b.begin(), b.end(), val) - b.begin());
          if (a[i] < val) {
            cnt -= 1;
          }
          if (a[i + 1] < val) {
            cnt -= 1;
          }
          if (cnt <= k) {
            found = true;
            break;
          }
        }
        if (found) {
          low = mid;
        } else { 
          high = mid - 1;
        }
      }
      cout << low << '\n';
    }
    
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}


