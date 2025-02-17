// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // #define ll long long int 
// // // #define f(i,a,n) for(int i =a;i<n;i++)
// // // #define vll vector<ll>
// // // #define pb push_back
// // // #define po pop_back
// // // #define all(v) v.begin(),v.end()
// // // #define no cout << "NO" << '\n';
// // // #define yes cout << "YES" << '\n';
// // // #define sot(v) sort(v.begin(),v.end())
// // // signed main() {
// // // ios_base::sync_with_stdio(false);
// // // cin.tie(0);
// // // int n=7;
// // // for(int i =0;i<=n-1;i++){

// // //  for(int j=0;j<=n-1;j++){
// // //   if ((j == 0 && (i < n / 2 || i == n - 1)) || (i == 0 && j != 0) || (i == n / 2 && j != 0 && j != n - 1) || (i > n / 2 && j == n - 1) || (i == n - 1 && j != n - 1)) {
// // //               cout << "*";
// // //             } else {
// // //                 cout << " ";
// // //             }
// // //   }
// // //   cout<<'\n';
  
  

// // //  for(int j=0;j<=n-1;j++){
// // //  if(((j==0 or j==n-1) and i!=n-1) or (i==n-1 and (j!=0 and j!=n-1)))cout<<"*";
// // //  else cout<<" ";
  
// // //   cout<<'\n';
// // //   }

  
  
 
// // //  for(int j=n+1;j<=2*n+1;j++){
// // //    if(i==j && i<=n/2) cout<<"*";
// // //     else if(i+j==n-1) cout<<"*";
// // //     else cout<<" ";
// // //   }
// // //   cout<<'\n';


// // // for(int j=0;j<=n-1;j++){
// // //     if(i==0){
// // //       if(j>0 && j<n-1){
// // //         cout<<"*";
// // //         continue;
// // //       }
// // //     }
// // //     else{
// // //       if(j==0 || j==n-1){
// // //         cout<<"*";
// // //         continue;
// // //       }
// // //     }
// // //     if(i==n/2){
// // //       cout<<"*";
// // //       continue;
// // //     }
// // //     cout<<" ";

// // //   }
// // //   for(int j =0;j<=n-1;j++){
// // //     if(j==0 || j==n-1 || i==n/2) cout<<"*";
// // //     else cout<<" ";
// // //   }
// // //   cout<<"\n";
// // // }
// // // return 0;
// // // }



// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // #define ll long long int 
// // // // #define f(i,a,n) for(int i =a;i<n;i++)
// // // // #define vll vector<ll>
// // // // #define pb push_back
// // // // #define po pop_back
// // // // #define all(v) v.begin(),v.end()
// // // // #define no cout << "NO" << '\n';
// // // // #define yes cout << "YES" << '\n';
// // // // #define sot(v) sort(v.begin(),v.end())
// // // // signed main() {
// // // // ios_base::sync_with_stdio(false);
// // // // cin.tie(0);
// // // // int n =7;
// // // // for(int i =0;i<=n-1;i++){
// // // //   for(int j =0;j<=n-1;j++){
// // // //     if(j==0 || j==n-1 || i==n/2) cout<<"*";
// // // //     else cout<<" ";
// // // //   }
// // // //   cout<<"\n";
// // // // }
// // // // return 0;
// // // // }

// // // // for(int j=0;j<=n-1;j++){
// // // //     if(i==0){
// // // //       if(j>0 && j<n-1){
// // // //         cout<<"*";
// // // //         continue;
// // // //       }
// // // //     }
// // // //     else{
// // // //       if(j==0 || j==n-1){
// // // //         cout<<"*";
// // // //         continue;
// // // //       }
// // // //     // }
// // // //     if(i==n/2){
// // // //       cout<<"*";
// // // //       continue;
// // // //     }
// // // //     cout<<" ";

// // // //   }


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
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(0);

// //     int n = 7;

// //     for (int i = 0; i <= n - 1; i++) {
// //         for (int j = 0; j <= n - 1; j++) {
// //             if ((j == 0 && (i < n / 2 || i == n - 1)) || (i == 0 && j != 0) || 
// //                 (i == n / 2 && j != 0 && j != n - 1) || (i > n / 2 && j == n - 1) || 
// //                 (i == n - 1 && j != n - 1)) {
// //                 cout << "*";
// //             } else {
// //                 cout << " ";
// //             }
// //         }
// //         cout << "   "; 

        
// //         for (int j = 0; j <= n - 1; j++) {
// //             if (((j == 0 || j == n - 1) && i != n - 1) || (i == n - 1 && (j != 0 && j != n - 1)))
// //                 cout << "*";
// //             else
// //                 cout << " ";
// //         }
// //         cout << "   ";
        
