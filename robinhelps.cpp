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
  int n,k; cin>>n>>k;
  vector<int> v(n);
  f(i,0,n) cin>>v[i];
  int cnt1= 0,ans =0;
  f(i,0,n){
    if(v[i]==0){
      if(cnt1>0) {ans++; cnt1--;}
    }
    else{
      if(v[i]>=k) cnt1+=v[i];
    }
  }
  cout<<ans<<'\n';
  
}
return 0;
}
