// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i,a,n) for(int i =a;i<n;i++)
// #define vll vector<ll>
// #define pb push_back
// #define po pop_back
// #define all(v) v.begin(),v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(v.begin(),v.end())
// signed main() {
// ios_base::sync_with_stdio(false);
// cin.tie(0);
// int t; cin>>t;
// while(t--){
//   int n; cin>>n;
//   vector<int> v(n);
//   vector<int> check;
//   ll sum =0,flag=0;
//   f(i,0,n) {
//   cin>>v[i]; 
//   if(v[i]>0) sum+=v[i];
//   if(v[i]==0) flag=1;
//   }
//   int cntn=0;
//   f(i,0,n) {
//     if(v[i]<0) {cntn++; check.push_back(v[i]);}
//   }
//   ll sum1=0;
//   sort(check.rbegin(),check.rend());
//   if(cntn&1){
//   f(i,1,check.size()){
//     sum1+=(abs(check[i]));
//   }
//    transform(v.begin(),v.end(),v.begin(),[](int x) {return (x<0)?x*(-1):x;});
//    sot(v);
//    cout<<sum+sum1-v[0];
 
//   }
//   else{
//   f(i,0,check.size()){
//     sum1+=(abs(check[i]));
//   }
//     cout<<sum+sum1<<'\n'; 
//   }
// }
// return 0;
// }
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
  int cnt=0;
  f(i,0,n) {
    cin>>v[i];
    if(v[i]<0)  cnt++;
    v[i] = abs(v[i]);
  }
  sot(v);
  if(cnt%2) v[0] *=(-1);
  ll sum =0;
  f(i,0,n) sum+=v[i];
  cout<<sum<<'\n';
 }
return 0;
}