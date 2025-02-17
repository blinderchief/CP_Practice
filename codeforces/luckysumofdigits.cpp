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

  int x; cin>>x;
  int ch=0;
  while(x%7!=0){
  x-=4;
  ch++;
  } 
  if(x<0) cout<<"-1\n";
  else{
  f(i,0,ch) cout<<'4';
  f(i,0,x/7) cout<<'7';
  cout<<'\n'; 
  }
 

return 0;
}