// /**
//  * writer:blinderchief
//  **/
// #include<bits/stdc++.h>
// using namespace std;
// /*
// #define LOCAL
// #ifdef LOCAL
// #include "algo/debug.h"
// #else
// #define debug(...) "india"
// #endif
// */
// #define int long long
// #define f(i,a,n) for(int i = a; i < n; i++)
// #define vll vector<ll>
// #define vi vector<int>
// #define pb push_back
// #define po pop_back
// #define me(a, x) memset(a, x, sizeof(a))
// #define all(v) v.begin(), v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(all(v))
// #define sz(x) (int)(x).size()
// #define INF (int)9e18;
// const int mod = (int)(1e9 + 7);
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
// signed main() {
//     auto begin = chrono::high_resolution_clock::now();
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int t; cin >> t;
//     while (t--) {
        
//     }
//     auto end = chrono::high_resolution_clock::now();
//     auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
//    //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<ll> l(n), r(n);
        for (int i = 0; i < n; i++) cin >> l[i];
        for (int i = 0; i < n; i++) cin >> r[i];

        ll sum_max = 0;
        vector<ll> mins;
        mins.reserve(n);

        for (int i = 0; i < n; i++) {
            ll li = l[i], ri = r[i];
            sum_max += max(li, ri);
            mins.push_back(min(li, ri));
        }

        // Sort mins in descending order
        sort(mins.begin(), mins.end(), greater<ll>());

        ll sum_extra = 0;
        // Take the largest k-1 minima
        for (int i = 0; i < k - 1 && i < (int)mins.size(); i++) {
            sum_extra += mins[i];
        }

        // +1 to force the k-th distinct-color pair
        ll answer = sum_max + sum_extra + 1;
        cout << answer << '\n';
    }

    return 0;
}
