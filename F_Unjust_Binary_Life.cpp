/**
 * writer:blinderchief
 **/
#include <bits/stdc++.h>
using namespace std;

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
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
/*
what I
*/
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
        string a, b;
        cin >> a >> b;

        vector<ll> yc0(2 * n + 1, 0), yc1(2 * n + 1, 0), cnt(2 * n + 1, 0);

        int c0 = 0, c1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (b[i] == '0')
                c0++;
            else
                c1++;

            yc0[c0 - c1 + n] += c0;
            yc1[c0 - c1 + n] += c1;
            cnt[c0 - c1 + n]++;
        }

        for (int i = 1; i < 2 * n + 1; i++)
        {
            yc0[i] += yc0[i - 1];
            yc1[i] += yc1[i - 1];
            cnt[i] += cnt[i - 1];
        }

        int xc0 = 0, xc1 = 0;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '0')
                xc0++;
            else
                xc1++;

            int j = xc1 - xc0 + n;
            ans += (ll)xc0 * (cnt[j]) + (yc0[j]);
            ans += (ll)xc1 * (n - cnt[j]) + (yc1[2 * n] - yc1[j]);
        }
        cout << ans << '\n';
    }

    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    // cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}
