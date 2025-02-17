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
  int n; cin>>n; 
  vector<ll> v(n);
  f(i,n){
    cin>>v[i];
  }
  if(v[0]==v[n-1]){
    cout<<"NO"<<'\n';
    continue;
  }
  else{
    string s(n,'R');
    s[1]='B';
    cout<<"YES"<<'\n';
  }
  
}
return 0;
}