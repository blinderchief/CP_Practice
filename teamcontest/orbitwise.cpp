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
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
    
//     int t; 
//     cin >> t;
    
//     while(t--) {
//         int n;
//         cin >> n;
//         vi a(n);
        
//         for (int i = 0; i < n; ++i) {
//             cin >> a[i];
//         }
        
//         int max_val = a[0];  int cal = a[0];  
//         f(i, 1, n) {  // Start from the second element
//             int new_cal = cal | a[i];  // Bitwise OR with the current element
//             if (new_cal >= cal) {
//                 cal = new_cal;  // Update if OR gives a higher or equal value
//             } else {
//                 max_val = max(max_val, cal);  // Update max_val if the new OR value is less
//                 cal = a[i];  // Reset cal to the current element
//             }
//         }
        
//         max_val = max(max_val, cal);  // Final comparison after the loop
        
//         cout << max_val << '\n';  // Output the maximum value
//     }
    
//     return 0;
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
    
    int t; 
    cin >> t;
    
    while (t--) {
        ll k, x, a; 
        cin >> k >> x >> a;
        k--;
        ll loss = 0;
        bool possible = true; // to track if the answer is YES or NO
        
        // loop over the rounds
        for (int i = 1; i <= x+1; i++) {
            // You have to bet such that you gain at least loss + 1 
            ll bet = (loss + 1 + k - 1) / k; // Ceiling of (loss + 1) / k
            
            if (a < bet) {
                no // Not enough 'a' to place the bet
                possible = false;
                break;
            }
            
            a -= bet; // Deduct bet from available amount 'a'
            loss += bet; // Add the bet to loss
        }
        
        if (possible) yes // Only print YES if all rounds are satisfied
    }
    
    return 0;
}
