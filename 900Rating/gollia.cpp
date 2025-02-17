#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
#define vll vector<ll>
#define pb push_back
#define po pop_back
#define all(v) v.begin(),v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(),v.end())
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){
  int n,m,k; cin>>n>>m>>k;
  int g; cin>>g;
  vll h(g);
  f(i,0,g) cin>>h[i];
  vll b;
  f(i,0,n){
    f(j,0,m){
      int ch = min(min(i + 1, n  - i), min(k, n - k + 1));
			int ch2 = min(min(j + 1, m - j), min(k, m - k + 1));
			b.push_back(ch*ch2);
    }
  }
  sort(h.rbegin(),h.rend());
  sort(b.rbegin(),b.rend());
  ll res =0;
  for(int i =0;i<g && i<b.size();i++){
    res+=1ll*h[i]*b[i];
  }
  cout<<res<<'\n';


}
return 0;
}