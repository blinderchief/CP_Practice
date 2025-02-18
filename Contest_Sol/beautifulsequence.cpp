
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
const ll MOD = 998244353;
ll correcting(ll base, ll exp, ll mod){
  long long res = 1;
  base %= mod;
  while(exp){
      if(exp & 1) res = (res * base) % mod;
      base = (base * base) % mod;
      exp >>= 1;
  }
  return res;
}
int maxN = 200000 + 5; 
vll pow2(maxN), invPow2(maxN);
void precompute(){
pow2[0] = 1;
for (int i = 1; i < maxN; i++){
    pow2[i] = (pow2[i-1] * 2) % MOD;
}
// inverse of 2 modulo MOD.
ll inv2 = correcting(2, MOD - 2, MOD);
invPow2[0] = 1;
for (int i = 1; i < maxN; i++){
    invPow2[i] = (invPow2[i-1] * inv2) % MOD;
}
}
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
int main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    precompute();
    while (t--) {
      int n;
      cin >> n;
      vector<int> a(n);
      for (int i = 0; i < n; i++){
          cin >> a[i];
      }

      vector<int> pref2(n+1, 0);
      for (int i = 1; i <= n; i++){
          pref2[i] = pref2[i-1] + (a[i-1] == 2);
      }

      ll ans = 0;
      ll suminv = 0;
      ll countone = 0;
      f(i,1,n+1){
          if(a[i-1] == 1){
              suminv = (suminv + invPow2[pref2[i]]) % MOD;
              countone++;
          }
          if(a[i-1] == 3){
              ll cal = (pow2[pref2[i-1]] * suminv) % MOD;
              cal = (cal - countone) % MOD;
              if(cal < 0) cal += MOD;
              ans = (ans + cal) % MOD;
          }
      }
      cout << ans % MOD << "\n";
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}