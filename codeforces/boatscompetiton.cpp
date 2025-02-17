// #include <bits/stdc++.h>
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
    
//     int t; 
//     cin >> t;
    
//     while(t--){
//         int n; 
//         cin >> n;
//         vector<int> v(n);
//          map<int,int> mp;
//          int ans =0;
//         f(i,0,n) {cin >> v[i]; mp[v[i]]++;}
//         for(int i =2;i<=2*n;i++){
//             int total =0;
//             for(auto j:mp){
//                 int other = i- j.first;
//                 if(other>=1 && mp.count(other)){
//                     total+=min(j.second,mp[other]);
//                 }
//             }
//             total/=2;
//             ans =max(total,ans);

//         }
//         cout<<ans<<'\n';

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
    ll x; cin>>x;
    if((111*(x%11))<=x){
        yes
    }
    else no 
}
return 0;
}
