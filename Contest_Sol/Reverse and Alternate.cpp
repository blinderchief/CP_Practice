
// /**
//  * writer:blinderchief 
// **/
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i,a,n) for(int i =a;i<n;i++)
// #define vll vector<ll>
// #define vi vector<int>
// #define pb push_back
// #define po pop_back
// #define me(a, x) memset(a, x, sizeof(a))
// #define all(v) v.begin(),v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(all(v))
// int main() {
// ios_base::sync_with_stdio(false);
// cin.tie(0);
// int t; cin>>t;
// while(t--){
//   int n; cin>>n;
//   string s; cin>>s;
//   bool chk = false;
//   for(int i =0;i<n;i++){
//    if(i<n-1 && s[i]==s[i+1]){
//     chk = true;
//    } 
//   }
//   if(!chk){
//     yes
//   }
//   else{
//     int cnt=0;
//     bool flag =false;
//     char see,see2  ='2';
//     for(int i =0;i<n-1;i++){
//       if(i==0){
//         if(s[i]==s[i+1]){
//           see  = s[i];
//         }
//         if(i==n-2) {
//           if(s[i]==s[i+1]){
//             if(s[i]==see){
//               no
//               flag = true;
//             }
//           }
//         }
//       }
//       if(i!=0 && i!= n-2 && s[i]==s[i+1]){
//           cnt++;
//         if(see2==s[i] && cnt>=2){
//           no
//           flag = true;
//         }
//         see2  = s[i];
//       }
//     }
//     if(!flag) yes
//   }
// }
// return 0;
// }

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
  
}
return 0;
}