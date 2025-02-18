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
// //   int n; cin>>n;
// //   if(n==1 || n==3){ cout<<-1<<'\n'; continue;}
// //   else if(n==2) {
// //     cout<<"66"<<'\n';
// //   }
// //   else{
// //     string s;
// //     int c1 =0;
// //     int c2 = 0;
// //     if(n%2==0){
// //       int z = 0;
// //  f(i,0,n-1){
// //   if(i==n-2){
// //   s+='6';
// //   continue;
// //   }
// //    if(i!=n-2 && i%2==0){
// //         s+='3';
// //         c1++;
// //        }
// //        else{
// //         s+='3';
// //         z = i;
// //         c2++;
// //        }
// //     }
// //      int cal = c1-c2;
// //      while(cal--){
// //        s[z]='6';
// //        z-=2;
// //      }
// //     }
// //     else{
// //       int z =0;
// //       f(i,0,n-1){
// //         if(i==n-2){
// //           s+='6';
// //           continue;
// //         }
// //         if(i!=n-2 && i%2!=0){
// //           s+='3';
// //           c1++;
// //         }
// //         else{
// //           s+='3';
// //           z=i;
// //           c2++;
// //         }
// //       }
// //     int cal = c1-c2;
// //      while(cal--){
// //        s[z]='6';
// //        z-=2;
// //      }
// //     }
// //     s+='6';
// //   cout<<s<<'\n';
// //   }
  
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
//         int n; 
//         cin >> n;

//         // Handle specific cases
//         if (n == 1 || n == 3) {
//             cout << -1 << '\n'; 
//             continue;
//         } else if (n == 2) {
//             cout << "66" << '\n';
//             continue;
//         }
//          int cjk = n-2;
//          bool chk = false;
//          if(cjk>1){ 
//           chk = true;
//           cjk/=2;
//          }
         
//         // For n >= 4
//         string s;
//         if (n % 2 == 0) {
//             // Even length case
//             f(i, 0, n - 1) {
//                 if (i == n - 2) {
//                     s += '6'; // Last digit should be 6
//                 } else if (i % 2 == 0) {
//                     s += '3'; // Fill with 3s in even positions
//                 } else {
//                   if(chk && cjk!=0){
//                       s[i]+='3';
//                       cjk--;
//                   }
//                   else
//                    { s += '6';} // Fill with 6s in odd positions
//                 }
//             }
//         } else {
//             // Odd length case
//             f(i, 0, n - 1) {
//                 if (i == n - 2) {
//                     s += '6'; // Last digit should be 6
//                 } else if (i % 2 == 0) {
//                     s += '3'; // Fill with 3s in even positions
//                 } else {
//                    if(chk && cjk!=0){
//                       s[i]+='3';
//                       cjk--;
//                   }
//                   else{
//                     s += '6';
//                   }

//                      // Fill with 6s in odd positions
//                 }
//             }
//         }
        
//         // Append the last 6
//         s += '6';
//         cout << s << '\n';
//     }
    
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define f(i, a, n) for(int i = a; i < n; i++)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; 
    cin >> t;
    
    while (t--) {
        int n; 
        cin >> n;

        if (n == 1 || n == 3) {
            cout << -1 << '\n'; 
            continue;
        } else if (n == 2) {
            cout << "66" << '\n';
            continue;
        }

        string s;

        if (n % 2 == 0) {
            f(i, 0, n - 1) {
                if (i == n - 2) {
                    s += '6'; 
                } else {
                    s += (i % 2 == 0) ? '3' : '6';
                }
            }
        } else {
            f(i, 0, n - 1) {
                if (i == n - 2) {
                    s += '6'; 
                } else {
                    s += (i % 2 == 0) ? '3' : '6';
                }
            }
        }
        
        s += '6';
        cout << s << '\n';
    }
    
    return 0;
}