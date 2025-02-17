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
   vector<string> s(n);
   f(i,0,n){
    cin>>s[i];
   }
   vector<int> ans;
   f(i,n-1,-1){
     f(j,0,4){
      if(s[i][j]=='#') ans.push_back(j+1);
     }
   }
f(i,0,n) cout<<ans[i]<<" ";
cout<<'\n';
   
 
}

return 0;
}