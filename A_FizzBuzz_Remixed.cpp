#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int cnt = 0;
        for (int r = 0; r <= 2; ++r) {
            if (n >= r) {
                cnt += (n - r) / 15 + 1;
            }
        }
        cout << cnt << '\n';
    }
    
    return 0;
}