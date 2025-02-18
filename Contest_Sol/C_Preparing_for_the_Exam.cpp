// // /**
// //  * writer:blinderchief 
// // **/
// // #include<bits/stdc++.h>
// // using namespace std;
// // #define ll long long int 
// // #define f(i,a,n) for(int i =a;i<n;i++)
// // #define vll vector<ll>
// // #define vi vector<int>
// // #define pb push_back
// // #define po pop_back
// // #define me(a, x) memset(a, x, sizeof(a))
// // #define all(v) v.begin(),v.end()
// // #define no cout << "NO" << '\n';
// // #define yes cout << "YES" << '\n';
// // #define sot(v) sort(all(v))
// // int main() {
// // ios_base::sync_with_stdio(false);
// // cin.tie(0);
// // int t; cin>>t;
// // while(t--){
// //   int n,m,k;
// //   vi v(m),a(k);
// //   cin>>n>>m>>k;
// //   f(i,0,m) cin>>v[i];
// //   f(i,0,k) cin>>a[i];
// //   string temp = "";
// //   if(m<=k) {f(i,0,n) temp+='1';}
// //   else if(m>k){

// //       vector<bool> chk(m,false);
// //       int i =0,j=0;
// //       while(i>a.size()|| j>v.size()){
// //         if(a[i]==v[j]){
// //           i++;
// //           j++;
// //           chk[i] =true;  
// //         }
// //         else{
// //           i++;
// //         }
// //       }
// //     if(m==n){
// //       f(i,0,m){
// //         if(chk[i])
// //         temp+='1';
      
// //       else{
// //         temp+='0';
// //       }
// //     }
// //     }
// //     else{
// //       if(k<m){
// //         f(i,0,n) temp+='0';
// //       }
// //       else{
// //         if(k==n){
// //           {f(i,0,n) temp+='1';};
// //         }
// //         else{
// //           ll cal = n*(n+1)/2;
// //           ll see= accumulate(all(a),0ll)-cal;
// //           f(i,0,m){
// //             if(see==v[i]){
// //               temp+='1';
// //             }
// //             else{
// //               temp+='0';
// //             }
// //           } 
// //         }
// //       }
// //     }
// //   }
// //   cout<<temp<<'\n';
// // }
// // return 0;
// // }
// /**
//  * writer: blinderchief
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
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     int t; 
//     cin >> t;
//     while (t--) {
//         int n, m, k;
//         cin >> n >> m >> k;

        // vi v(m), a(k);
        // f(i, 0, m) cin >> v[i];
        // f(i, 0, k) cin >> a[i];

//         string temp = "";

//         if (m <= k) {
//             // If m <= k, output a string of '1's of length n.
//             f(i, 0, n) temp += '1';
//         } else {
//             vector<bool> chk(m, false);
//             int i = 0, j = 0;

//             while (i < a.size() && j < v.size()) {
//                 if (a[i] == v[j]) {
//                     chk[j] = true; 
//                     j++;
//                 }
//                 i++;
//             }

//             if (m == n) {
//                 f(i, 0, m) {
//                     temp += chk[i] ? '0' : '1';
//                 }
//             } else {
//                 if (k < m) {
//                     f(i, 0, n) temp += '0';
//                 } else {
//                     if (k == n && n==m) {
//                         f(i, 0, n) temp += '1';
//                     } else {
                    // ll sum = accumulate(all(v),0ll);
                    // ll com = accumulate(all(v),0ll);
                    // vector<int> ch(m);
                    // for(int i =0;i<m;i++){
                    //     ll ok = sum-v[i];
                    //     if(com==ok){
                    //         temp+='1';
                    //     }
                    //     else temp+='0';
                    // }       
//                     }
//                 }
//             }
//         }
//         cout << temp << '\n';
//     }

