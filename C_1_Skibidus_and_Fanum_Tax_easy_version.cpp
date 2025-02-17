// /**
//  * writer: blinderchief
//  **/
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long int
// #define f(i, a, n) for (int i = a; i < n; i++)
// #define vi vector<int>
// #define pb push_back
// #define po pop_back
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
    
//     int t;
//     cin >> t;
    
//     while (t--) {
//         int n, m;
//         cin >> n >> m;
        
//         vi v(n);
//         f(i, 0, n) cin >> v[i];

//         int sto;
//         cin >> sto;

//         if (is_sorted(all(v), greater<int>()) || is_sorted(all(v))) {
//             yes;
//         } else {
//             auto it = max_element(all(v)); 

//             if (*it <= sto) {
//              bool temp = true;
//              bool see =false;
//                 for(int i=0;i<n;i++){
//                     if(temp && i<n-1&& v[i]==v[i+1]-1){
//                        continue; 
//                     }
//                     else{
//                         temp = false;
//                         if(i<n-1 && v[i]==v[i+1]-1){
//                             see = true;
//                             break;
//                         }
//                     }
//                 }
//                 if(see){
//                     no
//                 }
//                 else yes
//             } else {
//                 no
//             }
//         }
//     }

//     auto end = chrono::high_resolution_clock::now();
//     auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
//     // cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';

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
        int n,m;
        cin>>n>>m;
        bool is_vaild=true;
        vi a(n+1),b(m+1);
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=1;i<=m;i++)cin>>b[i];
        a[1]=min(a[1],b[1]-a[1]);
        for(int i=2;i<=n;i++)
        {
            int k=min(a[i],b[1]-a[i]);
            int h=max(a[i],b[1]-a[i]);
            if(k>=a[i-1])a[i]=k;
            else if(h>=a[i-1])a[i]=h;
            else
            {
                cout<<"NO"<<'\n';
                is_vaild=false;
                break;
            }
        }
        if(is_vaild)cout<<"YES"<<'\n';
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}