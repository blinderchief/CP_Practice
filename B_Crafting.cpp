#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i, a, n) for (int i = a; i < n; i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define all(v) v.begin(), v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';

int main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vll a(n), b(n);
        bool ck = false;
        ll cal = 0;

        f(i, 0, n) cin >> a[i];
        f(i, 0, n) {
            cin >> b[i];
            if (a[i] < b[i]) {
                cal++;
            }
        }

 int c = 0, d=0;
  f(i,0,n) {
        if(a[i] < b[i]) {
            c++;
            d = b[i] - a[i];
            a[i] += 2*d;
        }
    }
    if(c>1) {
        no;
        continue;
    }
    f(i,0,n) {
        a[i] -= d;
        if(a[i] < b[i]) {
          no
          ck = true;
          break;
        }
    }
    if(!ck) yes
       }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    // cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}
