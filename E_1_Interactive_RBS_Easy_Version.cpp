#include <bits/stdc++.h>
using namespace std;

int ask(vector<int> &vec) {
    cout << "? " << vec.size() << ' ';
    for (int x : vec) cout << x << ' ';
    cout << endl;
    int res;
    cin >> res;
    return res;
}

void solve() {
    int n;
    cin >> n;

    vector<int> all(n);
    iota(all.begin(), all.end(), 1);

    int op = -1, cl = -1;
    if (ask(all)) {
        int l = 1, r = n;
        while (r - l > 1) {
            int m = (l + r) / 2;
            vector<int> tmp(m);
            iota(tmp.begin(), tmp.end(), 1);
            if (ask(tmp)) r = m;
            else l = m;
        }
        op = r - 1;
        cl = r;
    } else {
        cl = 1;
        op = n;
    }

    string s(n, '#');
    for (int i = 0; i + 1 < n; i += 2) {
        vector<int> q = {i + 1, cl, i + 2, cl, op, cl};
        int f = ask(q);
        if (f == 6) s[i] = '(', s[i + 1] = '(';
        if (f == 2) s[i] = '(', s[i + 1] = ')';
        if (f == 3) s[i] = ')', s[i + 1] = '(';
        if (f == 1) s[i] = ')', s[i + 1] = ')';
    }

    if (s.back() == '#') {
        vector<int> q = {op, n};
        s.back() = ask(q) ? ')' : '(';
    }

    cout << "! " << s << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}