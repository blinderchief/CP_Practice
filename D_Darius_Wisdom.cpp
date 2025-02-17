#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        vector<pair<int, int>> moves;

        bool sorted = false;
        while (!sorted) {
            sorted = true;
            for (int i = 0; i < n - 1; ++i) {
                if (a[i] > a[i + 1]) {
                    sorted = false;
                    moves.emplace_back(i + 1, i + 2); 
                    a[i]--;
                    a[i + 1]++;
                }
            }
        }

        // Output the result
        cout << moves.size() << "\n";
        for (const auto &move : moves) {
            cout << move.first << " " << move.second << "\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
