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
vi v(n);
f(i,0,n) cin>>v[i];

vi I(n+1),fr(n+1);
I[0] = fr[0]=0;
for(int i =n-1;i>=0;i--){
  {
    fr[i]=I[i+1]+v[i];
    if(i+2<=n){
      fr[i] =min(fr[i],I[i+2]+v[i]+v[i+1]);
    }
  }
  {
   I[i] = fr[i+1];
   if(i+2<=n) {
    I[i]= min(I[i],fr[i+2]);
   }
  }
}
cout<<fr[0]<<'\n';

}

return 0;
}