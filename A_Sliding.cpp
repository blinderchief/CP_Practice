// // #include<bits/stdc++.h>
// // using namespace std;
// // #define ll long long int 
// // #define f(i,a,n) for(int i =a;i<n;i++)
// // #define vll vector<ll>
// // #define vi vector<int>
// // #define pb push_back
// // #define po pop_back
// // #define all(v) v.begin(),v.end()
// // #define no cout << "NO" << '\n';
// // #define yes cout << "YES" << '\n';
// // #define sot(v) sort(all(v))
// // int main() {
// // ios_base::sync_with_stdio(false);
// // cin.tie(0);
// // int t; cin>>t;
// // while(t--){
// //   int n,m,r,c; cin>>n>>m>>r>>c;
// //   ll sum = 0;
// //   if(c!=m) {
// //  f(j,c+1,m+1){
// //      sum+=abs(j-c);
// //     }
// //   }
// //   f(i,r+1,n+1){
// //     f(j,1,m+1){
// //       sum+=abs(j-c)+abs(i-r);
// //     }
// //   }
// //   cout<<sum<<'\n';

// // }
// // return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i,a,n) for(int i = a; i < n; i++)
// #define vll vector<ll>
// #define vi vector<int>
// #define pb push_back
// #define po pop_back
// #define all(v) v.begin(), v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(all(v))

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
    
//     int t; 
//     cin >> t;
    
//     while (t--) {
//         int n, m, r, c; 
//         cin >> n >> m >> r >> c;
        
//         ll sum = 0;

//         for (int i = c+1; i <= n; ++i) {
//             sum += abs(i - r); 
//         }
//         int i = r+1;
//         while(i<=n){
//           for (int j = 1; j <= m; ++j) {
//             sum += abs(j - c)+abs(i-r); 
//         }
//         }
//         cout << sum << '\n';
//     }
    
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define po pop_back
#define all(v) v.begin(), v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; 
    cin >> t;
    
    while (t--) {
        int n, m, r, c; 
        cin >> n >> m >> r >> c;
        
        ll sum = 0;
        
        for (int i = 1; i <= n; ++i) {
            sum += abs(i - r); 
        }
       if(r!=m) {
        for (int j = 1; j <= m; ++j) {
            sum += abs(j - c); 
        }
        cout << 2*sum << '\n';
       }
       else {
        cout<<sum<<'\n';
       }
        
      
        
    }
    
    return 0;
}