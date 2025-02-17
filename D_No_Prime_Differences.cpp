// author:blinderchief 
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
  int n,m; cin>>n>>m;
  if(m%2==0){
     int a =1;
    f(i,0,n){
    f(j,0,m){
     cout<<a<<" ";
     a++;
    }
    cout<<'\n';
  }
  }
  else{
   f(i,0,n) {
    f(j,0,m) {
       cout<<i*m+(i+j)%m+1<<" ";
            }
            cout<<'\n';
        }

    
  }


  cout<<'\n';
}
return 0;
}
 