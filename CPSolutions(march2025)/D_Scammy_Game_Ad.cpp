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
// #define debug(...) 42
// #endif
// */
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
//         int n;cin>>n;
//         vector<tuple<char,int,char,int>>v(n);
//         f(i,0,n){
//           int a, b;
//           char c,d;
//           cin>>c>>a>>d>>b;
//           v.push_back(make_tuple(c,a,d,b));
//         }
//         ll l=1,r=1;
       
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
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<tuple<char,int,char,int>> v;
        v.reserve(n);
        for(int i = 0; i < n; i++){
            char c, d; int a, b;
            cin >> c >> a >> d >> b;
            v.push_back(make_tuple(c,a,d,b));
        }
        ll A = 0, B = 1, C = 0;
        for(int i = n-1; i >= 0; i--){
            char opL = get<0>(v[i]);
            int aL = get<1>(v[i]);
            char opR = get<2>(v[i]);
            int aR = get<3>(v[i]);
            ll a, b, g;
            if(opL=='+' && opR=='+'){
                a = 1;
                b = 0;
                g = aL+aR;
            } else if(opL=='+' && opR=='x'){
                a = aR;
                b = 1 - aR;
                g = aL;
            } else if(opL=='x' && opR=='+'){
                a = 1;
                b = aL - 1;
                g = aR;
            } else{
                a = aR;
                b = aL - aR;
                g = 0;
            }
            ll Axt = A, Bxt = B, Cxt = C;
            ll fina, finb, finc;
            if(Axt > 0){
                fina = Axt * (1 + b) + Bxt * b;
                finb = Axt * (a - 1) + Bxt * a;
                finc = (Axt + Bxt) * g + Cxt;
            } else{
                fina = Axt + Bxt * b;
                finb = Bxt * a;
                finc = Bxt * g + Cxt;
            }
            A = fina; B = finb; C = finc;
        }
        ll ans = A * 1 + B * 2 + C;
        cout << ans << "\n";
    }
    return 0;
}

