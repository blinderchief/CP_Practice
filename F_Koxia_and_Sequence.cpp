/**
 *    writer:blinderchief         
**/


#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  long long n, x, y;
  cin >> n >> x >> y;
  if (n % 2 == 0) {
    cout << 0 << '\n';
    return 0;
  }
  int ans = 0;
  for (int mask = 0; mask <= y; mask++) {
    if ((y & mask) == mask) {
      for (int bit = 0; bit < 20; bit++) {
        if (mask & (1 << bit)) {
          long long num = n * mask - (1 << bit);
          long long goal = x - (1 << bit);
          if (goal >= 0 && (num & goal) == goal) {
            ans ^= (1 << bit);
          }
        }
      }
    }
  }
  cout << ans << '\n';
  return 0;
}
