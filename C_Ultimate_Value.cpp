// /**
//  * writer:blinderchief
//  **/
// #include<bits/stdc++.h>
// using namespace std;
// /*
// #define LOCAL
// #ifdef LOCAL
// #include "algo/debug.h"
// #else
// #define debug(...) "india"
// #endif
// */
// #define ll long long
// #define ull unsigned ll
// #define f(i,a,n) for(int i = a; i < n; i++)
// #define vll vector<ll>
// #define vi vector<int>
// #define pb emplace_back
// #define po pop_back
// #define me(a, x) memset(a, x, sizeof(a))
// #define all(v) (v).begin(), (v).end()
// #define rall(x) (x).rbegin(), (x).rend()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(all(v))
// #define sz(x) (int)(x).size()
// #define inf 0x3f3f3f3f
// const int mod = (int)(1e9 + 7);
// //Small observations-Think,read Problem again
// /*
// */
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
// signed main() {
//     auto begin = chrono::high_resolution_clock::now();
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int t; cin >> t;
//     while (t--) {
//     ll n;cin>>n;
//     vll v(n);f(i,0,n) cin>>v[i];
//     vll temp = v;
//     swap(temp[0],temp[n-1]);
//     ll see1=v[0],see2=temp[0];
//     for(int i =1;i<n;i++){
//         if(i&1){
//           see1-=v[i];
//         }else{
//           see1+=v[i];
//         }
//     }
//     for(int i =1;i<n;i++){
//         if(i&1){
//           see2-=temp[i];
//         }else{
//           see2+=temp[i];
//         }
//     }
//     ll cal1= see1;
//     ll cal2 =(n-1)+see2;
//     ll ok1=LLONG_MAX,idx1=-1,ok2=LLONG_MIN,idx2=-1;
//     for(int i =0;i<n;i++){
//       if(i&1){
//         if(v[i]>ok2){
//             ok2 = v[i];
//             idx2=i+1;
//         }
        
//       }
//       else{
//         if(v[i]<ok1){
//           ok1 = v[i];
//           idx1 = i+1;
//         }
//       }
//     }
//     ll excep=0;
//     ll cal3=0;
//     vll temp2=v;
//     // cout<<ok1<<" "<<ok2<<" ";
//       if(ok1<ok2){
//       swap(v[idx1-1],v[idx2-1]);
//       cal3 = v[0];
//         for(int i =1;i<n;i++){
//         if(i&1){
//           cal3-=v[i];
//         }else{
//           cal3+=v[i];
//         }
//     }
    
//     cal3 +=(abs(idx1-idx2));
  
//     }
//     else{
//         swap(temp2[0],temp2[n-2]);
//         excep =temp2[0];
//          for(int i =1;i<n;i++){
//         if(i&1){
//           excep-=temp2[i];
//         }else{
//           excep+=temp2[i];
//         }

//     }
//     excep+=(n-2);
    
//     // cout<<cal1<<" "<<cal2<<" "<<cal3<<" ";
//     }
//     if(excep==0 && cal3==0){
//               cout<<max({cal1,cal2})<<'\n';
//     }
//     else if(excep==0){
//               cout<<max({cal1,cal2,cal3})<<'\n';
//     }
//     else if(cal3==0){
//           cout<<max({cal1,cal2,excep})<<'\n';
//     }
//     else{
//               cout<<max({cal1,cal2,cal3,excep})<<'\n';
//     }
    


    
//   }

//     auto end = chrono::high_resolution_clock::now();
//     auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
//    //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
//     return 0;
// }

/**
 * writer:blinderchief
 **/
#include <bits/stdc++.h>
using namespace std;
/*
#define LOCAL
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) "india"
#endif
*/
#define ll long long
#define ull unsigned ll
#define f(i, a, n) for (int i = a; i < n; i++)
#define vll vector<ll>
#define vi vector<int>
#define pb emplace_back
#define po pop_back
#define me(a, x) memset(a, x, sizeof(a))
#define all(v) (v).begin(), (v).end()
#define rall(x) (x).rbegin(), (x).rend()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
#define sz(x) (int)(x).size()
#define inf 0x3f3f3f3f
const int mod = (int)(1e9 + 7);
// Small observations-Think,read Problem again
/*
 */
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
signed main()
{
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vll v(n);
        f(i, 0, n) cin >> v[i];
        ll mx = 0;
        ll mx2 = -1e18, mn = 1e18;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2)
            {
                ans -= v[i];
                mx = max(mx, 2 * v[i] + i - mn);
                mx2 = max(mx2, 2 * v[i] - i);
            }
            else
            {
                ans += v[i];
                mn = min(mn, 2 * v[i] + i);
                mx = max(mx, mx2 - 2 * v[i] + i);
            }
        }
        if (n % 2)
        {
            mx = max(mx, n - 1);
        }
        else
        {
            mx = max(mx, n - 2);
        }
        ans += mx;
        cout << ans << '\n';
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    // cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}