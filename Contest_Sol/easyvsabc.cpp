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
  vector<vector<char>> v(3);
  map<char,int> mp;
  f(i,0,3){
    f(j,0,3){
      cin>>v[i][j];
      mp[v[i][j]]++;
    }
  }
  if(mp['A']==6) {cout<<"AAA"<<'\n'; continue;}
  else if(mp['B']==6) {cout<<"BBB"<<'\n'; continue;}
  else if(mp['C']==6) {cout<<"CCC"<<"\n"; continue;}
  if(mp['A']>0)  



}
return 0;
}