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
  if(n==1) {cout<<1<<'\n';continue;}
  cout<<196<<string(n-3,'0')<<"\n";
  f(i,0,n/2){
    cout<<1<<string(i,'0')<<6<<string(i,'0')<<9<<string(n-3-2*i,'0')<<'\n';
    cout<<9<<string(i,'0')<<6<<string(i,'0')<<1<<string(n-3-2*i,'0')<<'\n';
  }
}
return 0;
}