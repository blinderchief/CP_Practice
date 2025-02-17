/**
 * writer:blinderchief 
**/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define po pop_back
#define all(v) v.begin(),v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int n;
 cin>>n;
vi v(n+1);
ll sum =0;
map<int,ll> mp;
f(i,1,n+1){
  cin>>v[i];
  mp[v[i]-i]+=v[i];
}
  ll ans  = 0;
  for(auto it= mp.begin();it!=mp.end();it++){
    ans = max(ans,it->second);
  }
  cout<<ans;
return 0;
}