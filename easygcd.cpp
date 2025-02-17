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
    
    ll n, m;
    cin >> n >> m;
    
    vll a(n), b(m);
    
    f(i, 0, n) cin >> a[i];
    f(i, 0, m) cin >> b[i]; 

    ll chk = 0;
    sot(a);
    f(i, 1, n) {
        chk = __gcd(chk, a[i]-a[0]);
    }
    
    f(i, 0, m) {
        cout << __gcd(chk,b[i] +a[0]) << " ";
    }

    return 0;
}
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
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
    
//     ll n, m;
//     cin >> n >> m;
    
//     vll a(n), b(m);
    
//     f(i, 0, n) cin >> a[i];
//     f(i, 0, m) cin >> b[i]; 

//     ll chk = 0;
//     sot(a);
//     f(i, 1, n) {
//         chk = __gcd(chk, a[i]-a[0]);
//     }
    
//     f(i, 0, m) {
//         cout << __gcd(chk,b[i] +a[0]) << " ";
//     }

//     return 0;
// }
