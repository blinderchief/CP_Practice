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
//         map<ll,ll> mp; 
        
//         // Read input and count frequency of each element
//         f(i,0,n) { 
//             cin >> v[i]; 
//             mp[v[i]]++; 
//         }
        
//         // Find the most frequent element
//         ll mX = 0;
//         ll ele = 0;
//         for(auto it = mp.begin(); it != mp.end(); it++) {
//             if(it->second > mX) {
//                 mX = it->second;
//                 ele = it->first;
//             }
//         }
        
//         bool possible = true;
//         f(i, 0, n-1) {
//             if(v[i] != ele) {
//                 if((v[i] ^ v[i+1]) == ele) {
//                     v[i+1] = ele;  
//                 } else {
//                     possible = false;
//                     break; 
//                 }
//             }
//         }
        
//         if(possible) yes
//         else no
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
  int n; cin>>n;
  vll v(n);
  ll cjk =0;
  f(i,0,n) {cin>>v[i]; cjk^=v[i];}
  if(cjk==0) yes
  else{
    int j   =0,cnt=0;
    f(i,0,n){
      j =i;
    ll chk = v[i];
      while(j<n && chk!=cjk){
        j++;
        chk^=v[j];
      }
      if(chk==cjk) cnt++;
      i = j;
    }
    if(cnt>=3) yes
    else no
  }

}
return 0;
}