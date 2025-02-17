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
// #define sot(v) sort(v.begin(),v.end())
// signed main() {
// ios_base::sync_with_stdio(false);
// cin.tie(0);
// int t; cin>>t;
// while(t--){
//    int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         if(n == 2) {
//             int ans = 0;
//             ans += s[0] - '0';
//             ans *= 10;
//             ans += s[1] - '0';
//             cout << ans << '\n';
//             continue;
//         }
//         if(n == 3) {
//             int a = s[0] - '0';
//             int b = s[1] - '0';
//             int c = s[2] - '0';
//             int ans = min({(a * 10 + b + c), (a + b * 10 + c), ((a * 10 + b) * c), (a * (b * 10 + c))});
//             cout << ans << '\n';
//             continue;
//         }
//         int mi = 10;
//         for(auto i : s) {
//             mi = min(mi, (int)(i - '0'));
//         }
//         if(mi == 0) {
//             cout << 0 << '\n';
//             continue;
//         }
//         int aannss = 1e18;
//         for(int i = 0; i < n - 1; i++) {
//             int ans = (s[i] - '0') * 10 + s[i + 1] - '0';
//             if(ans == 1)
//                 ans = 0;
//             for(int j = 0; j < i; j++) {
//                 if(s[j] != '1')
//                     ans += s[j] - '0';
//             }
//             for(int j = i + 2; j < n; j++) {
//                 if(s[j] != '1')
//                     ans += s[j] - '0';
//             }
//             aannss = min(aannss, ans);
//         }
//         cout << aannss << '\n';
  
// }
// return 0;
// }


#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
#define vll vector<ll>
#define vi vector<int>
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
    
}
return 0;
}