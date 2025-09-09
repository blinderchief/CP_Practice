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


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Compute initial alternating sum S0
    ll S0 = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) S0 += a[i];
        else S0 -= a[i];
    }

    // Arrays for case 2: even i, odd j -> gain = (j + 2*a[j]) - (i + 2*a[i])
    vector<ll> A(n, LLONG_MIN);
    vector<ll> B(n, LLONG_MIN);

    // Arrays for case 3: odd i, even j -> gain = (j - 2*a[j]) - (i - 2*a[i])
    vector<ll> C(n, LLONG_MIN);
    vector<ll> D(n, LLONG_MIN);

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            A[i] = i + 2LL * a[i];
            D[i] = i - 2LL * a[i];
        } else {
            B[i] = i + 2LL * a[i];
            C[i] = i - 2LL * a[i];
        }
    }

    // Suffix max for B (odd indices) and D (even indices)
    vector<ll> sufB(n + 1, LLONG_MIN);
    vector<ll> sufD(n + 1, LLONG_MIN);

    for (int i = n - 1; i >= 0; i--) {
        sufB[i] = sufB[i + 1];
        if (i % 2 == 1 && B[i] != LLONG_MIN) {
            if (sufB[i] == LLONG_MIN) sufB[i] = B[i];
            else sufB[i] = max(sufB[i], B[i]);
        }

        sufD[i] = sufD[i + 1];
        if (i % 2 == 0 && D[i] != LLONG_MIN) {
            if (sufD[i] == LLONG_MIN) sufD[i] = D[i];
            else sufD[i] = max(sufD[i], D[i]);
        }
    }

    ll best_gain = 0;

    // Case 2: even i, odd j > i
    for (int i = 0; i < n - 1; i++) {
        if (i % 2 == 0 && A[i] != LLONG_MIN) {
            if (sufB[i + 1] != LLONG_MIN) {
                ll gain = sufB[i + 1] - A[i];
                best_gain = max(best_gain, gain);
            }
        }
    }

    // Case 3: odd i, even j > i
    for (int i = 0; i < n - 1; i++) {
        if (i % 2 == 1 && C[i] != LLONG_MIN) {
            if (sufD[i + 1] != LLONG_MIN) {
                ll gain = sufD[i + 1] - C[i];
                best_gain = max(best_gain, gain);
            }
        }
    }

    // Case 1: even i, even j > i -> gain = j - i
    int first_even = -1, last_even = -1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            if (first_even == -1) first_even = i;
            last_even = i;
        }
    }
    if (first_even != -1 && last_even != -1 && first_even != last_even) {
        best_gain = max(best_gain, (ll)(last_even - first_even));
    }

    // Case 4: odd i, odd j > i -> gain = j - i
    int first_odd = -1, last_odd = -1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 1) {
            if (first_odd == -1) first_odd = i;
            last_odd = i;
        }
    }
    if (first_odd != -1 && last_odd != -1 && first_odd != last_odd) {
        best_gain = max(best_gain, (ll)(last_odd - first_odd));
    }

    ll ans = S0 + best_gain;
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}