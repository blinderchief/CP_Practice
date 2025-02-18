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
bool isprime(ll chk) {
    if (chk <= 1) return false; 
    if (chk <= 3) return true; 
    if (chk % 2 == 0 || chk % 3 == 0) return false;
    for (ll i = 5; i * i <= chk; i += 6) {
        if (chk % i == 0 || chk % (i + 2) == 0) {
            return false; 
        }
    }
    return true;
}
int main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        ll l,r;cin>>l>>r;
        if(l==r){
          if(l==1) cout<<1<<'\n';
          else if(isprime){
            cout<<0<<'\n';
          }
          else {
            cout<<1<<'\n';
          }
        }
        else{
          cout<<abs(l-r)<<'\n';
        }
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}