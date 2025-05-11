/**
 * writer:blinderchief
 **/
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define po pop_back
#define all(v) v.begin(), v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
#define sz(x) (int)(x).size()
#define INF (int)9e18;
const int mod = (int)(1e9 + 7);

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin >> t;
    while (t--) {
      int n, x;
      cin>>n>>x;
      int y = __builtin_popcountll(x);
      if(y>n){
          cout<<x<<'\n';
          continue;
      }
      int ans = x + (n-y);
      if((n-y)%2) {
          if(y<=1 && n==1){
              cout<<"-1\n";
              continue;
          }
          if(x==0 || x==1) ans+=3;
          else ans++;
      }
      cout<<ans<<'\n';
  }

    return 0;
}