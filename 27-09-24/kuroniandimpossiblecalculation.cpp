#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define pb push_back
#define po pop_back
#define all(v) v.begin(),v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(),v.end())

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
  
    ll n, md;
    cin >> n >> md;
  
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
  
    // If n > md, result is 0 because of Pigeonhole principle
    if (n > md) {
        cout << 0 << '\n';
        return 0;
    }
  
    ll ans = 1;
  
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            ans *= abs(a[i] - a[j]);
            ans %= md; // Take modulo at each step
            if (ans == 0) {
                cout << 0 << '\n';
                return 0;
            }
        }
    }
  
    cout << ans << '\n';
    return 0;
}
