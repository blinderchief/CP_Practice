
// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     int n, k;
//     cin >> n >> k;
    
//     vector<array<int, 3>> c(k);
//     for (int i = 0; i < k; i++) {
//         cin >> c[i][0] >> c[i][1] >> c[i][2];
//         c[i][0]--;
//         c[i][1]--;
//     }
//     sort(c.begin(),c.end());
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) {
//         arr[i] = i + 1;
//     }
    
//     for (const auto& i : c) {
//         int l = i[0];
//         int r = i[1];
//         int m = i[2];
//         int curr_min = *min_element(arr.begin() + l, arr.begin() + r + 1);
        
//         if (curr_min == m) {
//             bool fixed = false;
      
//             if (r + 1 < n) {
//                 int min_pos = min_element(arr.begin() + l, arr.begin() + r + 1) - arr.begin();
//                 swap(arr[min_pos], arr[r + 1]);
//                 fixed = true;
//             }
            
//             if (!fixed) {
//                 cout << -1 << '\n';
//                 return;
//             }
//         }
//     }
    
//     for (const auto& i : c) {
//         int l = i[0];
//         int r = i[1];
//         int m = i[2];
        
//         if (*min_element(arr.begin() + l, arr.begin() + r + 1) == m) {
//             cout << -1 << '\n';
//             return;
//         }
//     }
    
//     for (int x : arr) {
//         cout << x << " ";
//     }
//     cout << '\n';
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<vector<pair<int, int>>> c(n + 1);
    for (int i = 0; i < k; i++) {
        int l, r, m;
        cin >> l >> r >> m;
        c[m].push_back({l - 1, r}); 
    }
    vector<int> arr(n, 1);
    for (int m = 1; m <= n; m++) {
        for (const auto& ra : c[m]) {
            int l = ra.first, r = ra.second;
            if (*min_element(arr.begin() + l, arr.begin() + r) == m) {
                fill(arr.begin() + l, arr.begin() + r, m + 1);
            }
        }
    }
    
    if (find(arr.begin(), arr.end(), n + 1) != arr.end()) {
        cout << -1 << '\n';
        return;
    }
    
    for (int x : arr) {
        cout << x << " ";
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
