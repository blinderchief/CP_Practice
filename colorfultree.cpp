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
  int n; cin>>n;
  vector<vector<int>> adj(n+1);
  int cntl =0,nodes =0;
  f(i,0,n-1){
    int x,y;cin>>x>>y;
    adj[x].pb(y);
    adj[y].pb(x);
  }
  map<int,int> mp;
  f(i,1,n+1){
    if(adj[i].size()==1){
      cntl++; // leaf nodes
    }
  }
  nodes  = n- cntl; // internal nodes
  cout<<nodes*2 + cntl *3<<'\n';
  
}
return 0;
}