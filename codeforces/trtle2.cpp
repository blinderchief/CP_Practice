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
//   vll v(n);
//   ll ans =0;
//   f(i,0,n) cin>>v[i];
//   f(i,0,n-1) {
//     if(i%2==0){
//       if(max(v[i],v[i+1])==v[i+1]){
//           ans = v[i+1];
        
//       }
//       else{
//         v[i+1] = v[i];
//         ans = v[i+1];
//       }
//     }
//     else{
//       if(min(v[i],v[i+1])==v[i+1]){
//           ans = v[i+1];
          
//       }
//       else{
//         v[i+1] = v[i];
//         ans = v[i+1];
  
//       }
//       }

//   }
//   cout<<ans<<'\n';
  
// }
// return 0;
// }
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
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
    
//     int t; cin >> t;
//     while(t--) {
//         int n; cin >> n;
//         vll v(n);
//         f(i, 0, n) cin >> v[i];
        
//         bool flag = true;  
        
//         f(i, 0, n-1) {
//             if (flag) {
//                 v[i+1] = max(v[i], v[i+1]);
//             } else {
//                 v[i+1] = min(v[i], v[i+1]);
//             }
//             flag = !flag; 
//         }
        
//         cout << v[n-1] << '\n';
//     }

//     return 0;
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
  vll v(n+1);
  f(i,1,n+1)  cin>>v[i];
  sot(v);
  ll ans = v[n/2 +1];
  cout<<ans<<'\n';
}
return 0;
}
