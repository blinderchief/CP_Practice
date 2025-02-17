#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define f(i, a, n) for (int i = a; i < n; i++)
#define vll vector<ll>
#define pb push_back
#define po pop_back
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(), v.end())

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int A, B, n;
    cin >> A >> B >> n;

    if (A == 0 && B == 0) {
        cout << 5 << '\n'; 
        return 0;
    }

    if (A == 0 && B != 0) {
        cout << "No solution" << '\n';
        return 0;
    }

    for (int X = -1000; X <= 1000; ++X) {
        long long powXn = 1;
        for (int i = 0; i < n; ++i) {
            powXn *= X;
        }

        if (A * powXn == B) {
            cout << X << '\n';
            return 0;
        }
    }

    cout << "No solution" << '\n';
    return 0;
}
