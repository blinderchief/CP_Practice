// // /**
// //  * writer:blinderchief
// //  **/
// // #include<bits/stdc++.h>
// // using namespace std;
// // #define ll long long int
// // #define f(i,a,n) for(int i = a; i < n; i++)
// // #define vll vector<ll>
// // #define vi vector<int>
// // #define pb push_back
// // #define po pop_back
// // #define me(a, x) memset(a, x, sizeof(a))
// // #define all(v) v.begin(), v.end()
// // #define no cout << "NO" << '\n';
// // #define yes cout << "YES" << '\n';
// // #define sot(v) sort(all(v))
// // mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
// // int main() {
// //     auto begin = chrono::high_resolution_clock::now();
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(0);
// // int t; cin >> t;
// //  while (t--) {
// //    ll n,k;
// //     cin>>n>>k;
// //     vll fun(2*n+1);
// //     ll cnt = 0;
// //     for(ll j=0;j<n;j++){
// //         ll x;
// //         cin>>x;
// //         if(k-x<0 || k-x>n) continue;
// //         if(fun[k-x]){
// //             fun[k-x]--;
// //             cnt++;
// //         } else {
// //             fun[x]++;
// //         }
// //     }
// //     cout<<cnt<<'\n';
// //     }
// //     auto end = chrono::high_resolution_clock::now();
// //     auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
// //    //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
// //     return 0;
// // }

// /**
//  * writer:blinderchief
//  **/
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define f(i,a,n) for(int i = a; i < n; i++)
// #define vll vector<ll>
// #define vi vector<int>
// #define pb push_back
// #define po pop_back
// #define me(a, x) memset(a, x, sizeof(a))
// #define all(v) v.begin(), v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(all(v))
// #define INF (int)1e18
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
// int main() {
//     auto begin = chrono::high_resolution_clock::now();
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int t; cin >> t;
//     while (t--) {
//         int n,k;cin>>n>>k;
//         vi v(n);
//         map<int,int> mp; 
//         int sco =0;
//         f(i,0,n) cin>>v[i],mp[v[i]]++;
//         int cnt=0;
//         f(i,0,n){
//           if(cnt<=(n/2))
//           {
//             cnt++;
//          if(mp[v[i]]>0){
//         int cal = k- v[i];
//            if(cal>0 && mp[cal]>0 && mp[v[i]]>0){
//            int see= min(mp[v[i]],mp[cal]);
//             sco++;
//             if(v[i]==cal){
//               mp[v[i]]-=see;
//             }
//             else{
//             mp[v[i]]-=see;
//             mp[cal]-=see;
//             }
//            }
//            else{
//           mp[v[i]]--;
//           mp[cal]--;
//            }            
//           }
//           }
//         }
//         cout<<sco<<'\n';
//     }
//     auto end = chrono::high_resolution_clock::now();
//     auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
//    //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define po pop_back
#define me(a, x) memset(a, x, sizeof(a))
#define all(v) v.begin(), v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
#define INF (int)1e18
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; 
    cin >> t; 

    while (t--) {
        int n, k;
        cin >> n >> k; 
        vi v(n);
        map<int, int> mp; 
        f(i, 0, n) {
            cin >> v[i];
            mp[v[i]]++;
        }
        int sco = 0; 
        int cnt=0;
        for (int i = 0; i < n; i++) {
          if(cnt<=(n/2)){
            int curr = v[i];
            int comp =  k-v[i]; 
            if (mp[curr] > 0 && mp[comp] > 0) {
                if (curr == comp) {
                    int pairs = mp[curr] / 2;
                    sco += pairs;
                    mp[curr] -= pairs * 2;
                } else {
                    int pairs = min(mp[curr], mp[comp]);
                    sco += pairs;
                    mp[curr] -= pairs;
                    mp[comp] -= pairs;
                }
                cnt++;
            }
        }
        }

        cout << sco << '\n'; 
    }

    return 0;
}

