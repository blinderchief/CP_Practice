
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<ll, ll> rec(ll l, ll r, ll d) {
    if (r - l < d-1) {
        return {0, 0};  
    }
    ll mid = (r + l) / 2;  
    if ((r - l) % 2 != 0) { 
        auto it = rec(l, mid, d); 
       ll ck = it.second*2;  
        ll res = mid * it.second + 2 * it.first ; 
        return {res, ck};
    } else {  
        auto it = rec(l, mid - 1, d); 
        ll res = mid+mid*it.second+ 2*it.first;  
        ll ck = 2*it.second;  
        return {res, ck + 1};  
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;  
    while (t--) {
        ll n, k;
        cin >> n >> k;  
        cout << rec(1, n, k).first << '\n';
    }

    return 0;
}
