// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long int
// #define vll vector<ll>
// #define pb push_back
// #define all(v) v.begin(), v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';

// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n, m;
//         cin >> n >> m;
//         vector<ll> a(n + 1);
//         multiset<ll> s;
//         for (int i = 1; i <= n; i++) cin >> a[i];
//         sort(a.begin() + 1, a.end());

//         for (int i = 1, x; i <= m; i++) {
//             cin >> x;
//             s.insert(x);
//         }

//        bool hi=false;
//         bool possible = true;
//         while (!s.empty()) {
//            if (s.size() > n) {
//             no
//             hi=true;
//             break;
//         }
//             ll see = *s.rbegin();
//             s.erase(--s.end());   
//             if (see == a[n]) {
//                 n--; 
//                } else if (see < a[n]) {
//                 possible = false;
//                 break;
//             } else {
//               ll ck= see / 2;
//                 s.insert(ck); 
//                 s.insert(see-ck); 
//             }

//             if (n == 0) break; 
//         }
//        if(hi) continue;
//         if (possible && n == 0 && s.empty()) {
//             yes
//         } else {
//             no
//         }
//     }

//     return 0;
// }
