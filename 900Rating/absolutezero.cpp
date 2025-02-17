// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i,a,n) for(int i =a;i<n;i++)
// #define vll vector<ll>
// #define pb push_back
// #define po pop_back
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(v.begin(),v.end())
// signed main() {
// ios_base::sync_with_stdio(false);
// cin.tie(0);
// int t; cin>>t;
// while(t--){
//         int n;
//         cin >> n;
//         vector<ll> a(n);
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }

//         // If all elements are already zero
//         if (all_of(a.begin(), a.end(), [](int x) { return x == 0; })) {
//             cout << 0 << endl;
//             continue;
//         }

//         vector<int> operations;
//         for (int op = 0; op < 40; op++) {
//             if (all_of(a.begin(), a.end(), [](int x) { return x == 0; })) {
//                 break;
//             }

//             sort(a.begin(), a.end());
//             ll median = ceil(double(accumulate(a.begin(),a.end(),0ll))/n);
//             if(median%2==1){
//               median+=1;
//             }
            
//             operations.push_back(median);

//             for (int i = 0; i < n; i++) {
//                 a[i] = abs(a[i] - median);
//             }
//         }

//         if (all_of(a.begin(), a.end(), [](int x) { return x == 0; })) {
//             cout << operations.size() << endl;
//             for (int x : operations) {
//                 cout << x << " ";
//             }
//             cout << endl;
//         } else {
//             cout << -1 << endl;
//         }
//     }
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define vll vector<ll>

// void solve() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vll b(n - 1);
//         for (int i = 0; i < n - 1; i++) {
//             cin >> b[i];
//         }
//         vll a(n, 0);
//         bool possible = true;
//         for (int i = 0; i < n - 1; i++) {
//             a[i] |= b[i];
//             a[i + 1] |= b[i];
//         }
//         for (int i = 0; i < n - 1; i++) {
//             if (b[i] != (a[i] & a[i + 1])) {
//                 possible = false;
//                 break;
//             }
//         }

//         if (possible) {
//             for (auto i : a) {
//                 cout << i << " ";
//             }
//             cout << '\n';
//         } else {
//             cout << -1 << '\n';
//         }
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     solve();
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vll b(n - 1);
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }

        vll a(n, 0);
        // Construct the array
        bool possible = true;
        for (int i = 0; i < n - 1; i++) {
            a[i] |= b[i];
            a[i + 1] = b[i]; // Assign b[i] to a[i+1] directly
        }

        // Verify the condition
        for (int i = 0; i < n - 1; i++) {
            if (b[i] != (a[i] & a[i + 1])) {
                possible = false;
                break;
            }
        }

        if (possible) {
            for (auto i : a) {
                cout << i << " ";
            }
            cout << '\n';
        } else {
            cout << -1 << '\n';
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
