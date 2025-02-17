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
  int x,y; cin>>x>>y;
  if(x>=2*y || y>=2*x) cout<<0<<'\n';
  else{
    int cnt=0,cnt1 =0,cnt2=0,cnt3 =0;
   while(x<2*y){
    x++;
    cnt++;
   }
  while(y<2*x){
    y++;
    cnt1++;
  }
   while(x<2*y){
    y--;
    cnt2++;
   }
  while(y<2*x){
    x--;
    cnt3++;
  }
  int ams = min({cnt,cnt1,cnt2,cnt3});
  cout<<ams<<'\n';
  }
  
}
return 0;
}