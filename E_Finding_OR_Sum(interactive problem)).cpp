#include <bits/stdc++.h>
 
using namespace std;
 
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt;
  cin >> tt;
  while (tt--) {
    vector<int> val(30, 0);
    for (int rot = 0; rot < 2; rot++) {
      int n = 0;
      for (int i = 0; i < 30; i++) {
        if (i % 2 == rot) {
          n += 1 << i;
        }
      }
      cout << n << endl;
      int got;
      cin >> got;
      for (int i = 0; i < 30; i++) {
        if (i % 2 == rot) {
          got -= 1 << (i + 1);
        }
      }
      for (int i = 0; i < 30; i++) {
        if (i % 2 != rot) {
          val[i] = (got >> i) & 3;
        }
      }
    }
    cout << "!" << endl;
    int m;
    cin >> m;
    int res = 0;
    for (int i = 0; i < 30; i++) {
      if (m & (1 << i)) {
        res += 1 << (i + 1);
      } else {
        res += val[i] << i;
      }
    }
    cout << res << endl;
  }
  return 0;
}

