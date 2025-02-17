#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a = 10;
  int b = 9;
  int c = 14;
  int d = 15;
  bool c1 = false;
  bool c2 = false;
  bool c3 = false;

  for (int i = 0; i <5; i++)
  {
    cout << i + 1 << " ";
    for (int j = 0; j < i; j++)
    {
      if (!c1)
      {
        cout << b << " ";
        b--;
        c1 = true;
      }
      else
      {
        if (j < 2)
        {
          cout << a << " ";
          a++;
        }
        if (i > 2)
        {
          c2 = true;
        }
      }
      if (c2)
      {
        if (j < 2)
        {
          cout << c << " ";
          c--;
        }
        if (i > 3)
        {
          c3 = true;
        }
      }
      if (c3)
      {
        if (j == 3)
        {
          cout << d << " ";
          d++;
        }
      }

      if (j == i - 1)
      {
        c1 = false;
        c2 = false;
        c3 = false;
      }
    }
    cout << '\n';
  }
  return 0;
}
