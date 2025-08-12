#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define sot(v) sort((v).begin(), (v).end())
#define yes cout << "YES\n"
#define no cout << "NO\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vll a(n), b(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            a[i]%=k;
            a[i] = min(a[i],k-a[i]);     }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            b[i]%=k;
            b[i] = min(b[i],k-b[i]); 
        }

        sot(a);
        sot(b);

        bool ok = true;
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                ok = false;
                break;
            }
        }

        if (ok) yes;
        else no;
    }

    return 0;
}
