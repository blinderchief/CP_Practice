// #include<bits/stdc++.h>
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
    
//     int t; cin >> t;
//     while(t--) {
//         ll n, k;
//         cin >> n >> k;
        
//         // Case  n and k are equal
//     //     if (n == k) {
//     //         if (n > 2) {
//     //             ll chk  = ceil(n/2.0);// Check if half of n is even or odd
//     //             if (chk% 2 != 0) no
//     //             else yes
//     //         } else {
//     //             no
//     //         }
//     //     } 
//     //     else {
//     //         ll chk = n - k + 1;
//     //         ll chkk = n - chk;
            
//     //         // Check if the difference is even or odd
//     //         if (chkk % 2 == 0) yes
//     //         else no
//     //     }
//     // }
//     ll chk = max(1ll,n-k+1);
//     ll ans  =n*(n+1)/2 - (chk)*(chk-1)/2;
//     if(ans%2==0) yes
//     else no
//     }
//     return 0;
// }