//     return 0;
// }

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
//     int n,m,k; cin>>n>>m>>k;
//      vi v(m), a(k);
//         f(i, 0, m) cin >> v[i];
//         f(i, 0, k) cin >> a[i];
//         vector<bool> vhk(m,false);
//          int i = 0, j = 0;
//             while (i < a.size() || j < v.size()) {
//                 if (a[i] == v[j]) {
//                     vhk[j] = true; 
//                     j++;
//                 }
//                 i++;
//             }
//          string temp="";
//          if(n==m && m==k) {
//             f(i,0,m){
//                 temp+='1';
//             }
//          }
//        else if(n==m && k<m){
//             if(k+1==m){
//               f(i,0,m){
//                 if(vhk[i]){
//                     temp+='0';
//                 }
//                 else{
//                      temp+='1';
//                 }
//             }
//             }
//             else{
//                 f(i,0,m) temp+='0';
//             }
//     }        
//     else{
//         if(k+1<n){
//         f(i,0,m){
//             temp+='0';
//         }
//         }
//         else{
//             if(k+1==n){
//               f(i,0,m){
//                 if(vhk[i]){
//                     temp+='0';
//                 }
//                 else{
//                      temp+='1';
//                 }
//             }
//             }
//         }
    
//     }
//     cout<<temp<<'\n';   

// }
// return 0;
// }

// /**
//  * writer: blinderchief
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
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     int t; 
//     cin >> t; 

//     while (t--) {
//         int n, m, k;
//         cin >> n >> m >> k; 

//         vi v(m), a(k);
//         f(i, 0, m) cin >> v[i]; 
//         f(i, 0, k) cin >> a[i]; 

        
//         vector<bool> vhk(m, false);
//          int i = 0, j = 0;
//             while (i < a.size() || j < v.size()) {
//                 if (a[i] == v[j]) {
//                     vhk[j] = true; 
//                     j++;
//                 }
//                 i++;
//             }

//         ll sum = accumulate(all(v),0ll);
//         ll cal= accumulate(all(a),0ll);

//         string temp = "";

//         if ((n == m && m == k ) || n==k) {
//             f(i, 0, m) {
//                 temp += '1';
//             }
//         } else if (n == m && k < m) {
//             if (k + 1 == m) {
//                 f(i, 0, m) {
//                    ll see= sum;
//                    if(see-v[i]==cal){
//                     temp+='1';
//                    }
//                    else{
//                     temp+='0';
//                    }

//                 }
//             } else {
//                 f(i, 0, m) temp += '0';
//             }
//         } else {
//             if (k + 1 < n) {
//                 f(i, 0, m) {
//                     temp += '0';
//                 }
//             } else if (k + 1 == n) {
//                 f(i, 0, m) {
//                     if (vhk[i]) {
//                         temp += '0';
//                     } else {
//                         temp += '1';
//                     }
//                 }
//             }
//         }

//         cout << temp << '\n';
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(i, a, n) for (int i = a; i < n; i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define all(v) v.begin(), v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vi v(m), a(k);
        f(i, 0, m) cin >> v[i];
        f(i, 0, k) cin >> a[i];

        unordered_set<int> set_a(a.begin(), a.end());

        string temp = "";

        if ((n == m && m == k) || n==k) {
            f(i, 0, m) temp += '1';
        } else if (n == m && k < m) {
            if (k + 1 == m) {
                ll sum_a = accumulate(all(a), 0ll);
                ll sum_v = accumulate(all(v), 0ll);
                
                f(i, 0, m) {
                    if (sum_v - v[i] == sum_a) {
                        temp += '1';
                    } else {
                        temp += '0';
                    }
                }
            } else {
                f(i, 0, m) temp += '0';
            }
        } else {
            if (k + 1 < n) {
                f(i, 0, m) temp += '0';
            } else if (k + 1 == n) {
                f(i, 0, m) {
                    if (set_a.count(v[i])) {
                        temp += '0';
                    } else {
                        temp += '1';
                    }
                }
            }
        }

        cout << temp << '\n';
    }

    return 0;
}
