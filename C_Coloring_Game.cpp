/**
 * writer: blinderchief
 **/
#include <bits/stdc++.h>
using namespace std;
// now search in range [j+1, j+end] for third val
				// such that ai+aj+ak > a(n-1)
				// ak > a(n-1) - ai - aj
#define ll long long
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define vi vector<int>
#define pb emplace_back
#define all(v) (v).begin(), (v).end()
#define sot(v) sort(all(v))
#define sz(x) (int)(x).size()
#define yes cout << "YES\n"
#define no cout << "NO\n"
const int mod = 1e9+7;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; 
    cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sot(v);
        ll ans = 0;
    for(int i = 0; i < n-2; i++) {
			for(int j = i+1; j < n-1; j++) {
        int a = v[i]+v[j];
				auto it = lower_bound(v.begin()+j+1, v.end(),a);
				int end = it - (v.begin()+j+1);
        // cout<<end<< " "<<"*";
				if(end == 0) continue;
				it = upper_bound(v.begin()+j+1, v.begin()+j+end+1, v[n-1]-a);
				ans += (v.begin()+j+end+1) - it;
        cout<<ans<<" ";
			}
		}
 
        cout << ans << '\n';
    }
    return 0;
}



