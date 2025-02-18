// /**
//  * writer:blinderchief 
// **/
// #include<bits/stdc++.h>
// using namespace std;
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
// #define ll long long int 
// #define f(i,a,n) for(int i =a;i<n;i++)
// #define vll vector<ll>
// #define vi vector<int>
// #define pb push_back
// #define po pop_back
// #define me(a, x) memset(a, x, sizeof(a))
// #define all(v) v.begin(),v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(all(v))
// int main() {
// auto begin = chrono::high_resolution_clock::now();
// ios_base::sync_with_stdio(false);
// cin.tie(0);

//      ll n,m; cin>>n>>m;
//     ll amin,amax,bmin;
//     cin>>amin;
//     amax=amin;
//     f(i,1,n){
//         ll x; cin>>x;
//         if(x<amin) amin=x;
//         if(x>amax) amax=x;
//     }
//     cin>>bmin;
//     f(i,1,m){
//         ll x; cin>>x;
//         if(x<bmin) bmin=x;
//     }
//     ll low = max(amax,2*amin);
//     if(low>=bmin) cout<<-1;
//     else cout<<low;

// auto end = chrono::high_resolution_clock::now();
// auto elapsed = chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
// // cout << "Time taken:" << elapsed.count()*1e-9 << "seconds" << endl;
//  cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
// return 0;
// }

/**
 * writer:blinderchief
 **/
#include<bits/stdc++.h>
using namespace std;
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
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
int main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
   //cerr << "Time taken: " << (float)clock() / CLOCKS_PER_SEC << " secs" << '\n';
    return 0;
}