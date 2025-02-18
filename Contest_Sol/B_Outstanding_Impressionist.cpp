/**
 * writer: blinderchief
 **/
#include<bits/stdc++.h>
using namespace std;
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
#define ll long long int 
#define f(i, a, n) for (int i = a; i < n; i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define po pop_back
#define me(a, x) memset(a, x, sizeof(a))
#define all(v) v.begin(), v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
const int MAX_V = 400005 + 5;
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
int main() {
  auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> v(n);
        f(i, 0, n) {
            cin >> v[i].first >> v[i].second;
        }

        map<int, int> freq; 
        vector<int> chek;          

        for (int i = 0; i < n; i++) {
            if (v[i].first == v[i].second) {
                freq[v[i].first]++;
            }
        }

        for (auto it = freq.begin(); it != freq.end(); ++it) {
            chek.pb(it->first);
        }
        sot(chek); 
        string res(n, '0');
        for (int i = 0; i < n; i++) {
            if (v[i].first < v[i].second) {
                int lower = lower_bound(all(chek), v[i].first) - chek.begin();
                int upper = upper_bound(all(chek), v[i].second) - chek.begin();
                int see = upper - lower;
                int ran = v[i].second - v[i].first + 1;
                if (see >= ran) {
                    res[i] = '0'; 
                } else {
                    res[i] = '1';
                }
            } else {
                if (freq[v[i].first] <= 1) {
                    res[i] = '1'; 
                } else {
                    res[i] = '0'; 
                }
            }
        }
        cout << res << "\n";
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count()*1e-9<< " seconds.\n"; 

    return 0;
}
