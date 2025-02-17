#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,n) for(int i =0;i<n;i++)
#define sot(v) sort(v.begin(),v.end())
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int n,x,y; cin>>n>>x>>y;
vector<ll> v(n);
f(i,n){
  cin>>v[i];
}
f(i,n){
  bool chek = false;
  for(int j=i-1;j>=0 && j>=i-x && !chek;j--){
    if(v[j]<=v[i]) {chek = true; break;}
  
  }
  for(int j=i+1;j<n && j<=i+y  && !chek;j++){
     if(v[j]<=v[i]) {chek = true; break;}
       }
  if(!chek) {cout<<i+1<<'\n'; break;}
 
}
return 0;
}