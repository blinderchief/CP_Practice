#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define pb push_back
#define all(v) v.begin(), v.end()

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin >> t;
    while(t--) {
        int n, a, b; cin >> n >> a >> b;
        vll v(n), pref(n);
        
        f(i, 0, n) cin >> v[i];
        
        pref[0] = v[0];
        f(i, 1, n) pref[i] = pref[i - 1] + v[i];
        
        ll ans = b * pref[n - 1];
        ll prev = b * v[0];
        
        f(i, 0, n) {
            ans = min(ans, prev + a * v[i] + (pref[n - 1] - pref[i] - (ll)(n - i - 1) * v[i]) * b);
            
            if(i + 1 != n) prev += (v[i + 1] - v[i]) * b;
        }
        
        cout << ans << '\n';
    }
    
    return 0;
}
