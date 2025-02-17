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

    int t; 
    cin >> t; 
    while (t--) {
        int n; 
        cin >> n;
        vector<int> v(n+1);
        f(i, 1, n+1) cin >> v[i];

        vector<int> left(n+1, -1);

        for (int i = 2; i <= n; i++) {
            if (v[i] != v[i-1]) {
                left[i] = i-1;
            }
          else{
            left[i] = left[i-1];
          }
        }
        int q; 
        cin >> q; 
        while (q--) {
            int l, r; 
            cin >> l >> r;
               if(left[r]<l) cout<<-1<<" "<<-1<<'\n';
               else cout<<left[r]<<" "<<r<<'\n';
        }
    }

    return 0;
}
