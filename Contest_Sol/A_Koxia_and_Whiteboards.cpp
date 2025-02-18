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
int n,m; cin>>n>>m;
  vll a(n+m-1);
  f(i,0,n+m-1) cin>>a[i];
 
 ll sum;
 cin>>sum;
 sort(a.rbegin(),a.rend());
 for(int i =0;i<n-1;i++){
  sum+=a[i];
 }
  cout<<sum<<'\n';
  }
return 0;
}