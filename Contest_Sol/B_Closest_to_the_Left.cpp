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
int n,k; cin>>n>>k;
vll v(n),q(k);
f(i,0,n){
  cin>>v[i];
}
while(k--){
  ll x; cin>>x;
  if(x<v[0]) {
    cout<<0<<'\n';
    continue;
  }
  else if(x>=v[n-1]){
   cout<<n<<'\n';
   continue;
  }
  else{
    int lo = 0,hi= n-1, ans =0;
    while(lo<=hi){
      int mid = lo + (hi-lo)/2;
      if(v[mid]<=x){
        ans = mid;
       lo= mid+1;
      }
      else{
        hi=mid-1;
      }
    }
    cout<<ans+1<<'\n';
  }
    }
  
return 0;
}