#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define f(i, a, n) for(int i = a; i < n; i++)
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
        int n, k; 
        cin >> n >> k;
        vll v(n);
        
        f(i, 0, n) cin >> v[i];
        
        sort(v.rbegin(), v.rend()); 
        
        for (int i = 1; i < n && k > 0; i += 2) {
            int diff = v[i-1] - v[i];
            int add = min(diff, k);
            v[i] += add;
            k -= add;
        }

        int Alice = 0, Bob = 0;
        f(i, 0, n) {
            if (i % 2 != 0) {
                Bob += v[i];
            } else {
                Alice += v[i];
            }
        }
        
        cout << abs(Alice - Bob) << '\n';
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
// ios_base::sync_with_stdio(false);
// cin.tie(0);
// int t; cin>>t;
// while(t--){
//     int n,q; cin>>n>>q;
//     vector<pair<int,int>> Q(q);
//     vector<int> ans;
//     vector<string> v(n);
//     f(i,0,n) cin>>v[i];
//     f(i,0,q) cin>>Q[i].first>>Q[i].second;
//     f(i,0,q){
//         if(Q[i].first<Q[i].second) {
//             if(v[Q[i].first-1][0] == v[Q[i].second-1][0] || v[Q[i].first-1][1] == v[Q[i].second-1][1] || v[Q[i].first-1][0] == v[Q[i].second-1][1] || v[Q[i].first-1][1] == v[Q[i].second-1][0]){
//                 ans.push_back(Q[i].second-Q[i].first);
//             }
//             else{
//                 ans.push_back(-1);
//             }
//         }
//         else if(Q[i].first>Q[i].second){
//             if(Q[i].first == n){
//            if(v[Q[i].first-1][0] == v[Q[i].second-1][0] || v[Q[i].first-1][1] == v[Q[i].second-1][1] || v[Q[i].first-1][0] == v[Q[i].second-1][1] || v[Q[i].first-1][1] == v[Q[i].second-1][0]){
//             ans.push_back(Q[i].first-Q[i].second);
//             }
//             else{
//                 ans.push_back(-1);
//             }
//             }
//             else{

//             }
        
            
//         }
//     }
// }
// return 0;
// }
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

// Function to check conditions for using a portal
bool check(int k, int x, int y, const vector<string>& a) {
    if (!k) return false;
    if (a[x] == a[k] || a[y] == a[k]) return false;
    return true;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    
    while(t--) {
        int n, q;
        cin >> n >> q;
        vector<string> a(n + 1);  // Using 1-based indexing
        
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        vector<vector<int>> L(n + 1, vector<int>(2, 0)), R(n + 1, vector<int>(2, 0));

        // Compute left array
        for(int i = 1; i <= n; i++) {
            if (i == 1) {
                L[i][0] = L[i][1] = 0;
            } else {
                if (a[i] == a[i - 1]) {
                    L[i][0] = L[i - 1][0];
                    L[i][1] = L[i - 1][1];
                } else {
                    L[i][0] = i - 1;
                    if (a[i] == a[L[i - 1][0]]) L[i][1] = L[i - 1][1];
                    else L[i][1] = L[i - 1][0];
                }
            }
        }

        // Compute right array
        for(int i = n; i >= 1; i--) {
            if (i == n) {
                R[i][0] = R[i][1] = 0;
            } else {
                if (a[i] == a[i + 1]) {
                    R[i][0] = R[i + 1][0];
                    R[i][1] = R[i + 1][1];
                } else {
                    R[i][0] = i + 1;
                    if (a[i] == a[R[i + 1][0]]) R[i][1] = R[i + 1][1];
                    else R[i][1] = R[i + 1][0];
                }
            }
        }

        // Processing each query
        while (q--) {
            ll x, y; 
            cin >> x >> y;
            bool flag = false;
            ll ans = LLONG_MAX;

            // Check direct connection
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                    if (a[x][i] == a[y][j]) {
                        flag = true;
                    }
                }
            }

            if (flag) {
                cout << abs(x - y) << '\n';
                continue;
            }

            // Check connection via a portal
            for (int k : {L[x][0], L[x][1], L[y][0], L[y][1], R[x][0], R[x][1], R[y][0], R[y][1]}) {
                if (check(k, x, y, a)) {
                    flag = true;
                    ans = min(ans, abs(k - x) + abs(k - y));
                }
            }

            if (flag) {
                cout << ans << '\n';
            } else {
                cout << -1 << '\n';
            }
        }
    }
    
    return 0;
}
