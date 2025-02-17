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
// // // #define sot(v) sort(v.begin(),v.end())
// // // signed main() {
// // // ios_base::sync_with_stdio(false);
// // // cin.tie(0);
// // // int t; cin>>t;
// // // while(t--){
// // //   ll a,b; cin>>a>>b;
// // //   if(a>=b) {
// // //     cout<<a<<'\n';
// // //   }
// // //   else{
// // //     ll chk = b-a;
// // //     if(chk>a) cout<<0<<'\n';
// // //     else{
// // //       cout<<a-chk<<'\n';
// // //       }
   
// // //     }
// // //   }

// // // return 0;
// // // }
  
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long int 
// #define f(i, a, n) for(int i = a; i < n; i++)
// #define vll vector<ll>
// #define vi vector<int>
// #define pb push_back
// #define po pop_back
// #define all(v) v.begin(), v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(v.begin(), v.end())

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     int t; 
//     cin >> t; 
//     while (t--) {
//         int n; 
//         cin >> n; 

//         vector<vector<ll>> v(n, vector<ll>(2)); 
//         vector<pair<ll, pair<ll, ll>>> asn; 

//         f(i, 0, n) {
//             cin >> v[i][0] >> v[i][1];
            
//             ll s = v[i][0] + v[i][1];
//             asn.pb({s, {v[i][0], v[i][1]}});
//         }

//         sot(asn); 
//         for (const auto& i : asn) {
//             cout << i.second.first << " " << i.second.second << " ";
//         }
//         cout << '\n';
//     }

//     return 0;
// }

