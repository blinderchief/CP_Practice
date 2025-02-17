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
  int n,k; cin>>n>>k;
 vll v(n);
 f(i,0,n) cin>>v[i];
 sot(v);
  

}
return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// void solve(){
//     int n, k; cin >> n >> k;

//     int a[n];
//     for (int i = 0; i < n; i++) cin >> a[i];

//     if (k > 2){
//         cout << 0 <<'\n';
//         return;
//     }
//     sort(a, a + n);
//     int ans = a[0];
//     for (int i = 0; i < n; i++){
//         for (int j = i + 1; j < n; j++) ans = min(ans, abs(a[i] - a[j]));
//     }
//     if (k == 1){
//         cout << ans << '\n';
//         return;
//     }

//     for (int i = 0; i < n; i++){
//         for (int j = i + 1; j < n; j++){
//             int v = abs(a[i] - a[j]);
//             auto f = lower_bound(a, a + n, v);
//             if (f < a + n) ans = min(ans, abs(v - *f));
//             if (f > a) ans = min(ans, abs(v - *(f - 1)));
//         }
//     }
//     cout << ans << '\n';

// }

// signed main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
//     int t; cin >> t;
//     while (t--) solve();
// }