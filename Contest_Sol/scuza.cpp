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
// int t; cin>>t;
// while(t--){
//   int n,q; cin>>n>>q;
//   vll h(n),ques(q),pref(n);
//   f(i,0,n) cin>>h[i];
//   f(i,0,q) cin>>ques[i];
//   sot(h);
//   pref[0] = h[0];
//   f(i,1,n){
//     pref[i] = pref[i-1]+h[i];
//   }
//   f(i,0,q){
//     auto it = lower_bound(all(h),ques[i]);
//     if(*it>ques[i]) {
//         cout<<pref[it-1-h.begin()]<<" ";
//     }
//     else{
//       cout<<pref[it-h.begin()]<<" ";
//     }
//   }
//   cout<<'\n';


// }
// return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define pb push_back
#define po pop_back
#define all(v) v.begin(), v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(), v.end())

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin >> t;
    while(t--) {
        int n, q; cin >> n >> q;
        vll h(n), b, ques(q), pref;
        b.pb(0);  
        ll sum =0;
        pref.pb(0);
        f(i, 0, n) {
            cin >> h[i]; 
            if (b.back() < h[i]) {
                b.pb(h[i]);
                pref.pb(sum);
            }
            sum+=h[i];
        }

        f(i, 0, q) cin >> ques[i]; 
       pref.pb(sum);
        f(i, 0, q) {
            auto it = upper_bound(all(b), ques[i]);
            cout << pref[it - b.begin()] << " ";  
        }
        cout << '\n';
    }
    return 0;
}
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
  vector<int> v ={1,1,12,2,2,3,4};
   vector<int> ::iterator it = unique(all(v));
   cout<<*it<<"";

return 0;
}