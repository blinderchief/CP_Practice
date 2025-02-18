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
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
int main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
     ll n,m; cin>>n>>m;
     cin >> n >> m;
    string s; cin >> s;
    vll sumr(n + 5), sumc(m + 5);
    vector<vector<ll>> a(n + 5, vector<ll>(m + 5));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            sumr[i] += a[i][j];
            sumc[j] += a[i][j];
        }
    }
    int x = 1, y = 1;
    for (auto ch : s) {
        if (ch == 'D'){
            a[x][y]=-sumr[x];
            sumc[y]+= a[x][y];
            x++;
        }
        else {
            a[x][y] =-sumc[y];
            sumr[x] += a[x][y];
            y++;
        }
    }
    a[n][m] = -sumr[n];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << a[i][j] << " \n"[j == m];
        }
    }
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}