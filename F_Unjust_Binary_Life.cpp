#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll mod = 1e9+7;
ll mod2 = 998244353;

void solve()
{
    ll n; cin >> n;
    string a, b; cin >> a >> b;

    vector<ll> preA(n+1), preB(n+1);
    for (ll i = 1; i <= n; i++) preA[i] = preA[i-1] + (a[i-1] == '1');
    for (ll i = 1; i <= n; i++) preB[i] = preB[i-1] + (b[i-1] == '1');

    vector<vector<ll>> Bneed(n+1);
    Bneed[0] = {0, 0, 0};
    for (ll i = 1; i <= n; i++)
    {
        Bneed[i] = {2*preB[i] - i, preB[i], i};
    }
    sort(Bneed.begin()+1, Bneed.end());

    for (ll i = 1; i <= n; i++)
    {
        Bneed[i][1] += Bneed[i-1][1];
        Bneed[i][2] += Bneed[i-1][2];
    }

    vector<ll> cmp(n);
    for (ll i = 1; i <= n; i++) cmp[i-1] = Bneed[i][0];

    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        ll idx = upper_bound(cmp.begin(), cmp.end(), i - 2*preA[i]) - cmp.begin();

        ans += idx * preA[i] + Bneed[idx][1];
        ans += (n - idx) * (i - preA[i]) + (n*(n+1)/2 - Bneed[idx][2]) - (Bneed[n][1] - Bneed[idx][1]);
    }

    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}