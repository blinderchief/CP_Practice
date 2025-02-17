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
    
    int t; 
    cin >> t;
    while(t--) {
        int n; 
        cin >> n;
        vector<int> v(n);
        f(i, 0, n) cin >> v[i];
        vector<pair<int,int>> check;

        // Populate check vector with indices of differing adjacent elements
        f(i, 0, n-1) {
            if(v[i] != v[i+1]) {
                check.push_back({i+1, i+2});
            }
        }
        
        // No need to sort check as it's already built in sorted order.

        int q; 
        cin >> q;
        vector<pair<int, int>> Q(q);
        vector<pair<int, int>> ans(q);

        // Process each query
        f(k, 0, q) {
            int l, r;
            cin >> l >> r;
            
            // Binary search for the first pair that might be valid
            auto it = lower_bound(all(check), make_pair(l, 0));

            bool found = false;

            // Check for the first valid range inside [l, r]
            while(it != check.end() && it->first <= r) {
                if(it->second <= r) {
                    ans[k] = {it->first, it->second};
                    found = true;
                    break;
                }
                ++it;
            }

            if(!found) {
                ans[k] = {-1, -1};
            }
        }
        f(i, 0, q) {
            cout << ans[i].first << " " << ans[i].second << '\n';
        }
    }
    
    return 0;
}
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
    
//     int t; 
//     cin >> t;
//     while(t--) {
//         int n; 
//         cin >> n;
//         vector<int> v(n);
//         f(i, 0, n) cin >> v[i];
//         vector<pair<int,int>> check;
        
//         // Finding pairs of indices where adjacent elements are not equal
//         f(i, 0, n-1) {
//             if(v[i] != v[i+1]) {
//                 check.push_back({i+1, i+2});
//             }
//         }

//         int q; 
//         cin >> q;
//         vector<pair<int, int>> Q(q);
//         vector<pair<int, int>> ans(q);
        
//         // Reading the queries
//         f(k, 0, q) {
//             cin >> Q[k].first >> Q[k].second;
            
//             bool found = false; // Reset found flag for each query
            
//             // Iterate through the check vector to find matching pairs
//             f(i, 0, check.size()) {
//                 if(check[i].first >= Q[k].first && check[i].second <= Q[k].second) {
//                     ans[k] = {check[i].first, check[i].second};
//                     found = true;
//                     break;
//                 }
//             }
            
//             // If no pair found, assign (-1, -1)
//             if(!found) {
//                 ans[k] = {-1, -1};
//             }
//         }
        
//         // Output the results
//         f(i, 0, q) {
//             cout << ans[i].first << " " << ans[i].second << '\n';
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
// #define all(v) v.begin(),v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(v.begin(),v.end())

// signed main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
    
//     int t; 
//     cin >> t;
//     while(t--) {
//         int n; 
//         cin >> n;
//         vector<int> v(n);
//         f(i, 0, n) cin >> v[i];
        
//         int q; 
//         cin >> q;
//         vector<pair<int, int>> Q(q);
//         vector<pair<int, int>> ans(q);
        
//         f(k, 0, q) {
//             cin >> Q[k].first >> Q[k].second;
//             Q[k].first--;  // converting to 0-based index
            
//             bool found = false;
//             for(int i = Q[k].first; i < Q[k].second - 1; i++) {  // loop until second-1 to avoid out-of-bound access
//                 if(v[i] != v[i+1]) {
//                     ans[k] = {i+1, i+2};
//                     found = true;
//                     break;
//                 }
//             }
            
//             if(!found) ans[k] = {-1, -1};
//         }
        
//         f(i, 0, q) {
//             cout << ans[i].first << " " << ans[i].second << '\n';
//         }
//     }
    
//     return 0;
// }
