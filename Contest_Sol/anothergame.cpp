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
  int n;cin>>n;
   vector<int> v(n);
   f(i,0,n) cin>>v[i];
   if(is_sorted(all(v)))  cout<<0<<'\n';
   else{
    vector<int> chk =v;
    sot(v);
     int xh = INT_MIN ,ans =0;;
     int mi = *min_element(all(v));
    f(i,0,n){
      if(v[i]!=chk[i]){
          xh = max(chk[i],xh);
      }
    } 
    cout<<xh+mi<<'\n';
  
   }
}
return 0;
}