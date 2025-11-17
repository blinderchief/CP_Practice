#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  for (int tt = 0; tt < t; ++tt) {
    int n;
    long long z;
    cin >> n >> z;
    vector<long long> x(n + 1);
    for (int i = 1; i <= n; i++) {
      cin >> x[i];
    }
    vector<vector<long long>> st;
    int logn = 0;
    if (n > 2) {
      logn = 31 - __builtin_clz(n - 2) + 1;
      st = vector<vector<long long>>(logn, vector<long long>(n + 1));
      for (int i = 1; i <= n - 2; i++) {
        st[0][i] = x[i + 2] - x[i];
      }
      for (int k = 1; k < logn; k++) {
        for (int i = 1; i + (1 << k) - 1 <= n - 2; i++) {
          st[k][i] = min(st[k - 1][i], st[k - 1][i + (1 << (k - 1))]);
        }
      }
    }
    int q;
    cin >> q;
    for (int qq = 0; qq < q; ++qq) {
      int l, r;
      cin >> l >> r;
      int m = r - l + 1;
      if (m <= 2) {
        cout << m << endl;
        continue;
      }
      if (x[r] - x[l] <= z) {
        cout << 2 << endl;
        continue;
      }
      // check min x[i+2] - x[i] for i=l to r-2
      int left = l;
      int right = r - 2;
      long long min_span = LLONG_MAX;
      if (right >= left) {
        int len = right - left + 1;
        int k = 31 - __builtin_clz(len);
        min_span = min(st[k][left], st[k][right - (1 << k) + 1]);
      }
      if (min_span > z) {
        cout << m << endl;
        continue;
      }
      // else, run the jump simulation
      long long last1 = -2000000000000000000LL;
      long long last2 = last1;
      int count = 0;
      int current_pos = l - 1;
      // add first
      current_pos = l;
      count = 1;
      last2 = x[l];
      if (l < r) {
        current_pos = l + 1;
        count = 2;
        last1 = x[l];
        last2 = x[l + 1];
      }
      while (true) {
        int low = current_pos + 1;
        if (low > r) break;
        long long threshold = last1 + z;
        auto it = lower_bound(x.begin() + low, x.begin() + r + 1, threshold + 1);
        int j = it - x.begin();
        if (j > r) break;
        count++;
        last1 = last2;
        last2 = x[j];
        current_pos = j;
      }
      cout << count << endl;
    }
  }
  return 0;
}