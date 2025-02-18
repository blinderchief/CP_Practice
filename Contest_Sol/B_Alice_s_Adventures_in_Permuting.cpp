/**
 * writer: blinderchief
**/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i, a, n) for (int i = a; i < n; i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define po pop_back
#define all(v) v.begin(), v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        ll n, b, c;
        cin >> n >> b >> c;

        if (b != 0) {
            cout << n - max((ll)((n-c+b-1)/b),0ll) << '\n';
        } else {
            if (c == n - 1 || c == n - 2) {
                cout << n - 1 << '\n';
            } else if (c < n - 2) {
                cout << "-1\n";
            } else {
                cout << n << '\n';
            }
        }
    }
    return 0;
}
