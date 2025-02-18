/**
 * writer:blinderchief
 **/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define po pop_back
#define me(a, x) memset(a, x, sizeof(a))
#define all(v) v.begin(), v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
#define INF (int)1e18
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
int main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n,k;cin>>n>>k;
        vll v(n+1);
        f(i,0,n) cin>>v[i];
    if (n == k)
    {
        ll b[k / 2];
        for (ll i = 1; i < n; i += 2)
        {
            b[i / 2] = v[i];
        }
        bool ck =false;
        f(i,0,n/2)
        {
            if (b[i] != i + 1)
            {
                cout << i + 1 << '\n';
                ck = true;
                break;
            }
        }
        if(!ck) cout << n / 2 + 1 << '\n';
    }
    else
    {
        if (count(v.begin() + 1, v.begin()+ n - k + 2, 1) == n - k + 1)
        {
            cout << 2 << '\n';
        }
        else
        {
            cout << 1 <<'\n';
        }
    }
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}