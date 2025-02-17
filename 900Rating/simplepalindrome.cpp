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
  int l; cin>>l;
  string s = "";
  char g[5] = {'a', 'e', 'i', 'o', 'u'};
  for(int i =0;i<l;i++){
    s+=g[i%5];
  }
  sot(s);
  cout<<s<<'\n';
}
return 0;
}