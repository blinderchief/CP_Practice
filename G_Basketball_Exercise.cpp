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
  int n; cin>>n;
  vector<vll> dp(n+2,vll(3,0));
  vll a(n);
  vll b(n);
  f(i,1,n+1) cin>>a[i];
  f(i,1,n+1) cin>>b[i];
 dp[1][0] = a[1];
 dp[1][1] = b[1];
 dp[1][2] = 0;
  f(i,2,n+1){
   dp[i][0] = max(dp[i-1][1],dp[i-1][2])+a[i];
   dp[i][1] = max(dp[i-1][0],dp[i-1][2])+ b[i];
   dp[i][2] = max({dp[i-1][0],dp[i-1][1],dp[i-1][2]});
  }
  cout<<max({dp[n][0],dp[n][1],dp[n][2]});

return 0;
}