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
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        stack<int> val,ind;
    
        ind.push(0);
        val.push(a[0]);

        int ans = 0;

        for (int i = 1; i < n; i++) {
            int temp = a[i];

            while(!val.empty()) {
                int top = val.top();

                if (top < temp) {
                    val.pop();
                    ind.pop();
                } else {
                    break;
                }
            }

            if (!val.empty()) {
                int top = ind.top();
                int diff = i - top - 1;
                ans = max(ans, diff);
            } else {
                ans = i;
            }

            val.push(temp);
            ind.push(i);
        }

        cout << ans << '\n';
    }

    return 0;
}
