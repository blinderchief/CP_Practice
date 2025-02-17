
// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // #define ll long long int 
// // // #define f(i,a,n) for(int i =a;i<n;i++)
// // // #define vll vector<ll>
// // // #define pb push_back
// // // #define po pop_back
// // // #define all(v) v.begin(),v.end()
// // // #define no cout << "NO" << '\n';
// // // #define yes cout << "YES" << '\n';
// // // #define sot(v) sort(v.begin(),v.end())
// // // signed main() {
// // // ios_base::sync_with_stdio(false);
// // // cin.tie(0);
// // // int t; cin>>t;
// // // while(t--){
// // //    int n;
// // //     cin >> n;
// // //    vll v(n);
// // //    f(i,0,n){
// // //     cin>>v[i];
// // //    }
// // //    f(i,0,n){
// // //     if(v[i]!=n){
// // //       v[i]++;
// // //     }
// // //     else{
// // //       v[i] = 1;
// // //     }
// // //    }
// // //    f(i,0,n){
// // //     cout<<v[i]<<" ";
// // //    }
// // //     cout <<'\n';
// // // }
// // // return 0;
// // // }


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define all(v) v.begin(), v.end()

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> a(n);
    
    f(i, 0, n) {
        cin >> a[i].first; // Read the first array
    }
    
    f(i, 0, n) {
        cin >> a[i].second; // Read the second array (indicating if we can increase)
    }
    
    sort(all(a)); // Sort based on the first elements
    ll ans = 0;

    // Compute the initial maximum score
    for (int i = 0; i < n; ++i) {
        if (a[i].second) {
            if (i < n / 2) {
                ans = max(ans, a[i].first + k + a[n / 2].first);
            } else {
                ans = max(ans, a[i].first + k + a[n / 2 - 1].first);
            }
        }
    }

    // Find the rightmost index of the element that can’t be increased
    int rm = -1;
    for (int i = n - 1; i >= 0; --i) {
        if (!a[i].second) {
            rm = i;
            break;
        }
    }

    if (rm == -1) {
        cout << ans << endl;
        return;
    }

    // If we found an element that can't be increased, remove it and continue
    ll sex = a[rm].first;
    a.erase(a.begin() + rm);
    n--;

    // Perform binary search for the optimal maximum score
    ll l = -1, r = 2e9;
    while (l + 1 < r) {
        ll m = (l + r) / 2;
        ll cnt = 0, c = k;
        for (int i = n - 1; i >= 0; --i) {
            if (a[i].first >= m) {
                cnt++;
            } else if (a[i].second && (m - a[i].first) <= c) {
                c -= m - a[i].first;
                cnt++;
            }
        }
        if (cnt * 2 > n) {
            l = m; // More than half can achieve m
        } else {
            r = m; // Less than half cannot achieve m
        }
    }
    
    cout << max(ans, sex + l) << endl; // Output the maximum score
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.precision(20);
    cout.setf(ios::fixed);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
