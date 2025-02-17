// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // #define ll long long int 
// // // // #define f(i,n) for(int i =0;i<n;i++)
// // // // #define sot(v) sort(v.begin(),v.end())
// // // // signed main() {
// // // // ios_base::sync_with_stdio(false);
// // // // cin.tie(0);
// // // // int t; cin>>t;
// // // // while(t--){
// // // // int n; cin>>n;
// // // // vector<ll> v(n);
// // // // set<ll> s;
// // // // f(i,n){
// // // //   cin>>v[i];
// // // //   s.insert(v[i]);
// // // // }
// // // // int ans = ceil((double(s.size())+1)/2);
// // // // cout<<ans<<'\n';

// // // // }
// // // // return 0;
// // // // }


// // // #include <iostream>
// // // #include <vector>
// // // #include <algorithm>
// // // #include <set>

// // // using namespace std;

// // // void maximize_cakes_eaten_by_alice(int t, vector<pair<int, vector<int>>>& test_cases) {
// // //     for (int k = 0; k < t; ++k) {
// // //         int n = test_cases[k].first;
// // //         vector<int>& cakes = test_cases[k].second;

// // //         int alice_cakes = 0;
// // //         int max_alice_tastiness = 0;
// // //         string turn = "Alice";

// // //         // Create a vector of pairs (tastiness, index) and sort by tastiness
// // //         vector<pair<int, int>> cakes_with_indices;
// // //         for (int i = 0; i < n; ++i) {
// // //             cakes_with_indices.push_back({cakes[i], i});
// // //         }
// // //         sort(cakes_with_indices.begin(), cakes_with_indices.end());

// // //         set<int> remaining_cakes;
// // //         for (int i = 0; i < n; ++i) {
// // //             remaining_cakes.insert(i);
// // //         }

// // //         for (int i = 0; i < n; ++i) {
// // //             int tastiness = cakes_with_indices[i].first;
// // //             int index = cakes_with_indices[i].second;
// // //             if (turn == "Alice") {
// // //                 // Alice eats this cake if it is strictly greater than max tastiness she has eaten
// // //                 if (tastiness > max_alice_tastiness) {
// // //                     alice_cakes += 1;
// // //                     max_alice_tastiness = tastiness;
// // //                     remaining_cakes.erase(index);
// // //                     turn = "Bob";
// // //                 }
// // //             } else {
// // //                 // Bob will eat this cake
// // //                 if (remaining_cakes.find(index) != remaining_cakes.end()) {
// // //                     remaining_cakes.erase(index);
// // //                     turn = "Alice";
// // //                 }
// // //             }
// // //         }
// // //         cout << alice_cakes << endl;
// // //     }
// // // }

// // // int main() {
// // //     int t;
// // //     cin >> t;
// // //     vector<pair<int, vector<int>>> test_cases(t);
// // //     for (int i = 0; i < t; ++i) {
// // //         int n;
// // //         cin >> n;
// // //         vector<int> cakes(n);
// // //         for (int j = 0; j < n; ++j) {
// // //             cin >> cakes[j];
// // //         }
// // //         test_cases[i] = {n, cakes};
// // //     }

// // //     maximize_cakes_eaten_by_alice(t, test_cases);
// // //     return 0;
// // // }


// // #include <bits/stdc++.h>
// // using namespace std;
// // #define N 5010
// // #define ll long long int
// // ll dp[N][N];
// // ll ct[N];
// // #define DP dp[i][asc]
// // ll r(ll i, ll asc)
// // {
// //     if (asc < 0)
// //         return -2;
// //     if (!i)
// //         return asc ? -2 : 0;
// //     if (~DP)
// //         return DP;
// //     if (ct[i])
// //         DP = r(i - 1, asc - 1);
// //     else
// //         DP = r(i - 1, asc);
// //     if (r(i - 1, asc) != -2 && r(i - 1, asc) + ct[i] <= asc)
// //     {
// //         if (DP == -2 || r(i - 1, asc) + ct[i] < DP)
// //         {
// //             DP = r(i - 1, asc) + ct[i];
// //         }
// //     }
// //     return DP;
// // }
// // int main()
// // {
// //     int tc;
// //     cin >> tc;
// //     while (tc--)
// //     {
// //         ll n;
// //         cin >> n;
// //         for(int i = 0; i <= n; i++) 
// //             fill_n(dp[i], n + 1, -1);
// //         for(int i = 0; i < n ;i++) { 
// //             ll x;
// //             cin >> x;
// //             ct[x]++; 
// //         }
// //         ll ans = n;
// //         for(int i = n; i >= 0; i--)
// //             if (r(n, i) != -2) ans = i;
// //         cout << ans << '\n';
// //         fill_n(ct, n + 1, 0ll);
// //     }
// // }

