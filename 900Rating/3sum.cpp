#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

bool endsWithThree(int x) {
    return x % 10 == 3;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> digits;
        
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            digits.push_back(x % 10);
        }

        vector<int> filter;
        vector<int> cnt(10, 0);
        
        for (int d : digits) {
            if (cnt[d] < 10) {
                filter.push_back(d);
                cnt[d]++;
            }
        }

        bool found = false;
        int size = filter.size();
        
        for (int i = 0; i < size - 2 && !found; ++i) {
            for (int j = i + 1; j < size - 1 && !found; ++j) {
                for (int k = j + 1; k < size && !found; ++k) {
                    if (endsWithThree(filter[i] + filter[j] + filter[k])) {
                        found = true;
                    }
                }
            }
        }

        if (found) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
