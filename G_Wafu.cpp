#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<ll> a = {1, 1};
    vector<ll> mov = {0, 1};

    ll amul = 1;
    for (int i = 2; i < 35; i++)
    {
        a.push_back((i * amul) % MOD);
        amul = (amul * a.back()) % MOD;
        mov.push_back(min(INF, mov.back() * 2));
    }

    int tt;
    cin >> tt;
    vector<ll> ANS;

    while (tt--)
    {
        int n;
        ll k;
        cin >> n >> k;

        vector<ll> s(n);
        for (int i = 0; i < n; i++)
            cin >> s[i];

        sort(s.begin(), s.end(), greater<ll>());

        ll ans = 1;

        while (k > 0 && !s.empty())
        {
            if (s.back() < (int)a.size() && mov[s.back()] <= k)
            {
                k -= mov[s.back()];
                ans = (ans * a[s.back()]) % MOD;
                s.pop_back();
            }
            else
            {
                ans = (ans * s.back()) % MOD;
                ll x = s.back();
                s.pop_back();
                for (ll i = min((ll)a.size() - 1, x - 1); i >= 1; i--)
                {
                    s.push_back(i);
                }
                k -= 1;
            }
        }

        ANS.push_back(ans % MOD);
    }

    for (ll val : ANS)
        cout << val << "\n";
}
