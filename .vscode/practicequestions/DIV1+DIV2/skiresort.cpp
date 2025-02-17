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
  ll n,k,q; cin>>n>>k>>q;
  vll v(n);
  f(i,0,n){
    cin>>v[i];    
  }
  ll cnt=0, res =0;
  f(i,0,n){
    if(v[i]<=q) cnt++;
    else{
      if(cnt>=k){
        int j = 1*k;
        while(j<=cnt){
          res+=ceil(double(cnt)/j);
          j++;
        }
        cnt=0;
      }
      else{
        continue;
      }
    }
  }
  if(cnt>=k){
     int j = 1*k;
        while(j<=cnt){
          res+=ceil(double(cnt)/j);
          j++;
        }
  }
  cout<<res<<'\n';
}
return 0;
}