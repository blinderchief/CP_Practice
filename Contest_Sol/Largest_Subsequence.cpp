/**
 * author:blinderchief 
**/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define po pop_back
#define all(v) v.begin(),v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){
  int n;
  string s; cin>>n>>s;
  if(n==1) cout<<1<<'\n';
  else{
    int ans =0;
    f(i,0,n)
  {
    if(s[i]==s[n-1]){
      ans = max(ans,n-i);
    }
    else if(s[0]==s[i]){
      ans = max(ans,i+1);
    }
  }
  cout<<ans<<'\n';
  }
}
return 0;
}