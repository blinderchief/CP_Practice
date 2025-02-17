#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
#define vll vector<ll>
#define pb push_back
#define po pop_back
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(),v.end())

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    multiset<int> s;
    int n, t; 
    cin >> n >> t;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        s.insert(x);
    }
    ll ans = 0;
    
    for(int i = 0; i < t; i++) {
        auto it = s.rbegin();
        int temp = *it;
        ans += temp;
        s.erase(--s.end()); 
        s.insert(temp / 2);
    }
    
    cout << ans << '\n';

    return 0;
}
