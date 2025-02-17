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
int lcm(ll a,ll b){
return (a*b) /__gcd(a,b);
}
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){
  ll a,b;cin>>a>>b;
 if(b%a==0){
cout<<b/a*b<<"\n";
 }
 else{
  cout<<lcm(a,b)<<"\n";
 }
}
return 0;
}