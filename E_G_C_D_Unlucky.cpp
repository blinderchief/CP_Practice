#include <bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
// remember if 
using u128 = unsigned __int128;
using i128 = __int128;

void solve() {
    int n;
    std::cin >> n;
    
    std::vector<int> p(n), s(n);
    for (int i = 0; i < n; i++) {
        std::cin >> p[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> s[i];
    }
    
    std::vector<i64> a(n);
    for (int i = 0; i < n; i++) {
        a[i] = std::lcm<i64>(p[i], s[i]);
    }
    
    i64 x = 0;
    for (int i = 0; i < n; i++) {
        x = std::gcd(x, a[i]);
        if (x != p[i]) {
            std::cout << "NO\n";
            return;
        }
    }
    x = 0;
    for (int i = n - 1; i >= 0; i--) {
        x = std::gcd(x, a[i]);
        if (x != s[i]) {
            std::cout << "NO\n";
            return;
        }
    }
    std::cout << "YES\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
