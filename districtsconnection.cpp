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
int n ;
vector<ll> v(n);
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){
  cin>>n;
  v.resize(n);
  map<ll,int> mp; 
  f(i,0,n) {cin>>v[i]; mp[v[i]]++;}
     if(mp.size()==1) no
     else if(mp.size()==n){
      yes
      for(int i =2;i<n-1;i++){
        cout<<1<<' '<<i<<'\n';
      }
     }
     else{
     for
     } 
}
return 0;
}