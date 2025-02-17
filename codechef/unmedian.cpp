#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
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
        ll n;
        cin >> n;
        vll v(n);
        f(i, 0, n) cin >> v[i];

        vector<pair<int, int>> operations;  // Store operations as (L, R)
        bool sorted = false;

        while(true) {
            // Check if the array is already sorted
            vll temp = v;
            sot(temp);
            if(v == temp) {
                sorted = true;
                break;
            }

            if(n <= 2) break;  // Edge case: if array has <= 2 elements, can't perform any operation
            
            // We will find an odd length subarray and delete the median element
            // Choose a subarray of length 3 (or more) and delete the median element
            
            bool operation_performed = false;

            // Try to find the first valid subarray of odd length
            for(int i = 0; i + 2 < n; ++i) {
                vll sub = {v[i], v[i+1], v[i+2]};
                vll sorted_sub = sub;
                sot(sorted_sub);
                
                // Median is the middle element of sorted_sub
                ll median = sorted_sub[1];
                
                // Find the leftmost occurrence of the median in the subarray
                for(int j = i; j <= i + 2; ++j) {
                    if(v[j] == median) {
                        // Delete the leftmost occurrence of the median
                        v.erase(v.begin() + j);
                        n--;  // Array size decreases by 1
                        operations.pb({i + 1, i + 3});  // Store the operation (1-based indexing)
                        operation_performed = true;
                        break;
                    }
                }
                
                if(operation_performed) break;
            }

            // If no operation was possible, break
            if(!operation_performed) break;
        }

        if(!sorted) {
            cout << -1 << '\n';
        } else {
            cout << operations.size() << '\n';
            for(auto op : operations) {
                cout << op.first << " " << op.second << '\n';
            }
        }
    }

    return 0;
}
