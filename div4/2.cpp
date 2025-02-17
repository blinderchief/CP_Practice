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

// bool res(int s_c1, int s_c2, int l_c1, int l_c2) {
//     int sun = 0;
//     int slav = 0;

//       if (s_c1 < l_c1) slav++;
//     else if (s_c1 > l_c1) sun++;
//     if (s_c2 > l_c2) sun++;
//     else if (s_c2 < l_c2) slav++;
//     return sun > slav;
// }

// signed main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
    
//     int t; 
//     cin >> t;
    
//     while (t--) {
//         int a1, a2, b1, b2;
//         cin >> a1 >> a2 >> b1 >> b2;
//         int ans = 0;
//         int s_card[] = {a1, a2};
//         int l_card[] = {b1, b2};

//         f(s1, 0, 2) {
//             f(s2, 0, 2) {
//                 if (s1 == s2) continue; 
//                 f(l1, 0, 2) {
//                     f(l2, 0, 2) {
//                         if (l1 == l2) continue; 
//                         if (res(s_card[s1], s_card[s2], l_card[l1], l_card[l2])) {
//                             ans++;
//                         }
//                     }
//                 }
//             }
//         }

//         cout << ans << '\n';
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
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(),v.end())

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; 
    cin >> t;
    
    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        int x = (int(a1 > b1) - int(a1 < b1) + int(a2 > b2) - int(a2 < b2)) > 0;

        int y = (int(a1 > b2) - int(a1 < b2) + int(a2 > b1) - int(a2 < b1)) > 0;
        cout << (x + y) * 2 << '\n';
    }

    return 0;
}
