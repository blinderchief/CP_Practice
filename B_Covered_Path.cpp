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
int x,y;cin>>x>>y;
int t,k; cin>>t>>k;
int ind =1;
int val =x;
int ans =x;
if(k==0){
  cout<<x*t;
  return 0;
}

while(ind<t){
  if(abs(val+k-y)>(t-ind-1)*k){
    break;
  }
  else{
    ind++;
    val+=k;
  ans+=val;
  }

}
ind++;
int sto = y;
sto+=(t-ind)*k;
for(int i=sto;i>=y;i-=k){
  ans+=i;
}
cout<<ans<<'\n';
return 0;

}