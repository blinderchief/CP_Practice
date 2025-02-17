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
// // //     ios_base::sync_with_stdio(false);
// // //     cin.tie(0);
    
// // //     int t; 
// // //     cin >> t;
// // //     while(t--) {
// // //         int n;
// // //         cin >> n;
// // //         vector<int> v(n);
// // //         int flag1 = 0,flag2 =0;

// // //         f(i, 0, n) {
// // //             cin >> v[i];
// // //             if(v[i] < 0) flag1++;
// // //             else flag2++;
// // //         }

// // //         if(flag1 == n || flag2==n ) {
// // //             cout << 0 << "\n";
// // //             continue;  
// // //         }

// // //         vector<int> p, ne; // Indices of positive and negative numbers
// // //         vector<ll> pref(n);
        
// // //         // Compute prefix sum and separate positive and negative number indices
// // //         pref[0] = max(0, v[0]);
// // //         f(i, 1, n) {
// // //             if(v[i] >= 0) p.push_back(i);
// // //             else ne.push_back(i);
// // //             pref[i] = pref[i - 1] + max(0, v[i]);  // Store prefix sum
// // //         }

// // //         ll max_sum = 0;
// // //         ll cntn = LLONG_MAX;
// // //         int i = 0, j = 0;

// // //         while(i < p.size() && j < ne.size()) {
// // //             if(p[i]>ne[j] && i<p.size() && j<ne.size()) {j++; continue;}
// // //             else{
// // //         ll see =0;
// // //      while( i<p.size() && j<ne.size() && ne[j]<p[i+1]) {
// // //        j++;
// // //        see++;
// // //      }
// // //     if(max_sum<pref[p[i+1]]-pref[p[i-1]]){
// // //        cntn =  see;
// // //     }
// // //      if(max_sum==pref[p[i+1]]-pref[p[i-1]]) {
// // //       cntn =min(cntn,see);
// // //      }
// // //      max_sum = max(max_sum,pref[p[i+1]]-pref[p[i-1]]);

// // //      }
            
// // //             i++;
// // //         }

// // //         cout << cntn << '\n';
// // //     }

// // //     return 0;
// // // }

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
    
// //     int t; 
// //     cin >> t;
// //     while(t--) {
// //         int n;
// //         cin >> n;
// //         vector<int> v(n);
// //         int flag1 = 0,flag2=0;

// //         f(i, 0, n) {
// //             cin >> v[i];
// //             if(v[i] < 0) flag1++;
// //             else flag2++;
// //         }

// //         if(flag1 == n || flag2==n) {
// //             cout << 0 << "\n";
// //             continue;  // Corrected the location of 'continue'
// //         }
// //                 vector<int> p, ne; // Indices of positive and negative numbers

// //       f(i,0,n){
// //     if(v[i]>=0) {
// //       p.push_back(i);
// //     } 
// //     else{
// //       ne.push_back(i);
// //     }
// //    }
// //       if(p[0]>ne[ne.size()-1]) {cout<<0<<'\n'; continue;}

// //         vector<ll> pref(n);
// //         // Compute prefix sum and separate positive and negative number indices
// //         pref[0] = max(0, v[0]);
// //         f(i, 1, n) {
// //             pref[i] = pref[i - 1] + max(0, v[i]);  // Store prefix sum
// //         }
// //         ll max_sum = 0;
// //         ll cntn = LLONG_MAX;
// //         int i = 0, j = 0;

// //         while(i < p.size() && j < ne.size()) {
           

// //             ll sum_p = pref[p[i]] - (i > 0 ? pref[p[i - 1]] : 0);
            
// //             ll neg_cnt = 0;
// //             while(j < ne.size() && ne[j] < p[i]) {
// //                 j++;
// //                 neg_cnt++;
// //             }
            
// //             if(sum_p > max_sum) {
// //                 max_sum = sum_p;
// //                 cntn = neg_cnt;
// //             } else if(sum_p == max_sum) {
// //                 cntn = min(cntn, neg_cnt);
// //             }
           
// //             i++;
// //         }

// //         cout << cntn << '\n';
// //     }

// //     return 0;
// // }


  
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define f(i,a,n) for(int i = a; i < n; i++)
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
    
//     while(t--) {
//         int n; 
//         cin >> n;
//         vector<int> v(n);
//         int flag1 = 0, flag2 = 0;
        
//         f(i, 0, n) {
//             cin >> v[i];
//             if(v[i] < 0) flag1++;
//             else flag2++;
//         }
        
//         if(flag1 == n || flag2 == n) {
//             cout << 0 << "\n";
//             continue;
//         }

//         vector<int> p, ne;
        
//         f(i, 0, n) {
//             if(v[i] >= 0) {
//                 p.push_back(i);
//             } else {
//                 ne.push_back(i);
//             }
//         }
        
//         if(p.empty() || ne.empty() || p[0] > ne.back()) {
//             cout << 0 << '\n';
//             continue;
//         }

//         vector<ll> pref(n);
        
//         if(v[0] < 0) 
//             pref[0] = 0;
//         else 
//             pref[0] = v[0];
        
//         f(i, 1, n) {  
//             if(v[i] < 0) 
//                 v[i] = 0;
//             pref[i] = pref[i-1] + v[i];
//         }

//         int i = 0, j = 0;
//         ll max_sum = 0, cntn = 0;

//         while(i < p.size() && j < ne.size()) {
//             ll see = 0;
//             int ch = j;
//             while(i+1 < p.size() && j < ne.size() && ne[j] < p[i+1]) {
//                 j++;
//                 see++;
//             }
//             if(ne[j--]>p[i]){
//             int ch2 = j;
//             if((pref[p[i+1]]-pref[p[i]])+v[p[i]] <= pref[p[i+1]] - pref[ne[ch2]]+v[ne[ch2]]) continue;
//             if(i+1 < p.size() && max_sum < pref[p[i+1]] - pref[p[i]]) {
//                 max_sum = pref[p[i+1]] - pref[p[i]];
//                 cntn = see;
//             } else if(i+1 < p.size() && max_sum == pref[p[i+1]] - pref[p[i]]) {
//                 cntn = min(cntn, see);
//             }
//             }
//             i++;
//         }
        
//         cout << cntn << '\n';
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
vector<int> v(n);
f(i,0,n) cin>>v[i];
int cnt=0,ch1 =0,ch2=n-1;
for(;ch1<n;ch1++){
if(v[ch1]>0) break;
}    
for(;ch2>=0;ch2--){
    if(v[ch2]>0) break;
}
if(ch1>ch2) cout<<0<<'\n';
else{
    f(i,ch1,ch2){
        if(v[i]<0) cnt++;
    }
    cout<<cnt<<'\n';
}
}
return 0;
}
