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
  ll res =0, chek = 0;
  int n; cin>>n;
  vector<ll> v(n);
  f(i,n){
    cin>>v[i];
  }
  f(i,n-1){
    if(v[i+1]<v[i]){
       res+=v[i]-v[i+1];
      chek = max(chek,v[i]-v[i+1]);
      v[i+1] = v[i];
     
    }
  }
  res+=chek;
  cout<<res<<'\n';
}
return 0;
}





