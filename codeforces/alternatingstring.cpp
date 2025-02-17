// // #include<bits/stdc++.h>
// // using namespace std;
// // #define ll long long int 
// // #define f(i,a,n) for(int i =a;i<n;i++)
// // #define vll vector<ll>
// // #define pb push_back
// // #define po pop_back
// // #define all(v) v.begin(),v.end()
// // #define no cout << "NO" << '\n';
// // #define yes cout << "YES" << '\n';
// // #define sot(v) sort(v.begin(),v.end())
// // signed main() {
// // ios_base::sync_with_stdio(false);
// // cin.tie(0);
// // int t; cin>>t;
// // while(t--){
// //   int n;cin>>n;
// //   string s; cin>>s;
// //   if(n==1) {cout<<1<<'\n'; continue;}
// //   int cnt =0;
// //   if(n%2){
// //     cnt=1;
// //      map<char,int> mp;
// //     f(i,0,n) mp[s[i]]++;
// //     if(mp[s[0]]==n/2 && mp[s[1]]==n/2) cout<<cnt<<'\n';
// //     else{      
// //       for(auto it = mp.begin(); it !=prev(mp.end(), 2); ++it) {
// //     cnt += it->second;
// //       }
// //       cout<<cnt<<'\n';
// //       }
// //   } 
// //   else{
// //     map<char,int> mp;
// //     f(i,0,n) mp[s[i]]++;
// //     if(mp[s[0]]==n/2 && mp[s[1]]==n/2) cout<<0<<'\n';
// //     else{
// //       int cnt =0;      
// //       for(auto it = mp.begin(); it !=prev(mp.end(), 2); ++it) {
// //     cnt += it->second;
// // }
// //   cout<<cnt<<'\n';
// //     }  
// //   }
// // }
// // return 0;
// // }
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
// bool sortByValue(const pair<int, int> &a, const pair<int, int> &b) {
//     return a.second < b.second;
// }
// signed main() {
// ios_base::sync_with_stdio(false);
// cin.tie(0);
// int t; cin>>t;
// while(t--){
//   int n; cin>>n;
//   string s; cin>>s;
//   if(n==2) {cout<<0<<'\n'; continue;}
//   if(n==1) {cout<<1<<'\n'; continue;}
//   if(n%2) {
//    map<char,int> mp;
//    f(i,0,n) mp[s[i]]++;
//    int cnt =0;
// int flag =0;
//   f(i,0,n){
//     if(mp[s[i]]==1) mp[s[i]]--; 
//   }

//   string temp; 
//   f(i,0,n){
//     if()
//   }


        
    
//   }
//   else{
//     map<char,int> mp;
//   int cnt= 0;

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
  int n; cin>>n;
  string s;cin>>s;
  if(n%2==0){
  vector<int> evenpos(26), oddpos(26);
  f(i,0,n) {
    if(i%2==0) evenpos[s[i]-'a']++;
    else oddpos[s[i]-'a']++;
  }
  int even = n/2;
  int odd = n/2;
  f(i,0,26){
    even = min(even, n/2-evenpos[i]);
    odd  = min(odd,n/2-oddpos[i]);
  }
 cout<<even+odd<<'\n';
  }
  else{
    
  }

}
return 0;
}