/**
 * writer:blinderchief
 **/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i, a, n) for (int i = a; i < n; i++)
#define vi vector<int>
#define all(v) v.begin(), v.end()

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vi v(n);
    f(i, 0, n) cin >> v[i];
    int i = n - 2;
    while (i >= 0 && v[i] >= v[i + 1]) {
        i--;
    }
    if (i == -1) {
        reverse(all(v));
    } else {
        int j = n - 1;
        while (v[j] <= v[i]) {
            j--;
        }
        swap(v[i], v[j]);
        reverse(v.begin() + i + 1, v.end());
    }

    cout << "[";
    for (int i = 0; i < n; i++) {
        cout << v[i];
        if (i != n - 1) cout << ", ";
    }
    cout << "]\n";

    return 0;
}
