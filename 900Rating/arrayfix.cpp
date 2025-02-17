// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define f(i, n) for (int i = 0; i < n; i++)
// #define sot(v) sort(v.begin(), v.end())

// signed main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//        vector<int> v(n);
//        f(i,n){
//         cin>>v[i];
//        }
//     vector<int> chek; 
//     f(i,n){
//         if(v[i]<10){
//             chek.push_back(v[i]);
//         }
//         else{
//             int  a = v[i]/10;
//             int b =v[i]%10;
//             chek.push_back(a);
//             chek.push_back(b);
//         }
//     }
//  if(is_sorted(chek.begin(),chek.end())) {
//     cout<<"YES"<<'\n';
//  }
//  else{
//     cout<<"NO"<<'\n';
//  }
//     }

//     return 0;
// }

// // #include <bits/stdc++.h>
// using namespace std;

// #define f(i, n) for (int i = 0; i < n; i++)

// bool canBeSorted(vector<int>& v) {
//     vector<int> chek;
//     for (int num : v) {
//         if (num < 10) {
//             chek.push_back(num);
//         } else {
//             string s = to_string(num);
//             for (char c : s) {
//                 chek.push_back(c - '0');
//             }
//         }
//     }
//     return is_sorted(chek.begin(), chek.end());
// }

// signed main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> v(n);
//         f(i, n) {
//             cin >> v[i];
//         }
//         cout << (canBeSorted(v) ? "YES" : "NO") << '\n';
//     }

//     return 0;
// }
#include "bits/stdc++.h"

using namespace std;

#define ll long long
const int MAXN = 100;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t; cin >> t;
  while (t--) {

    int n; cin >> n;

    int last = 0;
    int bad = 0;

    for (int it = 0; it < n; it++) {
      int x; cin >> x;

      if (x >= 10 && (x / 10) <= (x % 10) && (x / 10) >= last) {
        last = x % 10;
        continue;
      }

      if (x >= last) {
        last = x;
        continue;
      }

      bad = 1;

    }

    if (!bad) {
      cout << "YES\n";
    }
    else {
      cout << "NO\n";
    }


  }
  
}