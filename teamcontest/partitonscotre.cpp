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
#define sot(v) sort(v.begin(),v.end())
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){ 
int n; cin>>n;
vi v(n);
f(i,0,n){
  cin>>v[i];
}
if(n==1){
  if(v[0]==1) {cout<<1<<'\n'; continue;}
  else{
    cout<<0<<'\n';
    continue;
  }
}
int cnt =0;
for(int i =0;i<n;i++){
  if(i==n-1){
    if(v[i]==1) {
      cnt++;
    }
    continue;
  }
  if(v[i]==0 && v[i+1]==0){
  if(i<n-3 && v[i+3]==0){
      i+=2;
  }
  else{
    i+=3;
  }
  }
  else if(v[i]==0 && v[i+1]==1){
    if(i<n-2 &&v[i+2]==1) i+=2;
    else i++;
  }
  else if(v[i]==1 && v[i+1]==0){
    if(i<n-3 && v[i+3]==1) i+=3;
    else i+=2;
  cnt++;
  }
  else if(v[i]==1 && v[i+1]==1) {
    if(i<n-2 && v[i+2]==1) i+=2;
  else i++;
    cnt++;
  }
}
cout<<cnt<<'\n';
}
return 0;
}

