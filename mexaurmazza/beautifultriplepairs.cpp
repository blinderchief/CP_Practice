// // #include<bits/stdc++.h>
// // using namespace std;
// // #define ll long long int 
// // #define f(i,a,n) for(int i = a; i < n; i++)
// // #define vll vector<ll>
// // #define pb push_back
// // #define po pop_back
// // #define all(v) v.begin(), v.end()
// // #define no cout << "NO" << '\n';
// // #define yes cout << "YES" << '\n';
// // #define sot(v) sort(v.begin(), v.end())

// // signed main() {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(0);
    
// //     int t;
// //     cin >> t;
// //     while(t--) {
// //         int n;
// //         cin >> n;
// //         vector<int> v(n);
        
// //         f(i, 0, n) cin >> v[i];

// //         vector<tuple<int, int, int>> trip;
// //         int cnt = 0;
        
// //         f(i, 0, n - 2) {
// //             trip.pb({v[i], v[i + 1], v[i + 2]});
// //         }

// //         f(i, 0, trip.size()) {
// //             f(j, i + 1, trip.size()) {
// //                 if (get<0>(trip[i]) != get<0>(trip[j]) && get<1>(trip[i]) == get<1>(trip[j]) && get<2>(trip[i]) == get<2>(trip[j])) {
// //                     cnt++;
// //                 } else if (get<1>(trip[i]) != get<1>(trip[j]) && get<0>(trip[i]) == get<0>(trip[j]) && get<2>(trip[i]) == get<2>(trip[j])) {
// //                     cnt++;
// //                 } else if (get<2>(trip[i]) != get<2>(trip[j]) && get<0>(trip[i]) == get<0>(trip[j]) && get<1>(trip[i]) == get<1>(trip[j])) {
// //                     cnt++;
// //                 }
// //             }
// //         }

// //         cout << cnt << '\n';
// //     }
// //     return 0;
// // }

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
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i = 0; i < n; i++) cin>>a[i];
    ll ans = 0;
    map<tuple<int,int,int>,ll>mp;
    for(int i = 0; i< n - 2; i++){
        ans+=mp[{a[i],a[i+1],-INT_MAX}]+mp[{a[i],-INT_MAX,a[i+2]}]+mp[{-INT_MAX,a[i+1],a[i+2]}]-3 * mp[{a[i],a[i+1],a[i+2]}];
        mp[{a[i],a[i+1],-INT_MAX}]++;
        mp[{a[i],-INT_MAX,a[i+2]}]++;
        mp[{-INT_MAX,a[i+1],a[i+2]}]++;
        mp[{a[i],a[i+1],a[i+2]}]++;
    }
    cout<<ans<<'\n';
  
}
return 0;
}
