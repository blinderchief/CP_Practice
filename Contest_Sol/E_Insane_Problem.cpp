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
  ll k,l1,r1,l2,r2; cin>>k>>l1>>r1>>l2>>r2;
  // y/k = x
  ll ck =1;
  ll ans= 0;
  while(ck<=r2/l1){
    ll lo = max(l1,(l2+ck-1)/ck);
    ll hi = min(r1,r2/ck);
    if(lo<=hi){
      ans+=(hi-lo+1);
    }
    ck*=k;
  } 
  cout<<ans<<'\n';
}
return 0;
}

