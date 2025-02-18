
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
ll cql(ll n) {
    if (n == 0 || n == 1)
        return 1;
    return n * cql(n - 1);
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){
  ll n,k; cin>>n>>k;
  vll res;
res.pb(1);
if(k%3==0){
    res.pb(3);
}
if(n>=3){
    res.pb(3);
 }
if(k==7 || n>=3){
res.pb(7);
}
if(k==5){
res.push_back(5);
 }
if(n >=6){
res.push_back(9);
}
else{
ll see = cql(n);
  ll cal = see*k;
if( cal%9 ==0){
res.push_back(9); }
}
set<ll> s;
f(i,0,res.size()){
  s.insert(res[i]);
}
for(auto it=s.begin();it!=s.end();it++){
  cout<<*it<<" ";
}
cout<<'\n';
}
return 0;
}

