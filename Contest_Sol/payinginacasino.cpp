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
  int n,m; cin>>n>>m;
  vector<vector<int>> v(n);
  ll sum = 0;
  f(i,0,n){
    f(j,0,m){
      cin>>v[j][i];
    }
  }

  if(n==1) {cout<<0<<'\n'; continue;}
  f(i,0,m){
    ll cnt =0,ch =0;
    sort(v[i].begin(),v[i].end());
   for(auto it:v[i]){
    ch+=it;
    cnt++;
    sum+=(it*cnt - ch);
   }
  }
  cout<<sum<<"\n";
}
return 0;
}


