

#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
      cin >> v[i];
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
      for (int j = 0; j <= 99 && i + j <= n; j++)
      {
        int diff = abs(v[i] - v[i+j]);
        if (diff == j)
        {
          ans += j + 1;
        }
        else if (diff > j && (diff - j) % 2 == 0)
        {
          int mi1 = (i + i+j - diff) / 2;
          int mi2 = (i + i+j + diff) / 2;
          if ((i + i+j - diff) % 2 == 0 && mi1 >= 1 && mi1 <= n)
          {
            ans += 1;
          }
          if ((i + i+j + diff) % 2 == 0 && mi2 >= 1 && mi2 <= n)
          {
            ans += 1;
          }
        }
      }
      for (int j = 1; j <= 99 && i - j >= 1; j++)
      {
        int diff = abs(v[i] - v[i-j]);
        if (diff == j)
        {
          ans += j + 1;
        }
        else if (diff > j && (diff - j) % 2 == 0)
        {
          int m1 = (i + i-j - diff) / 2;
          int m2 = (i + i-j + diff) / 2;
          if ((i + i-j - diff) % 2 == 0 && m1 >= 1 && m1 <= n)
          {
            ans += 1;
          }
          if ((i + i-j + diff) % 2 == 0 && m2 >= 1 && m2 <= n)
          {
            ans += 1;
          }
        }
      }
    }
    cout << ans << '\n';
  }

  return 0;
}