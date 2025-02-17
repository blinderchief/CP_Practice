#include<bits/stdc++.h>
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
int t; cin>>t;
while(t--){
      int n, k;
    cin >> n >> k;
    vector<int> a(2 * n);
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        a[i + j] += 1;
      }
    }
    sort(a.rbegin(), a.rend());
    int ans = 0;
    for (int x : a) {
      if (k > 0) {
        int take = min(k, x);
        k -= take;
        ans += 1;
      }
    }
    cout << ans << '\n';

}
return 0;
}

    
