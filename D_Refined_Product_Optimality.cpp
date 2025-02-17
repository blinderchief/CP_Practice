// /**
//  * writer:blinderchief 
//  **/
// #include<bits/stdc++.h>
// using namespace std;
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
// #define ll long long int 
// #define f(i,a,n) for(int i =a;i<n;i++)
// #define vll vector<ll>
// #define vi vector<int>
// #define pb push_back
// #define po pop_back
// #define me(a, x) memset(a, x, sizeof(a))
// #define all(v) v.begin(),v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(all(v))
// const ll MOD= 998244353;

// ll qpow(ll x, ll y = MOD - 2) {
//     ll res = 1;
//     while (y) {
//         if (y & 1) (res *= x) %= MOD;
//         (x *= x) %= MOD;
//         y >>= 1;
//     }
//     return res;
// }

// int main() {
//     auto begin = chrono::high_resolution_clock::now();
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     int t; 
//     cin >> t;
//     while (t--) {
//         int n, q; 
//         cin >> n >> q;

//         vector<ll> a(n + 1), b(n + 1), t1(n + 1), t2(n + 1);

//         for (int i = 1; i <= n; i++) {
//             cin >> a[i];
//             t1[i] = a[i];
//         }
//         for (int i = 1; i <= n; i++) {
//             cin >> b[i];
//             t2[i] = b[i];
//         }

//         sort(t1.begin() + 1, t1.end());
//         sort(t2.begin() + 1, t2.end());

//         ll re = 1; // Initialize re to 1
//         for (int i = 1; i <= n; i++) {
//             re = re * min(t1[i], t2[i]) % MOD;
//         }

//         cout << re << " ";

//         while (q--) {
//             int o, x;
//             cin >> o >> x;

//             if (o == 1) {
//                 int p = (upper_bound(t1.begin() + 1, t1.end(), a[x]) - t1.begin()) - 1;
//                 re = re * qpow(min(t1[p], t2[p])) % MOD;
//                 ++a[x], ++t1[p];
//                 re = re * min(t1[p], t2[p]) % MOD;
//             } else {
//                 int p =( upper_bound(t2.begin() + 1, t2.end(), b[x]) - t2.begin()) - 1;
//                 re = re * qpow(min(t1[p], t2[p])) % MOD;
//                 ++b[x], ++t2[p];
//                 re = re * min(t1[p], t2[p]) % MOD;
//             }

//             cout << re << " ";
//         }

//         cout << "\n";
//     }

//     auto end = chrono::high_resolution_clock::now();
//     auto elapsed = chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
//     cout << "Time taken:" << elapsed.count()*1e-9 << " seconds" << endl;

//     return 0;
// }





