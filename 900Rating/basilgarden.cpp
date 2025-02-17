#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,n) for(int i =0;i<n;i++)
#define sot(v) sort(v.begin(),v.end())
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){
  int n;cin>>n;
  ll chek =0;
  vector<ll> v(n);
  f(i,n){
    cin>>v[i];
  }
  f(i,n){
    if(v[i]+i>chek){
       chek = v[i]+i;
    }
  }
  cout<<chek<<'\n';
}
return 0;
}


