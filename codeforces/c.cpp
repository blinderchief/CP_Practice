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
  int n;cin>>n;
  vll v(n);
  map<int,int> mp;
  f(i,0,n) {cin>>v[i]; mp[v[i]]++;}
  if(n-mp[0]+1>= mp[0]) cout<<0<<'\n';
  else if(n-mp[1]-mp[0]>=1 ||mp[1]==0) 
  cout<<1<<'\n';
  else cout<<2<<'\n';
}
return 0;
}
