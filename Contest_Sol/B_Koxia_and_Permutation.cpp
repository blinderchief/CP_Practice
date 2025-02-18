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
  int n,k; cin>>n>>k;
  vector<int> p;
  int l =1,r =n;
  while(l<=r){
    if(p.size()%2==0){
      p.pb(r);
      r-=1;
    }
    else{
      p.pb(l);
      l+=1;
    }
  }
f(i, 0, n) cout << p[i] <<" \n"[i==n-1];
}
return 0;
}