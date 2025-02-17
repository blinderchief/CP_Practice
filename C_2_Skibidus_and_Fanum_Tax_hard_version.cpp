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
        int n,m; cin>>n>>m;
        vi a(n),b(m);
        f(i,0,n)cin>>a[i];
        f(i,0,m) cin>>b[i];
        if (is_sorted(all(a), greater<int>()) || is_sorted(all(a))) {
            yes;
        } else {
            auto it = max_element(all(a)); 
            auto it1= max_element(all(b));
            if (*it < *it1) {
                if ((it - a.begin()) == n - 1) { 
                    yes
                } else {
                    no
                }
            } else {
                no
            }
        }
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}
