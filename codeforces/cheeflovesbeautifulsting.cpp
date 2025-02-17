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
  string s; cin>>s;
  vector<int> chk;
  for(int i=0;i<n-1;i++){
  chk.push_back((s[i]-'0')+(s[i+1]-'0'));
  }
  map<int,int> mp;
  f(i,0,chk.size()){
    mp[chk[i]]++;
  }
  int se = n-1;
  ll ans =0;
  while(se--){
    if(mp[0]!=0 && mp[1]>0){
      ans+=mp[1];
      mp[0]--;
    }
    else if(mp[2]!=0 && mp[1]>0){
      mp[2]--;
      ans+=mp[1];
    }
    else if(mp[1]>1){
      mp[1]-=1;
      ans+=mp[1];
    }
    
  }
  cout<<ans<<'\n';
}
return 0;
}