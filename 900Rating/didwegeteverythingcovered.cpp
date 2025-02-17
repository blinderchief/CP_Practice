#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007

string alpha = "abcdefghijklmnopqrstuvwxyz";

void solve() {
    int n, k, m;
    cin >> n >> k >> m;
    string s;
    cin >> s;
    set<char> d;
    string ans = "";
    for (int i = 0; i < m; i++) {
        d.insert(s[i]);
        if (d.size() == k) {
            d.clear();
            ans += s[i];
        }
    }
    if (ans.size() >= n) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
        for (char i : alpha) {
            if (d.find(i) == d.end()) {
                while (ans.size() < n) {
                    ans += i;
                }
                break;
            }
        }
        cout << ans << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
