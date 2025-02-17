// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i,a,n) for(int i =a;i<n;i++)
// #define vll vector<ll>
// #define pb push_back

// signed main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
    
//     int t; 
//     cin >> t; // Number of test cases
    
//     while(t--) {
//         int n;
//         cin >> n; // Size of the array
//         vll v(n);
        
//         ll total = 0; // Total sum
//         int odd_count = 0; // Count of odd numbers
        
//         f(i, 0, n) {
//             cin >> v[i];
//             total += v[i];
//             if (v[i] % 2 == 1) odd_count++; 
//         }

//         for (int k = 1; k <= n; k++) {
//             ll prefix_sum = 0;
//             int odd_in_prefix = 0;
            
//             // Calculate sum and odd count for the first k elements
//             f(i, 0, k) {
//                 prefix_sum += v[i];
//                 if (v[i] % 2 == 1) odd_in_prefix++;
//             }
            
//             // Determine the result for this prefix based on the number of odd numbers
//             ll result = 0;
//             if (odd_in_prefix % 3 == 0) {
//                 result = prefix_sum - (odd_in_prefix / 3);
//             } else if (odd_in_prefix % 3 == 1) {
//                 if (k == 1) {
//                     result = prefix_sum; // If there's only one element, no reduction
//                 } else {
//                     result = prefix_sum - (odd_in_prefix / 3) - 1;
//                 }
//             } else if (odd_in_prefix % 3 == 2) {
//                 result = prefix_sum - (odd_in_prefix / 3);
//             }
            
//             cout << result << " ";
//         }
        
//         cout << '\n';
//     }

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
#define vll vector<ll>
#define pb push_back

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; 
    cin >> t; 
    
    while(t--) {
        int n;
        cin >> n;
        vll v(n);
        vll pref(n),oddchk(n);
        f(i, 0, n) {
            cin>>v[i];
        }
        pref[0]=v[0];
        oddchk[0] = v[0]%2==1 ? 1:0;
        f(i,1,n){
            pref[i] = v[i] + pref[i-1];
            oddchk[i] = oddchk[i-1] + v[i]%2==1 ? 1: 0;
        }

        for (int k = 0; k < n; k++) {
        ll result = 0;
            if (oddchk[k] % 3 == 0 || oddchk[k] % 3 == 2) {
                result = pref[k] - (oddchk[k] / 3);
            } else if (oddchk[k] % 3 == 1) {
                if (k == 1) {
                    result = pref[k];
                } else {
                    result = pref[k] - (oddchk[k] / 3) - 1;
                }
            }
            
            cout << result << " ";
        }
        
        cout << '\n';
    }

    return 0;
}
