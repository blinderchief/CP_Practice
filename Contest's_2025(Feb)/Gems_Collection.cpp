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
        int n; cin >> n;
        vector<int> vx(n), vy(n), vz(n);
        f(i,0,n) {
            cin >> vx[i] >> vy[i] >> vz[i];
        }
        nth_element(vx.begin(), vx.begin() + n/2, vx.end());
        nth_element(vy.begin(), vy.begin() + n/2, vy.end());
        nth_element(vz.begin(), vz.begin() + n/2, vz.end());
        int med_x = vx[n/2];
        int med_y = vy[n/2];
        int med_z = vz[n/2];
        long long sum = 0;
        f(i,0,n) {
            sum += abs(vx[i] - med_x) + abs(vy[i] - med_y) + abs(vz[i] - med_z);
        }
 cout<<2*sum<<'\n';
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}
