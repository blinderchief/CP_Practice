/**
 * author:blinderchief 
**/
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
#define sot(v) sort(all(v))

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vll v(n), re;

        // Read input array
        f(i, 0, n) {
            cin >> v[i];
        }

        map<ll, int> mp;  // frequency map
        int uniqueCnt = 0;  // count of unique elements after merges

        for (int i = 0; i < n; i++) {
            ll x = v[i];
            mp[x]++;

            // Perform merging as long as frequency of any element reaches 2
            while (mp[x] == 2) {
                mp[x] -= 2;  // remove two occurrences of x
                if (mp[x] == 0) {
                    uniqueCnt--; // reduce unique count if x no longer exists
                }
                x *= 2;  // double x for the next merge
                mp[x]++;  // add the doubled value to the map

                // If x is a new unique element, increase the count
                if (mp[x] == 1) {
                    uniqueCnt++;
                }
            }

            // If x is a unique element not yet counted, increase unique count
            if (mp[v[i]] == 1) {
                uniqueCnt++;
            }

            // Record the minimized size after each prefix
            re.push_back(uniqueCnt);
        }

        // Output result for each prefix
        for (int i = 0; i < re.size(); i++) {
            cout << re[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}
