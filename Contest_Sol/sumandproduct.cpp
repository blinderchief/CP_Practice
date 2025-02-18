#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define pb push_back
#define po pop_back
#define all(v) v.begin(), v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(),v.end())

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        
        vll v(n);
        map<ll, ll> mp;
        
        f(i, 0, n) {
            ll x; 
            cin >> x;
            mp[x]++;
        }
        
        int q; 
        cin >> q;
        while (q--) {
            ll x, y; 
            cin >> x >> y;
            
            ll dt = x * x - 4 * y; 
            
            if (dt < 0) {
                cout << 0 << ' ';
                continue;
            }
            
            ll s = sqrtl(dt);
            if (s * s != dt) {
                cout << 0 << ' ';
                continue;
            }
            
            ll a = (x + s) / 2, b = (x - s) / 2;
            
            if ((x + s) % 2 != 0 || (x - s) % 2 != 0) {
                cout << 0 << ' ';
                continue;
            }
            
            if (a == b) {
                cout << mp[a] * (mp[a] - 1) / 2 << ' ';
            } else {
                cout << mp[a] * mp[b] << ' ';
            }
        }
        cout << '\n';
    }

    return 0;
}



