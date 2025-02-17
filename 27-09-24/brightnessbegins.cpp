
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

ll n;

bool check(ll a) {
    ll cal = sqrt(a);  
    if (cal * cal > a) cal--;  
    while ((cal + 1) * (cal + 1) <= a) cal++; 
    ll chk = a - cal ;
    return chk >= n;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; 
    cin >> t;
    
    while (t--) {
        cin >> n;
        ll l = 1, r = 5e18, ans = 0;
        
        while (l <= r) {
            ll mid = l + (r - l) / 2;
            
            if (check(mid)) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        
        cout << ans << '\n';
    }
    
    return 0;
}
