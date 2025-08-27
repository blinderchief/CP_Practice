// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   string s;
//   cin >> s;
//   sort(s.begin(), s.end());
//   string ans = "";
//   int p1 = 0, p2 = 0;
//   while (p2 < s.size() && s[p1] == s[p2])
//   {
//     p2++;
//   }
//   ans += s[p1];
//   p1++;
//   while (p1 < s.size())
//   {
//     if (s[p1] == ans[p1 - 1])
//     {
//       ans += s[p2];
//       p2++;
//     }
//     else
//     {
//       ans += s[p1];
//     }
//     p1++;
//     if (p1 == p2)
//     {
//       while (p2 < s.size() && s[p1] == s[p2])
//       {
//         p2++;
//       }
//       if (p2 == s.size())
//       {
//         if (p1 == s.size() - 1)
//         {
//           cout << ans << '\n';
//           return 0;
//         }
//         else
//         {
//           ans = "";
//           break;
//         }
//       }
//     }
//   }

//   p1 = p2 = s.size() - 1;

//   while(p2>=0&&s[p1]==s[p2]) p2--;
//   ans+=s[p1];
//   p1--;
//   while (p1 >= 0)
//   {
//     if (s[p1] == ans[p1 + 1])
//     {
//       ans += s[p2];
//       p2--;
//     }
//     else
//     {
//       ans += s[p1];
//     }
//     p1--;
//     if (p1 == p2)
//     {
//       while (p2 >= 0 && s[p1] == s[p2])
//       {
//         p2--;
//       }
//       if (p2 == -1)
//       {
//         if (p1 == 0)
//         {
//           cout << ans << '\n';
//           return 0;
//         }
//         else
//         {
//           cout<<"-1\n";
//           break;
//         }
//       }
//     }
//   }

//   return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();

    vector<int> cnt(26, 0);
    for (char c : s) cnt[c - 'A']++;

    // Check impossible case
    int maxFreq = *max_element(cnt.begin(), cnt.end());
    if (maxFreq > (n + 1) / 2) {
        cout << "-1\n";
        return 0;
    }

    string ans = "";
    int last = -1; // last char index used

    for (int i = 0; i < n; i++) {
        // Try from 'A' to 'Z'
        bool found = false;
        for (int j = 0; j < 26; j++) {
            if (cnt[j] == 0) continue;
            if (j == last) continue; // same as last

            // Temporarily remove this char
            cnt[j]--;
            // Check if remaining can be arranged
            int maxFreqLeft = *max_element(cnt.begin(), cnt.end());
            int rem = n - i - 1;
            if (maxFreqLeft <= (rem + 1) / 2) {
                // Valid
                ans += ('A' + j);
                last = j;
                found = true;
                break;
            } else {
                // Undo
                cnt[j]++;
            }
        }
        if (!found) {
            cout << "-1\n";
            return 0;
        }
    }

    cout << ans << '\n';
    return 0;
}