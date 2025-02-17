// // #include<bits/stdc++.h>
// // using namespace std;
// // #define ll long long int 
// // #define f(i,a,n) for(int i =a;i<n;i++)
// // #define vll vector<ll>
// // #define pb push_back
// // #define po pop_back
// // #define no cout << "NO" << '\n';
// // #define yes cout << "YES" << '\n';
// // #define sot(v) sort(v.begin(),v.end())
// // signed main() {
// // ios_base::sync_with_stdio(false);
// // cin.tie(0);
// // int t; cin>>t;
// // while(t--){

// // }
// // return 0;
// // }
// // #include <bits/stdc++.h>
// // using namespace std;

// // int main() {
// //     ios::sync_with_stdio(0);
// //     cin.tie(0);
    
// //     int t;
// //     cin >> t;
    
// //     while(t--) {
// //         int n, x, y;
// //         cin >> n >> x >> y;
        
// //         vector<int> a(n, 1);
// //         bool cnt1 = true;
// //         bool cnt2 = false;
// //       for(int i =0;i<x-1;i++){
// //         if(cnt1){
// //           a[i]=-1;
// //           cnt2 = true;
// //         }
// //         if(cnt2){
// //           a[i]=-1;
// //           cnt1 = false;
// //         }
// //       }
// //        bool cnt1 = true;
// //         bool cnt2 = false;
// //       for(int j =y;j<n;j++){
// //         if(cnt1){
// //           a[j]=-1;
// //           cnt2 = true;
// //         }
// //         if(cnt2){
// //           a[j]=-1;
// //           cnt2 = false;
// //       }
// //         for (int i = 0; i < n; ++i) {
// //             cout << a[i] << " ";
// //         }
// //         cout << "\n";
// //     }
    
// //     return 0;
// // }
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n, x, y;
        cin >> n >> x >> y;
        
        vector<int> a(n, 1);

        bool cnt1 = true;
     

        for(int j = y-2; j >=0; j--){
            if(cnt1){
                a[j] = -1;
                cnt1 = false;
            } else {
              a[j]=1;
                cnt1 = true;
            }
        }
                cnt1 = true;

           for(int i = x; i < n; ++i){
            if(cnt1){
                a[i] = -1;
                cnt1 = false;
            } else {
              a[i] = 1;
                cnt1 = true;
            }
        }

        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i,a,n) for(int i =a;i<n;i++)
// #define vll vector<ll>
// #define pb push_back
// #define po pop_back
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(v.begin(),v.end())
// signed main() {
// ios_base::sync_with_stdio(false);
// cin.tie(0);
// int t; cin>>t;
// while(t--){
//   int n,x,y; cin>>n>>x>>y;
//   vector<int> v(n,-1);
//   if(x<y){
//       for(int i =x;i<=y;i++){
//         v[i]= 1;
//       }
//   }
//   else{
//     for(int i=y-1;i<x;i++){
//       v[i]= 1;
//     }
//   }
//   f(i,0,n){
//     cout<<v[i]<<" ";
//   }
//  cout<<'\n';
// }
// return 0;
// }



