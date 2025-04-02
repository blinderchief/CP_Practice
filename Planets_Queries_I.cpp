#include <bits/stdc++.h>
using namespace std;

const int LOG = 30; // log2(1e9) ≈ 30

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, q;
    cin >> n >> q;

    // Read teleporter destinations
    vector<int> t(n + 1); // 1-based indexing
    for (int i = 1; i <= n; ++i) {
        cin >> t[i];
    }

    // Binary lifting table: up[i][j] = destination after 2^j steps from i
    vector<vector<int>> up(n + 1, vector<int>(LOG, 0));
    for (int i = 1; i <= n; ++i) {
        up[i][0] = t[i]; // Base case: 2^0 = 1 step
    }

    // Precompute up[i][j] for j > 0
    for (int j = 1; j < LOG; ++j) {
        for (int i = 1; i <= n; ++i) {
            up[i][j] = up[up[i][j - 1]][j - 1];
        }
    }

    // Process queries
    while (q--) {
        int x, k;
        cin >> x >> k;

        // Compute the destination after k steps
        for (int j = 0; j < LOG; ++j) {
            if (k & (1 << j)) { // If the j-th bit of k is set
                x = up[x][j];
            }
        }

        cout << x << "\n";
    }

    return 0;
}