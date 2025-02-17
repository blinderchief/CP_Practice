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
//   ll x,y,k; cin>>x>>y>>k;
//   if(x==0 && y==0) cout<<0<<'\n'; 
// else if(x==0 || y==0) {
//   cout<< 2*ceil(double(y)/k)<<'\n';
// }
// else{
//     if(x%k==0 && y%2!=0){
//       if(y>x) {
//         int ch = abs(y-x);
//            cout<<(x/k) + (y/k) +2*ceil(double(ch)/k)<<'\n';
//       }
//       else{
//         int ch = abs(y-x);
//            cout<<(x/k) + (y/k) +2*(ch/k)<<'\n';
//       }
//     }
//     else if(y%k==0 && x%2!=0){
//    if(x>y) {
//         int ch = abs(y-x);
//            cout<<(x/k) + (y/k) +2*ceil(double(ch)/k)<<'\n';
//       }
//       else{
//         int ch = abs(y-x);
//            cout<<(x/k) + (y/k) +2*(ch/k)<<'\n';
//       }
//     }
//     else{
//       ll ch =0;
//     if(x>y)  ch = x- (y/k) *k;
//     else ch = y - (x/k) *k;
//       ll  mini = min(x,y);
//       cout<< 2*(mini/k) +2*(ch/k)<<'\n';
//     }
// }
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
  ll x,y,k; cin>>x>>y>>k;
  cout<< max(((x+k-1)/k)*2-1,((y+k-1)/k)*2)<<'\n';
}
return 0;
}