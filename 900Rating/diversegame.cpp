#include <iostream>
#include <string>
using namespace std;

int main() {
    int q;
    cin >> q;

    while (q--) {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;

        if (s == t) {
            cout << "YES" << endl;
            continue;
        }

        // Count the number of 1s and 0s in s
        int count0 = 0, count1 = 0;
        for (char c : s) {
            if (c == '0') count0++;
            else count1++;
        }

        // If there are both 0s and 1s, transformation is possible
        if (count0 > 0 && count1 > 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
