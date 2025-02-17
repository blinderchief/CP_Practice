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
  int n,k;cin>>n>>k;
  vector<int> v(n);
  f(i,0,n) cin>>v[i];
  if(v[0]>k) cout<<0<<'\n';
  else if(v[0]==k) cout<<1<<'\n';
  else{
    int sum = 0;
    int cnt =0;
    f(i,0,n){
      sum+=v[i];
      if(sum>k) break;
      cnt++;
    }
    cout<<cnt<<'\n';
  }
  
  
}
return 0;
}