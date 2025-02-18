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
  int m; cin>>m;
  vll v(m);
  map<int,int> mp;
  f(i,0,m) {cin>>v[i] ; mp[v[i]]++;}
  if(mp[0]==m) {
    for(int i =1 ;i<=m;i++){
      cout<<i<<" ";
    }
    cout<<'\n';
  }
  else{
     vector<int> bit(32,0);
  for(int i =0;i<m;i++){
    for(int j =31;j>=0;j--){
      if((v[i]>>j)&1){
        bit[j]++;
      }
    }
  }
  int d =0;
  for(int i =0;i<32;i++){
    d =__gcd(d,bit[i]);
  }
  for(int i=1;i<=d;i++){
    if(d%i==0) cout<<i<<" ";
  }
  cout<<'\n';
  }
 
}
return 0;
}