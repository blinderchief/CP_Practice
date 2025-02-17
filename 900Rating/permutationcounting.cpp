// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i,n) for(int i =0;i<n;i++)
// #define sot(v) sort(v.begin(),v.end())
//  ll n,k;
// vector<ll> v(n);
// bool check(ll mid){
// ll cnt= 0;
// f(i,n){
//   cnt+=max(0ll,mid-v[i]);
//   if(cnt>k) return false;
// }
// return cnt<=k;
// }
// signed main() {
// ios_base::sync_with_stdio(false);
// cin.tie(0);
// int t; cin>>t;
// while(t--){
//   cin>>n>>k;
//  v.resize(n);
//   f(i,n){
//     cin>>v[i];
//   }
//   ll ans =0;
//   ll lo = 0 , hi = 1e18;
//   while(lo<=hi){
//     ll mid = lo+(lo-hi)/2;
//     if(check(mid)){
//       ans = max(ans,mid);
//       lo = mid+1;
//     }
//     else{
//       hi = mid-1;
//     }
//   }
//   ll chkans= ans*n -(n-1);
//   ll total= 0;
//   f(i,n){
//     total += max(0ll,ans-v[i]);
//   }
//   ll left = k-total;
//   ll cnt=0;
//   bool chek =true;
//   f(i,n){
//  if(v[i]>ans) chek = false;
//  if(!chek){
// cnt++;
// chek = true;
//  }
//   }
//   cout<<chkans+cnt+left<<'\n';

// }
// return 0;
// }


#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,n) for(int i = 0; i < n; i++)
#define sot(v) sort(v.begin(),v.end())

ll n, k;
vector<ll> v;

bool check(ll mid) {
    ll cnt = 0;
    f(i, n) {
        cnt += max(0ll, mid - v[i]);
        if (cnt > k) return false;
    }
    return cnt <= k;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        cin >> n >> k;
        v.resize(n);
        
        f(i, n) {
            cin >> v[i];
        }
        
        ll ans = 0;
        ll lo = 0, hi = 1e16;
        while (lo <= hi) {
            ll mid = lo + (hi - lo) / 2;
            if (check(mid)) {
                ans = max(ans, mid);
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
         ll chkans= ans*n -(n-1);
        ll total = 0;
        f(i, n) {
            total += max(0ll, ans - v[i]);
        }
        ll left = k - total;
        
        ll cnt=0;
  bool chek =true;
  f(i,n){
  if(v[i]>ans) chek = false;
     if(!chek){
    cnt++;
    chek = true;
 }
  }
  cout<<chkans+cnt+left<<'\n';

    }
    return 0;
}

