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
  int l,r; cin>>l>>r;
  int  L,R; cin>>L>>R;
  if(l==L && R==r) {cout<<r-l<<'\n'; continue;}
  else if(r<L) cout<<1<<'\n';
  else if(r>L && r==R) cout<<2<<'\n';
  else if(L<l && r<R) cout<<3<<"\n";
  else cout<<3<<'\n';
}
return 0;
}