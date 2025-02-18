#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
#define vll vector<ll>
#define pb push_back

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        vll a(n);
        f(i, 0, n) cin >> a[i];
        
        int q;
        cin >> q;

        while (q--) {
            int l, k;
            cin >> l >> k;
            l--; 
            ll curr_and = a[l];
            int r = l;

            while (r < n && curr_and >= k) {
                if (r == n - 1 || (curr_and & a[r + 1]) < k) {
                    break;
                }
                curr_and &= a[++r];
            }

            if (curr_and >= k) {
                cout << r + 1 << " ";  
            } else {
                cout << -1 <<" ";
            }
        }
        cout<<'\n';
    }

    return 0;
}
