#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i, a, n) for (int i = a; i < n; i++)
#define vll vector<ll>
#define pb push_back
#define po pop_back
#define all(v) v.begin(), v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(), v.end())

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<ll, ll>> v(n);
        f(i, 0, n) cin >> v[i].first;
        f(i, 0, n) cin >> v[i].second;
        
        sot(v);

        vector<long double> ch;
        f(i, 0, n)
        {
            long double cal = ((long double)(v[i].first) / (long double)v[i].second);
            ch.push_back(cal);
        }

        int cnt = n;

        if (n == 2)
        {
            if (ch[1] > ch[0])
                cnt = 2;
            else
                cnt = 1;
            cout << cnt << '\n';
            continue;
        }
        else
        {
            long double last = ch[n - 1];
            for (int i = n - 2; i >= 0; i--)
            {
                if (last < ch[i])
                    cnt--;
                else
                    last = ch[i];
            }
            cout << cnt << '\n';
        }
    }
    return 0;
}