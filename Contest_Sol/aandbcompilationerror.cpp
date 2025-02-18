// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i,a,n) for(int i =a;i<n;i++)
// #define vll vector<ll>
// #define pb push_back
// #define po pop_back
// #define all(v) v.begin(),v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(v.begin(),v.end())
// signed main() {
// ios_base::sync_with_stdio(false);
// cin.tie(0);
//   int n;cin>>n;
//   vll a(n),b(n-1),c(n-2);
//   f(i,0,n) cin>>a[i];
//   f(i,0,n-1) cin>>b[i];
//   f(i,0,n-2) cin>>c[i];
//   sot(a);
//   sot(b);
//   sot(c);
//   vector<ll> ans;
//   int j =0;
//   int cnt =0;
//   for(int i =0;i<n;i++){
//     if(j>n-2) break; 
//     if(a[i]==c[j]) j++;
//     else{
//       cnt++;
//       ans.pb(a[i]);
//     }
//     if(cnt>2) break;
//   }
//   if(b.find(ans[0])!=b.end()) {
//     cout<<ans[0]<<'\n';
//     cout<<ans[1]<<'\n';
//   }
//   else{
//    cout<<ans[1]<<'\n';
//    cout<<ans[0]<<'\n';
//   }
  


// return 0;
// }
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define pb push_back
#define all(v) v.begin(),v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(),v.end())

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vll a(n), b(n-1), c(n-2);
    
    f(i, 0, n) cin >> a[i];
    f(i, 0, n-1) cin >> b[i];
    f(i, 0, n-2) cin >> c[i];
    
    sot(a);
    sot(b);
    sot(c);
    
    ll mismatch = 0;
    f(i, 0, n-1) {
        if (a[i] != b[i]) {
            mismatch= a[i];
            break;
        }
    }
    if (mismatch == 0) mismatch = a[n-1];
    
    ll secmis = 0;
    f(i, 0, n-2) {
        if (b[i] != c[i]) {
            secmis = b[i];
            break;
        }
    }
    if (secmis == 0) secmis = b[n-2];
    
    cout << mismatch<< '\n';
    cout << secmis << '\n';

    return 0;
}
