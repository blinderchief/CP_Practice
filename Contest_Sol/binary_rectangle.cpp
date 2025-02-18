#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,n) for(int i =0;i<n;i++)
bool check(ll mid, ll w, ll h,ll n){
ll r = mid/w;
ll c = mid/h;
return (r*c) >=n;
}
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
ll w,h,n; cin>>w>>h>>n;
ll l = 0, r = max(w,h)*n;
while(r-l>1){
  ll mid = l+(r-l)/2;
  if(check(mid,w,h,n)){
    r = mid;
  } 
  else{
    l = mid;
  }
} 
cout<<r<<'\n';
return 0;

}