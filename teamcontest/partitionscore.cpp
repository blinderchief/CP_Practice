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
  int n,k; cin>>n>>k;
  vector<int> v(n);
  f(i,0,n){
    cin>>v[i];
  }
  sot(v);
  ll cns=0;
   if(k==1){
cns= 2*v[n-1];
  cout<<v[n-k-1]+v[0]+cns<<'\n';
   }
   else{
    cns= v[n-1]+v[n-k-1]+v[n-2]+v[0];
    cout<<cns<<'\n';
   }

}
return 0;
}