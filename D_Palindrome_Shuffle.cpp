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
          string s;
          cin >> s;
          int n = s.size();
          vector<int> left[26], right[26];
          for (int i = 0; i < n / 2; i++) {
              left[s[i] - 'a'].push_back(i);
              
          }
          for (int i = n / 2; i < n; i++) {
              right[s[i] - 'a'].push_back(i);
          }
          
          int lm = n, rm = -1;
     
          for (int i = 0; i < 26; i++) {
              int diff = ((int)left[i].size() - (int)right[i].size()) / 2;
             // cout << diff << "\n";
              if (!diff) {
                  continue;
              }
              if (diff > 0) {
                  lm = min(lm, left[i][(int)left[i].size() - diff]);
                  
              } else {
                  diff = -diff;
                  rm = max(rm, right[i][diff - 1]);
              }
          }
          
         // cout << lm << " " << rm << "\n";
          if (lm != n) {
              int ans = rm - lm + 1;
              for (int i = 0; i < n / 2; i++) {
                  if (i == lm || n - i - 1 == rm) {
                      break;
                  }
                  if (s[i] != s[n - 1 - i]) {
                      ans = min(rm - i, n - 1 - i - lm) + 1;
                      break;
                      
                  }
                  
              }
              cout << ans << "\n";
          } else {
             // cout << "HOLA\n";
              for (int i = 0; i < n / 2; i++) {
                  if (s[i] != s[n - 1 - i]) {
                      lm = i;
                      break;
                  }
              }
              
             // cout << lm << "\n";
              if (lm == n) {
                  cout << 0 << "\n";
              } else {
                  for (int i = n / 2 - 1; ; i--) {
                      if (s[i] != s[n - 1 - i]) {
                          rm = i;
                          break;
                      }
                  }
                  cout << rm - lm + 1 << "\n";
              }
          
    }
  }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}