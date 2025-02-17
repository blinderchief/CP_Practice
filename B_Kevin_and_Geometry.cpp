
// /**
//  * writer: blinderchief
//  **/
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long int
// #define f(i, a, n) for (int i = a; i < n; i++)
// #define vll vector<ll>
// #define vi vector<int>
// #define pb push_back
// #define po pop_back
// #define me(a, x) memset(a, x, sizeof(a))
// #define all(v) v.begin(), v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(all(v))

// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
    
//     int t; 
//     cin >> t;
//     while (t--) {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//       cin >> a[i];
//     }
//     sot(a);
//     int x = 0;
//     int j = -1;
//     for (int i =0;i<n-1;i++) {
//       if (a[i] == a[i + 1]) {
//         x = a[i];
//         j = i;
//         break;
//       }
//     }
//     if (j == -1) {
//       cout << -1 << '\n';
//       continue;
//     }
//     a.erase(a.begin() + j);
//     a.erase(a.begin() + j);
//     bool found = false;
//     for (int i = 0; i < n - 3; i++) {
//       if (2 * x > a[i + 1]-a[i]) {
//         cout << a[i] << " " << x << " " << x << " " << a[i + 1] << '\n';
//         found = true;
//         break;
//       }
//     }
//     if (!found) cout << -1 << '\n';
  
//     }

//     return 0;
// }


/**
 * writer: blinderchief
 **/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(i, a, n) for (int i = a; i < n; i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define po pop_back
#define me(a, x) memset(a, x, sizeof(a))
#define all(v) v.begin(), v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; 
    cin >> t;
    while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    sot(a);
    int x = 0;
    int j = -1;
    for (int i =0;i<n-1;i++) {
    if (a[i] == a[i + 1]) {
      x = a[i];
        j = i;
        break;
      }
    }
    if (j == -1) {
      cout << -1 << '\n';
      continue;
    }
    a.erase(a.begin() + j);
    a.erase(a.begin() + j);
    bool found = false;
    for (int i = 0; i < n - 3; i++) {
      if (2 * x > a[i + 1]-a[i]) {
        cout << a[i] << " " << x << " " << x << " " << a[i + 1] << '\n';
        found = true;
        break;
      }
    }
    if (!found) cout << -1 << '\n';
  
    }

    return 0;
}

