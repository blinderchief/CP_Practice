// /**
//  * writer:blinderchief
//  **/
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define f(i,a,n) for(int i = a; i < n; i++)
// #define vll vector<ll>
// #define vi vector<int>
// #define pb push_back
// #define po pop_back
// #define me(a, x) memset(a, x, sizeof(a))
// #define all(v) v.begin(), v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(all(v))
// #define INF (int)1e18
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
// int main() {
//     auto begin = chrono::high_resolution_clock::now();
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int t; cin >> t;
//     while (t--) {
//         int n; cin>>n;
//         vll v(n);
//         f(i,0,n)cin>>v[i];
//         if(n==1) {yes continue;}
//         if(is_sorted(all(v))){
//           yes
//         }
//         else if(*max_element(all(v))==v[0]){
//           no
//         }
//         else if(n>=4){
//           bool ck =false;
//             for(int i = 2; i < n; i++) {
//                 if(i % 2 == 0 && v[i] != v[0]) {
//                     ck = true;
//                     break;
//                 }
//                 if(i % 2 == 1 && v[i] != v[1]) {
//                     ck = true;
//                     break;
//                 }
//             }
//             if(ck) {
//                 cout << "YES\n";
//                 continue;
//         }
//         else {
//             for(int i =1;i<n-1;i++){
//             if(v[i-1]>v[i] && v[i]<v[i+1]){
//               if(i>=2){
//                 if(v[i-2]>v[i-1]){
//                   no
//                   ck =false;
//                   break;
//                 }
//                 else{
//                   if((v[i-1]-v[i-2])<=v[i]){
//                     ck= true;
//                   }
//                   else {
//                     no
//                     ck = false;
//                  break;
//                   }
//                 }
//               }
//               else {no ck=false; break;}
//             }
//             else if((v[i]<v[i-1]  && v[i]> v[i+1])){
//               if(i>=2 && abs(v[i-1]-v[i-2])<=v[i]){
                
//                 ck  =true;
                
//               }
//               else {
//                 no 
//                 ck =false;
//                 break;
//               }
//             }
//             else if((v[i]>v[i+1] && v[i]<v[i+1])){
//               if(v[i-2]<v[i-1] && v[i-1]-v[i-2] == v[i+1]-v[i]){
                
//                 ck = true;
                
//               }
//               else {
//                 no 
//                 ck =false;
//                 break;
//               }
//             }
//             else{
//             if(i>=2){
//             if( v[i-1]==(v[i]-v[i+1]) && v[i-2]==0){
//              ck = true;
//                 }
//                 // else if(i>=3 && i<n-3 && v[i]==v[i-2] && v[i-1]==v[i-3] &&v[i]==v[i+2] && v[i+1]==v[i+3]){
//                 //     ck =true;
//                 // }
//                 else if(( v[i-1]!=(v[i]-v[i+1]) && v[i-2]!=0 )){
//                     no
//                   ck = false;
//                   break;
//                 }
//                 }
//                 else{
                  
//                   ck =true;
                  
//                 }
//             }
//           }
//           if(ck) {
//             yes
//           }
//         }
//         }
//         }
    
//     auto end = chrono::high_resolution_clock::now();
//     auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
//    //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
//     return 0;
// }

// /**
//  * writer:blinderchief
//  **/
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define f(i,a,n) for(int i = a; i < n; i++)
// #define vll vector<ll>
// #define vi vector<int>
// #define pb push_back
// #define po pop_back
// #define me(a, x) memset(a, x, sizeof(a))
// #define all(v) v.begin(), v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(all(v))
// #define INF (int)1e18
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
// int main() {
//     auto begin = chrono::high_resolution_clock::now();
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int t; cin >> t;
//     while (t--) {
//         int n;cin>>n;
//         vll v(n);
//         f(i,0,n)cin>>v[i];
//         for(int i =1;i<n;i++){
//             if(v[i]>=v[i-1]){
//                 v[i]-=v[i-1];
//                 v[i-1]=0;
//             }
//         }
//         vll see = v;
//         sot(see);
//         if(see==v) yes
//         else no
//     }
//     auto end = chrono::high_resolution_clock::now();
//     auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
//    //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define all(v) v.begin(), v.end()
#define yes cout << "YES\n"
#define no cout << "NO\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin>>n;
        vll v(n);
        f(i,0,n)cin>>v[i];
        
        if(n==1) {yes; continue;}
        if(is_sorted(all(v))){yes; continue;}
        
        if(*max_element(all(v))==v[0]){no; continue;}
        
        bool ck = true;
        if(n>=4){
            for(int i = 2; i < n; i++) {
                if((i % 2 == 0 && v[i] != v[0]) || 
                   (i % 2 == 1 && v[i] != v[1])) {
                    ck = false;
                    break;
                }
            }
            if(ck) {yes; continue;}
        }
        ck = false;
        for(int i=1; i<n-1; i++) {
            if(v[i-1]>v[i] && v[i]<v[i+1]) {
                if(i>=2) {
                    if(v[i-2]<=v[i-1] && (v[i-1]-v[i-2])<=v[i]) ck = true;
                }
            }
            else if(v[i]<v[i-1] && v[i]>v[i+1]) {
                if(i>=2 && abs(v[i-1]-v[i-2])<=v[i]) ck = true;
            }
        }
        cout << (ck ? "YES\n" : "NO\n");
    }
    return 0;
}