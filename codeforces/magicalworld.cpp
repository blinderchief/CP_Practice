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
  int l,b,s; cin>>l>>b>>s;
  if( s*s>=l*b) {cout<<0<<"\n";}
  else{
    if(l<=s*s || b<=s*s) cout<<1<<'\n';
    else{
       cout<<2<<'\n';
    }
  }


}
return 0;
}