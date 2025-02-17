#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n + 1);
        
        f(i, 1, n + 1) cin >> v[i];
        
        ll cnt = 0; 
        int j = 1; 
        
        for (int i = 1; i <= n; i++) {
            while (j <= n && v[j] >= j - i + 1) {
                j++; 
            }
            cnt += (j - i);
        }
        
        cout << cnt << '\n';
    }
    
    return 0;
}
