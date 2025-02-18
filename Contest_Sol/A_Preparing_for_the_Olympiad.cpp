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
  int n;cin>>n;
  vector<int> a(n);
  vector<int> b(n);
  f(i,0,n){
    cin>>a[i];
  }
  f(i,0,n){
    cin>>b[i];
  }
  if(n==1){ cout<<a[0]<<'\n'; continue;}

  ll ans =0;
  for(int i =0;i<n-1;i++){
   if(a[i]-b[i+1]>0){
    ans+=(a[i]-b[i+1]);
   }    
  }
  cout<<ans+a[n-1]<<'\n';

}
return 0;
}
