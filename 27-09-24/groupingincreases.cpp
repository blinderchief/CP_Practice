#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define pb push_back
#define po pop_back
#define all(v) v.begin(), v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(), v.end())

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; 
    cin >> t;
    
    while(t--) {
        int n; 
        cin >> n;
        vector<int> v(n);
        
        f(i, 0, n) {
            cin >> v[i];
        }

        // Check if the entire array is sorted (increasing or decreasing)
        bool is_sorted_incr = true;
        bool is_sorted_decr = true;
        
        for (int i = 1; i < n; i++) {
            if (v[i] > v[i-1]) is_sorted_decr = false;  // not non-increasing
            if (v[i] < v[i-1]) is_sorted_incr = false;  // not non-decreasing
        }

        if (is_sorted_incr || is_sorted_decr || n == 2) {
            // Already sorted or n == 2, so no penalties
            cout << 0 << "\n";
        } else {
            int cnt = 0;
            int hold = v[0];
            vector<int> left;  // We'll store elements that need to be handled later
            
            // Process the array and split into left
            for (int i = 1; i < n; i++) {
                if (v[i] >= hold) {
                    left.pb(v[i]);  // Store increasing subsequence elements
                } else {
                    hold = v[i];  // Update hold to current decreasing element
                }
            }
            
            // Now calculate penalties based on the left subsequence
            int penalty = 0;
            if (!left.empty()) {
                int prev = left[0];  // Initial value of left subsequence
                for (int i = 1; i < left.size(); i++) {
                    if (left[i] < prev) {
                        penalty++;  // Increment penalty if subsequence is decreasing
                    }
                    prev = left[i];  // Update to current element
                }
            }

            // Output the total penalty
            cout << penalty << '\n';
        }
    }

    return 0;
}
