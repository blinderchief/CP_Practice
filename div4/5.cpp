#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

ll check(int k) {
    ll res = 1;
    for (int i = 0; i < k; ++i) {
        res *= 3;
    }
    return res;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; 
    cin >> t;
    
    while (t--) {
        ll l, r; 
        cin >> l >> r;
        ll res = 0;
        
        int chh = log2(l) / log2(3);
        chh++;
        res += (2 * chh);
        
        while (r > l) {
            int k = log2(r) / log2(3);
            ll tem = check(k);
            ll cnt = r - max(tem, l + 1);
            r = tem - 1;
            res += ((cnt + 1)*(k + 1));
        }
        
        cout <<res<< '\n';
    }
    
    return 0;
}
