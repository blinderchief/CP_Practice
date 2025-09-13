// #include <bits/stdc++.h>

// using i64 = long long;
// using u64 = unsigned long long;
// using u32 = unsigned;
// // remember if
// using u128 = unsigned __int128;
// using i128 = __int128;

// void solve() {
//     int n;
//     std::cin >> n;

//     std::vector<int> p(n), s(n);
//     for (int i = 0; i < n; i++) {
//         std::cin >> p[i];
//     }
//     for (int i = 0; i < n; i++) {
//         std::cin >> s[i];
//     }

//     std::vector<i64> a(n);
//     for (int i = 0; i < n; i++) {
//         a[i] = std::lcm<i64>(p[i], s[i]);
//     }

//     i64 x = 0;
//     for (int i = 0; i < n; i++) {
//         x = std::gcd(x, a[i]);
//         if (x != p[i]) {
//             std::cout << "NO\n";
//             return;
//         }
//     }
//     x = 0;
//     for (int i = n - 1; i >= 0; i--) {
//         x = std::gcd(x, a[i]);
//         if (x != s[i]) {
//             std::cout << "NO\n";
//             return;
//         }
//     }
//     std::cout << "YES\n";
// }

// int main() {
//     std::ios::sync_with_stdio(false);
//     std::cin.tie(nullptr);

//     int t;
//     std::cin >> t;

//     while (t--) {
//         solve();
//     }

//     return 0;
// }

/**
 * writer:blinderchief
 **/
#include <bits/stdc++.h>
using namespace std;
/*
#define LOCAL
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) "india"
#endif
*/
#define ll long long
#define ull unsigned ll
#define f(i, a, n) for (int i = a; i < n; i++)
#define vll vector<ll>
#define vi vector<int>
#define pb emplace_back
#define po pop_back
#define me(a, x) memset(a, x, sizeof(a))
#define all(v) (v).begin(), (v).end()
#define rall(x) (x).rbegin(), (x).rend()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
#define sz(x) (int)(x).size()
#define inf 0x3f3f3f3f
const int mod = (int)(1e9 + 7);
// Small observations-Think,read Problem again
/*
 */
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
signed main()
{
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vll pre(n), suf(n);
        f(i, 0, n) cin >> pre[i];
        f(i, 0, n) cin >> suf[i];

        bool ck = false;
        if (n == 1)
        {
            if (pre[0] != suf[0])
            {
                no
            }
            else
            {
                yes
            }
            continue;
        }
        vll c(n);
        bool ans = true;
        for (int i = 0; i < n; i++)
        {
            c[i] = lcm(pre[i], suf[i]);
        }
        ll g = c[0];
        for (int i = 0; i < n; i++)
        {
            g = __gcd(g, c[i]);
            if (g != pre[i])
                ans = false;
        }
        g = c[n - 1];
        for (int i = n - 1; i >= 0; i--)
        {
            g = __gcd(g, c[i]);
            if (g != suf[i])
                ans = false;
        }
        if (ans)
            yes else no
    }

    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    // cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}