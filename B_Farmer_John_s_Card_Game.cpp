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
//      int n, m; cin >> n >> m;
//     vector<vector<int>> a(n, vector<int>(m));
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < m; j++){
//             cin >> a[i][j];
//         }
//         sort(a[i].begin(), a[i].end());
//     }
//     vector <int> ord(n, -1);
//     iota(all(ord),0);
//     sort(all(ord),[&](int x, int y){
//         return a[x][0] < a[y][0]; 
//     });
//     bool ok = true;
//     int p = 0;
//     for (auto i : ord){
//         for (int j = 0; j < m; j++){
//             ok &= a[i][j] == (p + j * n);
//         }
//         p++;
//     }
//     if (!ok){
//         cout << -1 << "\n";
//         continue;
//     }
//     for (auto i : ord){
//         cout << (i + 1) << " ";
//     }
//     cout << "\n";
//     }
//     auto end = chrono::high_resolution_clock::now();
//     auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
//    //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
//     return 0;
// }


/**
 * writer:blinderchief
 **/
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
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n,m;cin>>n>>m;
       vector<vector<int>> v(n,vector<int>(m));
       f(i,0,n){
        f(j,0,m){
            cin>>v[i][j];
        }
       }
       
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}