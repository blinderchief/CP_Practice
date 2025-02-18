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
vector<ll> chk(1<<20, 0);
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; 
    cin >> t;
    while (t--) {
        ll n, ans = 0;
        cin >> n;
        vector<ll> v(n);
        f(i, 0, n) cin >> v[i];
        fill(chk.begin(), chk.end(), 0);
        f(i, 0, n) {
            f(j, i + 1, n) {
                chk[v[j]^v[i]]++;
            }
        }
        f(i, 0, chk.size()) {
            if (chk[i] > 1) {
                ans += chk[i] * (chk[i] - 1) / 2;
            }
        }
        cout << ans * 4 *2 << '\n'; 
    }
    return 0;
}


// hard version 
