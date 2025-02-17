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
const ll MOD = 1e9+7;
int n,k;
int dp[2005][2005];
int cal(int len,int i){
 if(k<=0) return 0;
 if(dp[i][len]!=-1){
  return dp[i][len];
 }
 int ans =0;
 for(int t=i;t<=n;t+=i){
  if(t%i==0){
    ans+=cal(k-1,t)%MOD;
    ans%=
  }
 }
 dp[i][len]=ans;
 return dp[n][k];
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cin>>n>>k;
me(dp,-1);
cout<
return 0;
}