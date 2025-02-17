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
#define me(a, x) memset(a, x, sizeof(a))
#define all(v) v.begin(),v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){
  ll n,x,y;
  cin>>n>>x>>y;
  vll v(n);
  f(i,0,n)cin>>v[i];
  sort(all(v));
  ll sum = accumulate(all(v),0ll);
  ll l =   sum-x;
  ll  h = sum-y;
  ll cnt =0;
  for(int i =0;i<n;i++){
    ll see1 = l-v[i];
    ll see2 = h-v[i];
    auto it1 = lower_bound(v.begin()+i+1,v.end(),see2);
    auto it2 = upper_bound(v.begin()+i+1,v.end(),see1);
      cnt+=(it2 - it1);
  }
  cout<<cnt<<'\n';
}
return 0;
}