// //         for (int j = 0; j <= n - 1; j++) {
           
// //        if(i==j && i<=n/2) cout<<"*";
// //        else if(i+j==n-1) cout<<"*";
// //         else cout<<" ";
// //         }
// //         cout << "   ";

// //         for (int j = n + 1; j <= 2 * n + 1; j++) {
// //             if (i == j && i <= n / 2)
// //                 cout << "*";
// //             else if (i + j == n - 1)
// //                 cout << "*";
// //             else
// //                 cout << " ";
// //         }
// //         cout << "   "; 


// //         for (int j = 0; j <= n - 1; j++) {
// //             if (i == 0) {
// //                 if (j > 0 && j < n - 1) {
// //                     cout << "*";
// //                     continue;
// //                 }
// //             } else {
// //                 if (j == 0 || j == n - 1) {
// //                     cout << "*";
// //                     continue;
// //                 }
// //             }
// //             if (i == n / 2) {
// //                 cout << "*";
// //                 continue;
// //             }
// //             cout << " ";
// //         }
// //         cout << "   "; 
// //         for (int j = 0; j <= n - 1; j++) {
// //             if ((j == 0 && (i < n / 2 || i == n - 1)) || (i == 0 && j != 0) || 
// //                 (i == n / 2 && j != 0 && j != n - 1) || (i > n / 2 && j == n - 1) || 
// //                 (i == n - 1 && j != n - 1)) {
// //                 cout << "*";
// //             } else {
// //                 cout << " ";
// //             }
// //         }
         
// //  cout << "   "; 
        
// //         for (int j = 0; j <= n - 1; j++) {
// //             if (j == 0 || j == n - 1 || i == n / 2)
// //                 cout << "*";
// //             else
// //                 cout << " ";
// //         }
// //         cout << '\n';
// //     }

// //     return 0;
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

// signed main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     int n = 7;

//     for (int i = 0; i <= n - 1; i++) {
//         for (int j = 0; j <= n - 1; j++) {
//             if ((j == 0 && (i < n / 2 || i == n - 1)) || (i == 0 && j != 0) || 
//                 (i == n / 2 && j != 0 && j != n - 1) || (i > n / 2 && j == n - 1) || 
//                 (i == n - 1 && j != n - 1)) {
//                 cout << "*";
//             } else {
//                 cout << " ";
//             }
//         }
//         cout << "   "; 

//         for (int j = 0; j <= n - 1; j++) {
//             if (((j == 0 || j == n - 1) && i != n - 1) || (i == n - 1 && (j != 0 && j != n - 1)))
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//         cout << "   "; 

//         for (int j = n + 1; j <= 2 * n + 1; j++) {
//             if (i == j - (n + 1) && i <= n / 2)
//                 cout << "*";
//             else if (i + j - (n + 1) == n - 1)
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//         cout << "   "; 

//         for (int j = 0; j <= n - 1; j++) {
//             if (i == 0) {
//                 if (j > 0 && j < n - 1) {
//                     cout << "*";
//                     continue;
//                 }
//             } else {
//                 if (j == 0 || j == n - 1) {
//                     cout << "*";
//                     continue;
//                 }
//             }
//             if (i == n / 2) {
//                 cout << "*";
//                 continue;
//             }
//             cout << " ";
//         }
//         cout << "   ";

        
//         for (int j = 0; j <= n - 1; j++) {
//             if ((j == 0 && (i < n / 2 || i == n - 1)) || (i == 0 && j != 0) || 
//                 (i == n / 2 && j != 0 && j != n - 1) || (i > n / 2 && j == n - 1) || 
//                 (i == n - 1 && j != n - 1)) {
//                 cout << "*";
//             } else {
//                 cout << " ";
//             }
//         }
//         cout << "   "; 
        
//         for (int j = 0; j <= n - 1; j++) {
//             if (j == 0 || j == n - 1 || i == n / 2)
//                 cout << "*";
//             else
//                 cout << " ";
//         }

//         cout << '\n';
//     }
//     return 0;
// }


