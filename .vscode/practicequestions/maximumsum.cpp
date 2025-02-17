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
const ll mod = 1000000007;
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){
  int n,k; 
  cin>>n>>k;
  ll p[200001];
  p[0] =0;
  vll v(n);
  f(i,0,n){
    cin>>v[i];
  p[i+1] = p[0] + v[i];
  }
  ll c = (p[n]-v[0])%mod;
  ll d =0;
  f(i,0,k){
    d = (d*2 +1)%mod;
  }  
  ll s = (p[n]%mod +mod)%mod;
  cout<<(s+ c*d)%mod<<'\n';
  }
return 0;
}