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
int n,m;cin>>n>>m;

vll v(n);
f(i,0,n) cin>>v[i];
sot(v);
vll pref(n+1);
pref[0] = v[0];
f(i,1,n){
  pref[i] = pref[i-1] + v[i];
}
ll ans =0;

for(int i =0;i<n;i++){
 if(i>=m){
  v[i] += v[i-m];
 }
 ans+=v[i];
 cout<<ans<<" ";
}

return 0;
}