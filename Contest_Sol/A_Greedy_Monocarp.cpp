/**
 * writer:blinderchief 
**/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
#define vll vector<ll>
#define vi vector<int>
#define pb emplace_back
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
  int n,k; cin>>n>>k;
 vi v(n);
  int sum =0;
 f(i,0,n){
  cin>>v[i];
  sum+=v[i];
 }
 if(sum<=k){
  cout<<k-sum<<"\n";
  continue;
 }
 sort(v.rbegin(),v.rend());
 sum =0;
 int cnt =0;
 bool flag = false;
 f(i,0,n){
  if(sum==k){
    cout<<0<<'\n';
    flag =true;
    break;
  }
  if(sum+v[i]>k){
     cout<<abs(k-sum)<<"\n";
     flag = true;
     break;
  }
   sum+=v[i];
 }
 if(!flag){
   cout<<abs(k-sum)<<'\n';
 }
}
return 0;
}