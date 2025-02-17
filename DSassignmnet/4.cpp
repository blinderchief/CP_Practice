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
// // ll t; cin>>t;
// // for(int i =3;i<=1e6;i++){
       
// // }
// // return 0;
// // }
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
// //   int n;cin>>n; 
// //   if(n<4){
// //     cout<<1<<'\n';
// //   }
// //   else if(n%4==0) {
// //     cout<<n/4<<'\n';
// //     continue;
// //   }
// //   else{
// //     int ch = n/4;
// //     cout<<ch+1<<'\n';
// //   }
// // }
// // return 0;
// // }
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
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int t; 
//     cin >> t;
//     while(t--){
//         int n, q;
//         cin >> n >> q;
//         string a, b;
//         cin >> a >> b;
//         vector<pair<int, int>> v(q);
//         f(i, 0, q){
//             cin >> v[i].first >> v[i].second;
//         }
//         map<char,int> mpa,mpb;
//         vector<int> ans;
//         f(i, 0, q){
//           int cnt=0;
// //           mpa.clear();
// //           mpb.clear();
// //           f(j,v[i].first,v[i].second){
// //             mpa[a[j]]++;
// //             mpb[b[j]]++;
// //           }
// //           f(z,v[i].first,v[i].second){
// //             if(mpa[a[z]]!=mpb[a[z]]){
// //               cnt++;
// //             }
// //           }
// //           ans.push_back(cnt);
// //         }
// //         f(i,0,ans.size()){
// //           cout<<ans[i]<<'\n';
// //         }
// //         cout<<"\n";
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
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(v.begin(),v.end())
// signed main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int t; 
//     cin >> t;
//     while(t--){
//         int n, q;
//         cin >> n >> q;
//         string a, b;
//         cin >> a >> b;
//         vector<pair<int, int>> v(q);
//         f(i, 0, q){
//             cin >> v[i].first >> v[i].second;
//             v[i].first--;  
//             v[i].second--;
//         }
//         vector<int> ans;
//         f(i, 0, q){
//             int cnt = 0;
//             map<char, int> mpa, mpb;
//             f(j, v[i].first, v[i].second + 1){
//                 mpa[a[j]]++;
//                 mpb[b[j]]++;
//             }
//             for (auto& it : mpa) {
//                 cnt += abs(it.second - mpb[it.first]);
//             }
            
//             ans.push_back(cnt/2);
//         }
//         f(i, 0, ans.size()){
//             cout << ans[i] << '\n';
//         }
//     }
//     return 0;
// }

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
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int t; 
//     cin >> t;
//     while(t--){
//         int n, q;
//         cin >> n >> q;
//         string a, b;
//         cin >> a >> b;
//         vector<pair<int, int>> v(q);
//         f(i, 0, q){
//             cin >> v[i].first >> v[i].second;
//             v[i].first--;  
//             v[i].second--; 
//         }
//         vector<int> ans;
//         f(i, 0, q){
//             int cnt = 0;
//             vector<int> mpa(26, 0), mpb(26, 0); 
//             f(j, v[i].first, v[i].second + 1){
//                 mpa[a[j] - 'a']++;
//                 mpb[b[j] - 'a']++;
//             }
//             f(k, 0, 26) {
//                 cnt += abs(mpa[k] - mpb[k]);
//             }
//             ans.push_back(cnt / 2);
//         }
//         f(i, 0, ans.size()){
//             cout << ans[i] << '\n';
//         }
//     }
//     return 0;
// }

void solve() {
    
}
 
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
 
    int t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
#define vll vector<ll>
#define pb push_back
#define po pop_back
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(),v.end())
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){
int n, k;
    cin >> n >> k;
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
      cin >> s[i];
    }
    for (int i = 0; i < n; i += k) {
        for (int j = 0; j < n; j += k) {
            cout << s[i][j];
        }
        cout << "\n";
    }
}
return 0;
}
