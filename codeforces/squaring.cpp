#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
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

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vll v(n);
        f(i, 0, n) cin >> v[i];

        if (is_sorted(all(v))) {
            cout << 0 << '\n';
            continue;
        }

       int last = 0;ll ans = 0;
         const ll MX = 1e6;
         int flag=0;
        for(int i = 1; i < n; ++i) {
        while (v[i] < v[i - 1] && 1ll * v[i] * v[i] <= MX) {
            ans++;
            if (v[i] == 1) {
                cout << "-1\n";
                flag =1;
                break;
            }
             v[i] *= v[i];
        }
         if(flag) break;
        if (v[i - 1] <=  v[i]) {
            ans += last;
            continue;
        }
        last++;
        ans += last;
    }
    if(!flag) cout << ans << '\n';
    }
    
    return 0;
}
