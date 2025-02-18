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
int t; cin>>t;
while(t--){
  ll n;cin>>n;
 vll v(n);
 ll maxi = LONG_LONG_MIN;
 f(i,0,n){
   cin>>v[i];
   maxi = max(maxi,v[i]);
 }
 vll odd,even;
 ll temp =0;
 f(i,0,n){
  if(i%2){

    odd.pb(v[i]);
  }
  else {
    even.pb(v[i]);
  }
 }
 sort(odd.rbegin(),odd.rend());
 sort(even.rbegin(),even.rend());
 f(i,0,odd.size()){
  temp +=odd[i];
  maxi = max(maxi,temp);
 }
 temp =0;
 f(i,0,even.size()){
  temp+=even[i];
  maxi = max(maxi,temp);
 }
 cout<<maxi<<'\n';
}
return 0;
}