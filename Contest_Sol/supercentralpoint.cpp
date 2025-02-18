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

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<ll> x(n), y(n);
    map<ll, set<ll>> mpx, mpy;
    f(i, 0, n) {
        cin >> x[i] >> y[i];
        mpx[x[i]].insert(y[i]);
        mpy[y[i]].insert(x[i]);
    }
    ll re = 0;
    f(i, 0, n) {
        if ((*mpx[x[i]].begin() != y[i] && *mpx[x[i]].rbegin() != y[i])
            && (*mpy[y[i]].begin() != x[i] && *mpy[y[i]].rbegin() != x[i])) 
        {
            re++;
        }
    }
    cout << re << '\n';
    return 0;
}
