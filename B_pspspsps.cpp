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
#define me(a, x) memset(a, x, sizeof(a))
#define all(v) v.begin(), v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vi check(n, INT_MAX); 
        int ckp = INT_MIN;
        for (int i = n - 1; i >= 0; --i) {
            if (s[i] == 'p') {
                ckp = i + 1; 
            }
            if (ckp != INT_MIN) {
                check[i] = min(check[i],ckp); 
            }
        }
        int cks = INT_MIN; 
        for (int i = 0; i < n; ++i) {
            if (s[i] == 's') {
                cks = i;
            }
            if (cks != INT_MIN) {
                check[i] = min(check[i], n - cks); 
            }
        }
        sot(check);
        bool flag = false;
        
        for (int i = 0; i < n; ++i) {
            if (check[i] < i + 1) {
                flag = true;
                break;
            }
        }

        if (!flag) {
            yes
        } else {
            no
        }
    }

    return 0;
}
