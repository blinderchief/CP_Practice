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
  if(n<5) cout<<-1<<"\n";
  else{
  f(i,1,n+1){
    if(i%2==0 && i!=4){
      cout<<i<<" ";
    }
  }
   cout<<4<<" ";
   cout<<5<<" ";
   f(i,1,n+1){
    if(i%2!=0 && i!=5){
      cout<<i<<" ";
    }
   }
  cout<<'\n';
    }
}
return 0;
}