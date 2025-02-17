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
int t; cin>>t;
while(t--){
   int n, x;
        cin >> n >> x;
        vector<pair<int, int>> a(n);
        vector<int> b(n);
        vector<int> res(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i].first;
            a[i].second = i;
        }
        for (int i = 0; i < n; ++i) cin >> b[i];
        sot(a);
        sot(b);
        int cnt = 0;
        for (int i = 0; i < x; ++i) {
            res[a[n-x+i].second] = b[i];
            if (a[n-x+i].first > b[i]) ++cnt;
        }
 
        for (int i = 0; i < n-x; ++i) {
            res[a[i].second] = b[x+i];
            if (a[i].first > b[x+i]) ++cnt;
        }
 
        if (cnt == x) {
            cout << "YES\n";
            for (int v: res) cout << v << ' ';
            cout << '\n';
        } else {
            cout << "NO\n";
        }
}
return 0;
}
