#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
#define vll vector<ll>
#define pb push_back
#define po pop_back
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(),v.end())
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){
  int n; cin>>n;
  vll v(n);
  f(i,0,n){
    cin>>v[i];
  }
  vll ans;
  f(i,0,n){
    if((i+1)%2==1){
      ans.push_back(v[i]);
    }
  }
  int res  = *max_element(ans.begin(),ans.end());
  cout<<res<<'\n';

}
return 0;
}