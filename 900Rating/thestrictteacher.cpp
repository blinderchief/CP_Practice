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
// // ios_base::sync_with_stdio(false);
// // cin.tie(0);
// // int t; cin>>t;
// // while(t--){
// // ll n,m,q;cin>>n>>m>>q;
// // vll v(n);
// // f(i,0,m){
// //   cin>>v[i];
// // }
// // ll d; cin>>d;
// // sot(v);
// // if(d<v[0]){
// //   ll ans  = v[0]-d;
// //   ans+=(d-1);
// //   cout<<ans<<"\n";
// // }
// // else if(d>v[m-1]){
// // ll ans  = d-v[m-1];
// // ans+=(n-d);
// // cout<<ans<<'\n';
// // }
// // else{
// //   ll ch= 0,chk =0;
// //   for(int i=0;i<m;i++){
// //     if( i!=0 && v[i]>d){
// //       ch = d- v[i-1]-1;
// //       chk = v[i]-d-1;
// //       break;
// //     }
// //   }
// //   ll cjk = ch+chk;
// //   ll ans  = ceil(cjk/2.0);
// //   cout<<ans<<'\n';
// // }


// // }
// // return 0;
// // }
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i,a,n) for(int i = a; i < n; i++)
// #define vll vector<ll>
// #define pb push_back
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
//         ll n, m, q;
//         cin >> n >> m >> q;
//         vll v(m);  // Initialize vector with size 'm', not 'n'
//         f(i, 0, m) {
//             cin >> v[i];
//         }

//         ll d; 
//         cin >> d;
//         sot(v);  
//         if(d < v[0]) {
//             ll ans = (v[0] - d) + (d - 1);
//             cout << ans << "\n";
//         }
//         else if(d > v[m-1]) {
//             ll ans = (d - v[m-1]) + (n - d); 
//             cout << ans << '\n';
//         }
      
//         else {
//             ll ch = 0, chk = 0;
//             for(int i = 1; i < m; i++) {
//                 if(v[i] > d) {
//                     ch = d - v[i-1] - 1;
//                     chk = v[i] - d - 1;  
//                     break;
//                 }
//             }
//             ll ans = ceil((ch + chk +1) / 2.0);   
//             cout << ans << '\n';
//         }
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define pb push_back
#define all(v) v.begin(), v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(), v.end())

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; 
    cin >> t;
    while(t--) {
        ll n, m, q;
        cin >> n >> m >> q;

        vll v(m);  
        f(i, 0, m) {
            cin >> v[i];
        }

        sot(v);

        while(q--) {
            ll d;  
            cin >> d;
            if(d < v[0]) {
                ll ans = (v[0] - d) + (d - 1);
                cout << ans << "\n";
            }
            else if(d > v[m-1]) {
                ll ans = (d - v[m-1]) + (n - d); 
                cout << ans << '\n';
            }
            else {
                auto it = lower_bound(all(v), d);
                ll chk = *it - d - 1;
                ll ch = d - *(it - 1) - 1;
                ll ans = ceil((ch + chk + 1) / 2.0);   
                cout << ans << '\n';
            }
        }
    }
    return 0;
}
