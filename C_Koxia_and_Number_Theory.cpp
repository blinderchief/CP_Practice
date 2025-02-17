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
  int n;cin>>n;
  vll v(n);
  f(i,0,n) cin>>v[i];
  bool chk =false;
  f(i,0,n){
    f(j,i+1,n){
      if(v[i]==v[j]){
        chk =true;
      }
    }
  }
  for(int p = 2;p<=n;p++){
    vll temp(p);
    for(int i =0;i<n;i++){
      temp[v[i]%p]+=1;
    }
   if(*min_element(all(temp))>=2){
    chk = true;
    break;
   }
  }
  cout<<(chk? "NO" : "YES")<<"\n";
}
return 0;
}