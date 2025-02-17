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
  ll n,k; cin>>n>>k;
 if(k%2==0) yes
  else if(n>1 && k==1) no
  else if(n%2!=0 && k%2!=0){
     if((n-k+1)<=ceil(n/2.0)) yes
     else no
  }
  else if(n%2==0 && k%2!=0){
      if((n-k+1)<=n/2) yes
      else no
  }
  
}
return 0;
}


