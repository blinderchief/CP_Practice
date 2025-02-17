

/**
 * writer:blinderchief 
**/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define po pop_back
#define me(a, x) memset(a, x, sizeof(a))
#define all(v) v.begin(),v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){
  ll n,m;cin>>n>>m;
  vll a,b(m);
  for(int i=0;i<n;i++){
    int x;cin>>x;
    if(i==0 || x>a[0]){
      a.pb(x);
    }
  }
  f(i,0,m){
    cin>>b[i];
  }
  sot(a);
  sot(b);
  vll vf(m);
  for(int i =0;i<m;i++){
    if(b[i]>a[0]){
     ll it =(ll)(a.end()- lower_bound(all(a),b[i]));
     vf[i]= it
     ;}
    else vf[i]=0;
  }
  sot(vf);
  for(int i =1;i<=m;i++){
    ll sum =0;
    for(int j =i-1;j<m;j+=i){
      sum+=vf[j]+1;
    }
    cout<<sum<<" ";
  }
  cout<<'\n';
}
return 0;
}