#include <bits/stdc++.h>
using namespace std;

#define pi pair
typedef long long ll;
#define int long long

bool check(int x, int n, vector<int>& a, vector<int>& b) {
    // Check if there exists a way such that each of the first (n - x) elements of a 
    // is less than the corresponding (n - x) elements of b from the end.
    for (int i = 0; i < n - x; i++) {
        if (a[i] >= b[i + x]) {
            return false;
        }
    }
    return true;
}

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    // Sort both arrays to enable comparison.
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int ans = n;
    int lo = 0, hi = n - 1, mid;

    // Use binary search to find the minimum x.
    while (lo <= hi) {
        mid = (lo + hi) / 2;
        if (check(mid, n, a, b)) {
            ans = mid;  // Try to find a smaller x.
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }

    cout << ans << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
