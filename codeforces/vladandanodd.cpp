// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define f(i, a, n) for (int i = a; i < n; i++)
// #define vll vector<ll>
// #define pb push_back
// #define po pop_back
// #define all(v) v.begin(), v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(v.begin(), v.end())

// signed main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int t;
//     cin >> t;
//     while (t--) {
//         ll n, k;
//         cin >> n >> k;
        
//         if (n % 2 == 1) {
//             ll check = ((n - 1) / 2) + 1;
//             if (check >= k) {
//                 ll ans = 1 + (k - 1) * 2;
//                 cout << ans << '\n';
//             } else {
//                 vll v;
//                 ll j = 2;
                
//                 // Build the vector v properly and avoid overflow
//                 while (v.size() < n / 2) {
//                     for (ll i = 1; i < n; i += 2) {
//                         if (i * j <= n) {
//                             v.push_back(i * j);
//                         } else {
//                             break;  // Avoid overflow or going beyond n
//                         }
//                     }
//                     j += 2;
//                     if (v.size() >= n / 2) break;
//                 }

//                 if (k > check) {
//                     if (n % 2 == 1) {
//                         cout << v[k - check - 1] << '\n';  // Correct index usage
//                     } else {
//                         cout << v[k - check] << '\n';  // For even n case
//                     }
//                 }
//             }
//         } else {
//             ll check = ((n - 2) / 2) + 1;
//             if (check >= k) {
//                 ll ans = 1 + (k - 1) * 2;
//                 cout << ans << '\n';
//             } else {
//                 vll v;
//                 ll j = 2;

//                 // Build the vector v properly and avoid overflow
//                 while (v.size() < n / 2) {
//                     for (ll i = 1; i < n; i += 2) {
//                         if (i * j <= n) {
//                             v.push_back(i * j);
//                         } else {
//                             break;  // Avoid overflow or going beyond n
//                         }
//                     }
//                     j += 2;
//                     if (v.size() >= n / 2) break;
//                 }

//                 if (k > check) {
//                     if (n % 2 == 1) {
//                         cout << v[k - check - 1] << '\n';  // Correct index usage
//                     } else {
//                         cout << v[k - check] << '\n';  // For even n case
//                     }
//                 }
//             }
//         }
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
  int n,k; cin>>n>>k;
  int p =1;
  while(n>0){
    int chek = n- n/2;
    if(k<=chek){
 cout<<p*(2*k-1)<<'\n';
     break; 
 }
    k-=chek;
    p*=2;
    n/=2;
  }
}
return 0;
}