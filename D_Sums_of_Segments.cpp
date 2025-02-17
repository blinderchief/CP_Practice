

// author:blinderchief 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define po pop_back
#define all(v) v.begin(),v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);

     int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i =1;i <= n; i++){
        cin >> a[i];
    } // n

    vector<int> pr(n + 1, 0), ppr(n + 1, 0);
    for (int i = 1; i <= n; i++) pr[i] = pr[i - 1] + a[i]; // n
    for (int i = 1; i <= n; i++)
        ppr[i] = ppr[i - 1] + pr[i]; // n

    vector<int> grp(n + 1, 0);
    grp[1] = ppr[n];
    for (int i = 2; i < n + 1; i++) {
        grp[i] = grp[i - 1] - (n - i + 2) * a[i - 1];
    } // n
    for (int i = 1; i <= n; i++)
        grp[i] += grp[i - 1]; // n
    vector<int> sz;
    int j = 1;
    for (int i = 1; i <= n; i++) {
        sz.push_back(j);
        j += n - i + 1;
    } // n
    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        int gl = upper_bound(all(sz), l)-sz.begin();
        int gr = upper_bound(all(sz), r)-sz.begin(); 
        int ans = grp[gr] - grp[gl - 1];

        l -= sz[gl - 1] - 1;
        ans -= ppr[l + gl - 2]-ppr[gl - 1]-pr[gl - 1]*(l - 1);
        r -= sz[gr - 1]-1;
        ans -= ppr[n]-ppr[gr + r - 1]-pr[gr - 1]*(n - r - gr + 1);

        cout << ans << '\n';
    } // q*logn

return 0;
}