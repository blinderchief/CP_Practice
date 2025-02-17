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
int arr[n][n];
f(i,0,n) 
{
  f(j,0,n){
  cin>>arr[i][j];
  }
}
if(n%2){
  f(i,0,n/2) {
    if(arr[n/2][i]!=arr[n/2][n-i-1]){
      k--;
    }
  }
}
f(i,0,n/2){
  f(j,0,n){
    if(arr[i][j]!= arr[n-i-1][n-j-1]){
      k--;
    }
  }
}
if(k<0){
 cout<<"NO"<<'\n';
} 
else{
  if((n%2==0 && k%2==0)|| n%2==1){
    yes
  }
  else no 
}
}
return 0;
}