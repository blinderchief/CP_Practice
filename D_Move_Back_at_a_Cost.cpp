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
// //   int n; cin>>n;
// //   vll v(n), chk(n+1);
// //   f(i,0,n) cin>>v[i];
// //    chk[n] = LLONG_MAX;
// //   for(int i=n-1;i>=0;i--){
// // 		chk[i] = min(chk[i+1],v[i]);
// // }
// // 	ll temp = LLONG_MAX;
// // 	for(int i=0;i<n;i++){
// // 		if(chk[i] < v[i]){
// // 			temp = min(temp,v[i]);
// // 		}
// // 	}
// // vll final;
// // 	for(int i=0;i<n;i++){
// // 		if(chk[i]==v[i]){
// //       if( v[i]<=temp+1){
// // 			final.push_back(v[i]);
// //       }
// // 		}
// // 		else{
// // 			final.pb(v[i]+1);
// // 		}
// // 	}
// // 	sot(final);
// // 	f(i,0,n){
// //     cout<<final[i]<<" ";
// //   }
// //   cout<<'\n';
// // }
// // return 0;
// // }



// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define f(i, a, n) for (int i = a; i < n; i++)
// #define vll vector<ll>
// #define vi vector<int>
// #define pb push_back
// #define all(v) v.begin(), v.end()
// #define sot(v) sort(all(v))

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     int t; 
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vll v(n), chk(n + 1, 0);

//         f(i, 0, n) cin >> v[i];
//  chk[n] = LLONG_MAX;
//         for (int i = n - 1; i >= 0; i--) {
//             chk[i] = min(chk[i + 1], v[i]);
//         }
//         ll temp = LLONG_MAX;

//         for (int i = 0; i < n; i++) {
//             if (chk[i] < v[i]) {
//                 temp = min(temp, v[i]);
//             }
//         }
//         vll final;

//         for (int i = 0; i <n; i++) {
//             if (chk[i] == v[i]) {
//                 if (v[i] <= temp + 1) {
//                     final.pb(v[i]);
//                 }
//             } else {
//                 final.pb(v[i] + 1);
//             }
//         }

//         sot(final);
//         for (int i = 0; i < n; i++) {
//             cout << final[i] << " ";
//         }
//         cout << '\n';
//     }
//     return 0;
// }