// // #include <iostream>
// // #include <vector>
// // #include <algorithm>
// // #include <set>

// // using namespace std;

// // void maximize_cakes_eaten_by_alice(int t, vector<pair<int, vector<int>>>& test_cases) {
// //     for (int k = 0; k < t; ++k) {
// //         int n = test_cases[k].first;
// //         vector<int>& cakes = test_cases[k].second;

// //         int alice_cakes = 0;
// //         int max_alice_tastiness = 0;
// //         bool alice_turn = true;

// //         // Create a vector of pairs (tastiness, index) and sort by tastiness
// //         vector<pair<int, int>> cakes_with_indices;
// //         for (int i = 0; i < n; ++i) {
// //             cakes_with_indices.push_back({cakes[i], i});
// //         }
// //         sort(cakes_with_indices.begin(), cakes_with_indices.end());

// //         // Create a set to keep track of remaining cake indices
// //         set<int> remaining_cakes;
// //         for (int i = 0; i < n; ++i) {
// //             remaining_cakes.insert(i);
// //         }

// //         for (int i = 0; i < n; ++i) {
// //             int tastiness = cakes_with_indices[i].first;
// //             int index = cakes_with_indices[i].second;
// //             if (alice_turn) {
// //                 // Alice eats this cake if it is strictly greater than max tastiness she has eaten
// //                 if (tastiness > max_alice_tastiness) {
// //                     alice_cakes += 1;
// //                     max_alice_tastiness = tastiness;
// //                     remaining_cakes.erase(index);
// //                     alice_turn = false;  // Switch to Bob's turn
// //                 }
// //             } else {
// //                 // Bob will eat any remaining cake
// //                 if (remaining_cakes.find(index) != remaining_cakes.end()) {
// //                     remaining_cakes.erase(index);
// //                     alice_turn = true;  // Switch to Alice's turn
// //                 }
// //             }
// //         }
// //         cout << alice_cakes << endl;
// //     }
// // }

// // int main() {
// //     int t;
// //     cin >> t;
// //     vector<pair<int, vector<int>>> test_cases(t);
// //     for (int i = 0; i < t; ++i) {
// //         int n;
// //         cin >> n;
// //         vector<int> cakes(n);
// //         for (int j = 0; j < n; ++j) {
// //             cin >> cakes[j];
// //         }
// //         test_cases[i] = {n, cakes};
// //     }

// //     maximize_cakes_eaten_by_alice(t, test_cases);
// //     return 0;
// // }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <set>

// using namespace std;

// void maximize_cakes_eaten_by_alice(int t, vector<pair<int, vector<int>>>& test_cases) {
//     for (int k = 0; k < t; ++k) {
//         int n = test_cases[k].first;
//         vector<int>& cakes = test_cases[k].second;

//         int alice_cakes = 0;
//         int max_alice_tastiness = 0;
//         bool alice_turn = true;

//         // Create a vector of pairs (tastiness, index) and sort by tastiness
//         vector<pair<int, int>> cakes_with_indices;
//         for (int i = 0; i < n; ++i) {
//             cakes_with_indices.push_back({cakes[i], i});
//         }
//         sort(cakes_with_indices.begin(), cakes_with_indices.end());

//         // Create a set to keep track of remaining cake indices
//         set<int> remaining_cakes;
//         for (int i = 0; i < n; ++i) {
//             remaining_cakes.insert(i);
//         }

//         for (int i = 0; i < n; ++i) {
//             int tastiness = cakes_with_indices[i].first;
//             int index = cakes_with_indices[i].second;
//             if (alice_turn) {
//                 // Alice eats this cake if it is strictly greater than max tastiness she has eaten
//                 if (tastiness > max_alice_tastiness) {
//                     alice_cakes += 1;
//                     max_alice_tastiness = tastiness;
//                     remaining_cakes.erase(index);
//                     alice_turn = false;  // Switch to Bob's turn
//                 }
//             } else {
//                 // Bob will eat any remaining cake
//                 if (remaining_cakes.find(index) != remaining_cakes.end()) {
//                     remaining_cakes.erase(index);
//                     alice_turn = true;  // Switch to Alice's turn
//                 }
//             }
//         }
//         cout << alice_cakes << endl;
//     }
// }

// int main() {
//     int t;
//     cin >> t;
//     vector<pair<int, vector<int>>> test_cases(t);
//     for (int i = 0; i < t; ++i) {
//         int n;
//         cin >> n;
//         vector<int> cakes(n);
//         for (int j = 0; j < n; ++j) {
//             cin >> cakes[j];
//         }
//         test_cases[i] = {n, cakes};
//     }

//     maximize_cakes_eaten_by_alice(t, test_cases);
//     return 0;
// }
