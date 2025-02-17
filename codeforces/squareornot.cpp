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
//   string s; cin>>s;
//   int chek = sqrt(n);
//   if(chek*chek!=n) no
//   else{
//     int flag =0;
//     f(i,0,chek) {
//       if(s[i]!='1' || s[n-chek-i]!='1')  {flag =1; break;}
//     }
//     if(flag) {no continue;}
//     f(i,0,chek-1) {
//       if(s[i*chek] !='1'|| s[i*chek + chek-1]!='1') {flag =1; break;}
//       f(j,1,chek-1) if(s[i*chek+j]!='0') {flag =1; break; }
//     }
//     if(flag) no
//     else yes
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
  string s; cin>>s;
  if(n<4) {no; continue;}
  int chek = sqrt(n);
  if(chek*chek!=n) cout<<"No"<<"\n";
  else{
   map<char,int> mp;
   f(i,0,n) mp[s[i]]++;
   int see = n- ((chek-2)*(chek-2));
   int see1 =  (chek-2)*(chek-2);
   if(mp['1']==see && mp['0']==see1) yes
   else no 
  }
}
return 0;
}