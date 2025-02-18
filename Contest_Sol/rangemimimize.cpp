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
  int n; cin>>n;
  vll v(n);
  f(i,0,n) cin>>v[i];
  if(n==3) { cout<<0<<'\n'; continue;} 
  sot(v);
  ll chk = v[n-3] -v[0];
  ll chk2 = v[n-1] - v[2];
  ll chk3 = v[n-2]-v[1]; 
  cout<<min({chk,chk2,chk3})<<'\n';

}
return 0;
}