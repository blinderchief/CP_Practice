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
        vll v(n);
        f(i, 0, n) {
            cin >> v[i];
        }
        
        // Remove duplicate adjacent elements
        vll ::iterator ip;
        ip = unique(all(v));
        v.resize(distance(v.begin(), ip));

        int ans = 0; // At least one peak or valley
        int size = v.size();
        
        // If the array is reduced to a size less than 3 after removing duplicates,
        // there are no peaks or valleys.
        if(size == 1) {
            cout << 1 << '\n';  // Only one unique element
            continue;
        } else if(size == 2) {
            cout << 2 << '\n';  // At least two unique elements form a straight line
            continue;
        }

        // Count peaks and valleys
        for(int i = 1; i < size - 1; i++) {
            if((v[i] > v[i-1] && v[i] < v[i+1]) || (v[i] < v[i-1] && v[i] > v[i+1])) {
                ans++;
            }
        }
        
        cout << size-ans << '\n';
    }

    return 0;
}
