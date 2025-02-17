// // #include<bits/stdc++.h>
// // using namespace std;
// // #define ll long long int 
// // #define f(i,a,n) for(int i = a; i < n; i++)
// // #define vll vector<ll>
// // #define pb push_back
// // #define po pop_back
// // #define all(v) v.begin(),v.end()
// // #define no cout << "NO" << '\n';
// // #define yes cout << "YES" << '\n';
// // #define sot(v) sort(v.begin(),v.end())
// // signed main() {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(0);
// //     int t; 
// //     cin >> t;
// //     while(t--) {
// //         ll n, m;
// //         cin >> n >> m;

// //         if(n == 1 && m == 1) {
// //             cout << 1 << '\n';
// //             continue;
// //         }

// //         vector<vector<ll>> ans(n + 1, vector<ll>(m));

// //         if(n == 1) {
// //             // Single row case
// //             int cal = 2;
// //             f(i, 0, m) {
// //                 cout << cal << " ";
// //                 cal++;
// //             }
// //             cout << '\n';
// //         } 
// //         else if(m == 1) {
// //             int cal = 2;
// //             f(i, 0, n) {
// //                 cout << cal++ << '\n';
                
// //             }
// //         } 
// //         else {
// //             f(i, 1, n + 1) {
// //                 f(j, 0, m) {
// //                     ans[i][j] = (m + j + 1) * (i);
// //                 }
// //             }
// //             f(i, 1, n + 1) {
// //                 f(j, 0, m) {
// //                     cout << ans[i][j] << " ";
// //                 }
// //                 cout << '\n';
// //             }
// //         }
// //         cout << '\n';
// //     }
// //     return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i, a, n) for(int i = a; i < n; i++)
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
//         ll n, m;
//         cin >> n >> m;
//         vector<vector<ll>> ans(n, vector<ll>(m, 2));

//         if (n <= m) {
//             f(i, 0, n) {
//                 ans[i][i] = 3;
//             }
//             f(i, n, m) {
//                 ans[0][i] = 3;
//             }
//         } else {
//             f(i, 0, m) {
//                 ans[i][i] = 3;
//             }
//             f(i, m, n) {
//                 ans[i][0] = 3;
//             }
//         }

//         f(i, 0, n) {
//             f(j, 0, m) {
//                 cout << ans[i][j] << " ";
//             }
//             cout << '\n';
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i, a, n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define pb push_back
#define po pop_back
#define all(v) v.begin(), v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(), v.end())

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        vector<vector<ll>> ans(n, vector<ll>(m));

        f(i, 0, n) {
            f(j, 0, m) {
                if ((i + j) % 2 == 0) {
                    ans[i][j] = 2; 
                } else {
                    ans[i][j] = 3; 
                }
            }
        }

        f(i, 0, n) {
            f(j, 0, m) {
                cout << ans[i][j] << " ";
            }
            cout << '\n';
        }
    }
    return 0;
}
