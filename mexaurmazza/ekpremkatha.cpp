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

  int m,n;cin>>n>>m;
  int chk = min(n,m);
  cout<<chk+1<<'\n';
  if(n>m){
  for(int i =0;i<=chk;i++){
    cout<<i+1<<" "<<i<<'\n'; 
  }
  }
  else if(m>n){
     for(int i =0;i<=chk;i++){
    cout<<i<<" "<<i+1<<'\n'; 
  }
  }
  else{
    for(int i =0;i<=chk;i++){
      cout<<i<<" "<<n-i<<'\n';
    }
  }

return 0;
}


