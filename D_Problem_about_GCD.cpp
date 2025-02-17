
/**
 * writer:blinderchief 
**/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define po pop_back
#define me(a, x) memset(a, x, sizeof(a))
#define all(v) v.begin(),v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){
  ll l,r,g; cin>>l>>r>>g;
  ll l1  =  (l+g-1)/g;
  ll r1 = r/g;

  ll mx = 0;
  ll ii,jj;
   bool check = false;
  for(ll i = l1;i<=min(l1+200,r1);i++){
      for(ll j = r1;j>=max(l1,i);j--){
        if(__gcd(i,j)==1){
          if(mx<(j-i+1)){
            mx = j-i+1;
            ii = i;
            jj = j;
            check = true;
          }
           break;
        }
      }
  }
  if(!check) cout<<-1<<" "<<-1<<'\n';
  else cout<<g*ii<<" "<<g*jj<<'\n';
}
return 0;
}

