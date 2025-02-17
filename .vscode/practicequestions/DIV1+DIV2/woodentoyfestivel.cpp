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
  f(i,0,n){
    cin>>v[i];
  }
  sot(v);
  ll x3 = (v[0]+v[n-1])/2;
  ll x1 = (v[0]+x3)/2,x2 = (x3+v[n-1])/2;
  vll chk;
  f(i,0,n){
    if(i >(n/2)){
      
    }
  }
  
}
return 0;
}
