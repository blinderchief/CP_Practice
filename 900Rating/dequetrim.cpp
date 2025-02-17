// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
    
//     int t;
//     cin >> t;
//     while(t--) {
//         int n, s;
//         cin >> n >> s;
//         vector<int> a(n);
//         int sum = 0;
        
//         for(int i = 0; i < n; ++i) {
//             cin >> a[i];
//             sum += a[i];
//         }
        
//         if(sum < s) {
//             cout << -1 << '\n';
//             continue;
//         }
//         if(sum == s) {
//             cout << 0 << '\n';
//             continue;
//         }
//         int curr = 0, l = 0, max_l = 0;
//         for(int r = 0; r < n; r++) {
//             curr += a[r];
//             while(curr > s) {
//                 curr -= a[l];
//                 l++;
//             }
//             if(curr == s) {
//                 max_l = max(max_l, r - l + 1);
//             }
//         }
//         cout << (n - max_l) << '\n';
//     }

//     return 0;
// }

