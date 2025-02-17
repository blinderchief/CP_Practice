// // #include<bits/stdc++.h>
// // using namespace std;
// // #define ll long long int 
// // #define f(i,a,n) for(int i = a; i < n; i++)
// // #define vll vector<ll>
// // #define vi vector<int>
// // #define pb push_back
// // #define po pop_back
// // #define all(v) v.begin(),v.end()
// // #define no cout << "NO" << '\n';
// // #define yes cout << "YES" << '\n';
// // #define sot(v) sort(v.begin(),v.end())
 
// // signed main() {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(0);
 
// //     int n; 
// //     cin >> n;
// //     vll v(n);
// //     int ans = 0;
// //    int ans1 =0;
// //     f(i, 0, n) cin >> v[i];
 
// //     for(int i = 1; i < n; i++) {
// //         if(v[i] < v[i-1]) {
// //             int ch = i;
// //             ll hold = v[ch];
// //             while(i < n-1 && hold < v[ch-1]) {
// //                 hold += v[++i];
// //                 ans++;
// //             }
// //             if( hold<v[ch-1]) ans--;
// //             if (i < n) v[i] = hold;
// //         }
// //     }
// //     for(int i = n-1; i >0 ; i--) {
// //         if(v[i] < v[i-1]) {
// //             int ch = i;
// //             ll hold = v[ch];
// //             while(i>0 && hold < v[ch-1]) {
// //                 hold += v[--i];
// //                 ans1++;
// //             }
// //              if( hold<v[ch-1]) ans1--;
// //             if (i >=0) v[i] = hold;
// //         }
// //      }
// //     cout << max(ans,ans1) << '\n';
 
// //     return 0;
// // }

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i,a,n) for(int i = a; i < n; i++)
// #define vll vector<ll>
// #define vi vector<int>
// #define pb push_back
// #define po pop_back
// #define all(v) v.begin(),v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(v.begin(),v.end())
 
// signed main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
 
//     int n; 
//     cin >> n;
//     vll v(n);
//     int ans = 0;
//    int ans1 =0;
//     f(i, 0, n) cin >> v[i];
 
//     for(int i = 1; i < n; ) {
//         if(v[i] < v[i-1]) {
//             int ch = i;
//             ll hold = v[ch];
//             while(i < n && hold < v[ch-1]) {
//                 if(i!=ch) hold += v[i];
//                 i++;
//                 ans++;
//             }
//             if( hold<v[ch-1]) ans--;
//             if (i < n) v[i] = hold;
//         }
//         else i++;
//     }
//     for(int i = n-1; i >0 ; ) {
//         if(v[i] < v[i-1]) {
//             int ch = i;
//             ll hold = v[ch];
//             while(i>0 && hold < v[ch-1]) {
//                 if(i!=ch) hold += v[i];
//                 i--;
//                 ans1++;
//             }
//              if( hold<v[ch-1]) ans1--;
//             if (i >=0) v[i] = hold;
//         }
//         else i--;
//      }
//     cout << max(ans,ans1) << '\n';
 
//     return 0;
// }