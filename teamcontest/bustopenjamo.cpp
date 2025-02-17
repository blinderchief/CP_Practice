#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
#define vll vector<ll>
#define pb push_back
#define po pop_back
#define all(v) v.begin(),v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(),v.end())
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){
  int n,m;cin>>n>>m;
 vector<int> v(n);
 map<int,int> mp;
 f(i,0,n){
  cin>>v[i];
 }
 int cnto =0;
 int cnte =0;
 int ans  = accumulate(all(v),0);
 int cnt =0;
 f(i,0,n){
  if(v[i]%2==1){
    cnto++;
    cnte+=(v[i]-1);
    cnt+=(v[i]-1)/2;
  }
  else{
       cnte+=(v[i]);
       cnt+=(v[i])/2;
  }
 }
 int res =0;
 if(cnto%2==1){
  cnt+=(cnto-1)/2;
  cnte++;
  cnt++;
  res = m-cnt;
  cnte+=res*2;
 }
 else{
  cnt+=cnto/2;
  res = m-cnt;
  cnte+=res*2;
 }
 cout<<min(ans,cnte)<<'\n';

}
return 0;
}