// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define f(i, a, n) for (int i = a; i < n; i++)
// #define vi vector<int>
// #define vll vector<ll>
// #define pb push_back
// #define all(v) v.begin(), v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
    
//     int t;
//     cin >> t;
//     while (t--) {
//         ll n, s;
//         cin >> n >> s;
        
//         vector<ll> x(n + 1), y(n + 1);
//         f(i, 1, n + 1) {
//             ll k;
//             cin >> k;
//             if (i == 1 || i == n) {  
//                 x[i] = y[i] = k;
//             } else if (k <= s) {     
//                 x[i] = 0;
//                 y[i] = k;
//             } else {
//                 x[i] = s;
//                 y[i] = k - s;
//             }
//         }
        
//         vector<vector<ll>> dp(n + 1, vector<ll>(2, LLONG_MAX));
//         dp[1][0] = dp[1][1] = 0;
    
//         f(i, 2, n + 1) {
//             dp[i][0] = min(dp[i - 1][0] + x[i] * y[i - 1], dp[i - 1][1] + x[i] * x[i - 1]);
//             dp[i][1] = min(dp[i - 1][0] + y[i] * y[i - 1], dp[i - 1][1] + y[i] * x[i - 1]);
//         }
        
//         cout << min(dp[n][0], dp[n][1]) << '\n';
//     }
//     return 0;
// }


// // // /**
// // //  * writer:blinderchief 
// // // **/
// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // #define ll long long int 
// // // #define f(i,a,n) for(int i =a;i<n;i++)
// // // #define vll vector<ll>
// // // #define vi vector<int>
// // // #define pb push_back
// // // #define po pop_back
// // // #define all(v) v.begin(),v.end()
// // // #define no cout << "NO" << '\n';
// // // #define yes cout << "YES" << '\n';
// // // #define sot(v) sort(all(v))
// // // int n; vi v(n);
// // // int check(int lo, int hi){
// // // int mid  = lo + (hi-lo)/2;
// // // if((lo==0 && v[lo] > v[lo+1])){
// // //   return v[lo];
// // // } 
// // // if( (hi ==n-1 && v[hi]>v[hi-1])){
// // //   return v[hi];
// // // }
// // // if(v[mid]<v[mid-1] && v[mid]>v[mid+1] ){
// // //   return v[mid];
// // // }
// // // else if(v[mid-1]>v[mid]){
// // //  return check(0,mid-1);
// // // } 
// // // else{
// // //   return check(mid+1,hi);
// // // }
// // // }
// // // int main() {
// // // ios_base::sync_with_stdio(false);
// // // cin.tie(0);
// // // cin>>n;
// // // f(i,0,n){
// // //   cin>>v[i];
// // // }
// // // int ans  = check(0,n-1);
// // // cout<<ans<<'\n';
// // // return 0;
// // // }


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
// // #define all(v) v.begin(),v.end()
// // #define no cout << "NO" << '\n';
// // #define yes cout << "YES" << '\n';
// // #define sot(v) sort(all(v))
// // int n;
// // vi v(n);
// // bool check(int k){
// // if(k%2==0){
// //   return false;
// // }
// // else return true;
// // }
// // int main() {
// // ios_base::sync_with_stdio(false);
// // cin.tie(0);
// // cin>>n;
// // f(i,0,n){
// //   cin>>v[i];
// // }
// // int lo = 0, hi =n-1,ans =0;
// // while(lo<=hi){
// //   int mid = lo + (hi-lo)/2;
// //   if(v[mid-1] != v[mid] && v[mid+1]!=v[mid]){
// //     ans = v[mid];
// //     break;
// //   }

// //   if(check(mid)){
// //     lo = lo+2;
// //   }
// //   else{
// //     hi = hi-2;
// //   }
// // }
// // cout<<ans<<"\n";
// // return 0;
// // }




/**
 * writer:blinderchief 
**/
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i,a,n) for(int i =a;i<n;i++)
// #define vll vector<ll>
// #define vi vector<int>
// #define pb push_back
// #define po pop_back
// #define all(v) v.begin(),v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(all(v))
// int k;
// bool check(int a){
    
//     if(a>k) return false;
//     else {
//         return true;
//     }
// }
// int main() {
// ios_base::sync_with_stdio(false);
// cin.tie(0);
// int n; cin>>n>>k;
// vector<int> v(n);
// f(i,0,n){
//     cin>>v[i];
// }
// int lo=  *min_element(all(v)), hi = *max_element(all(v)); int ans  = 0;
// while(lo<=hi){
//     int mid = lo+ (hi-lo) /2;
//     int c =0;
//     f(i,0,n){
//         if(v[i]<mid){
//             c++;
//         }
//     }
//     if(check(c)){
//         if(find(all(v),mid)!=v.end()){
//             ans  = mid;
//         }
//         lo = mid+1;
//     }
//     else{
//         hi =mid-1;
//     }
// } 
// cout<<ans<<'\n';
// return 0;
// }


/**
 * writer:blinderchief 
**/
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define vi vector<int>
// #define all(v) v.begin(), v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int n;
//     cin >> n;
//     vi v(n);
//     for (int i = 0; i < n; i++) {
//         cin >> v[i];
//     }
//     if (v[0] != 1) {
//         cout << 1 << '\n';
//         return 0;
//     }
//     int lo = 0, hi = n - 1;
//     while (lo <= hi) {
//         int mid = lo + (hi - lo) / 2;
//         if (v[mid] != mid + 1) {
//             hi = mid - 1;
//         } else {
//             lo = mid + 1;
//         }
//     }
//     cout << lo + 1 << '\n';
//     return 0;
// }
