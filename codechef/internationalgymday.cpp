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
  int d,x,y;cin>>d>>x>>y;
  if(x==y){ cout<<0<<"\n"; continue;}
  int ch = 0;
  int cnt=0;
  if(((d/100.0)*x)<1) {cout<<-1<<"\n"; continue;}
  while(y>0  && y*100<(x*((100-ch)))){
   ch+=d;
   cnt++;
   y--;
  } 
  if(y==0 && x*(100-ch)>y*100) cout<<-1<<'\n';
  else cout<<cnt<<"\n";
  
  
  
  }
return 0;
}