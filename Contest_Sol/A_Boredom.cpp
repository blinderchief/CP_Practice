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
const int mx = 100010; 
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int n;  cin>>n;
vi v(n);
map<int,int> mp;
f(i,0,n){
  cin>>v[i];
  mp[v[i]]++;
}
vector<ll> dp(mx);
dp[0] = 0;
dp[1] = mp[1];
f(i,2,mx+1){
dp[i] = max(dp[i-1],i*mp[i]+dp[i-2]);
}
cout<<dp[mx];
return 0;
}