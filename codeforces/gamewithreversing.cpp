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
  string s,t;cin>>s>>t;
  int ans1=0,ans2 =0;
  f(i,0,n){
    if(s[i]!=t[i]) ans1++;
    if(s[i]!=t[n-i-1]) ans2++;
  }
  if(ans1%2==0) ans1=2*ans1;
  else ans1 = max(0,2*ans1-1);
  if(ans2%2==1) ans2 = 2*ans2;
  else ans2 =  max(2,2*ans2-1);
  cout<<min(ans1,ans2)<<"\n";
}
return 0;
}


