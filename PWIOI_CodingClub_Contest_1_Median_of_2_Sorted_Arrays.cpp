// // /**
// //  * writer:blinderchief
// //  **/
// // #include <bits/stdc++.h>
// // using namespace std;
// // #define ll long long int
// // #define f(i, a, n) for (int i = a; i < n; i++)
// // #define vll vector<ll>
// // #define vi vector<int>
// // #define pb push_back
// // #define po pop_back
// // #define me(a, x) memset(a, x, sizeof(a))
// // #define all(v) v.begin(), v.end()
// // #define no cout << "NO" << '\n';
// // #define yes cout << "YES" << '\n';
// // #define sot(v) sort(all(v))
// // mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

// // int main() {
// //     auto begin = chrono::high_resolution_clock::now();
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(0);

// //     int n, m;
// //     cin >> n;
// //     vi a(n);
// //     f(i, 0, n) cin >> a[i];

// //     cin >> m;
// //     vi b(m);
// //     f(i, 0, m) cin >> b[i];

// //     int mid1, mid2 = 0, mid3, mid4;
// //     int see1 = 0, see2 = 0;

// //     if (!(n & 1)) { 
// //         mid1 = (n / 2) - 1, mid2 = mid1 + 1;
// //         see1 = (a[mid1] + a[mid2]) / 2;
// //     }

// //     if (!(m & 1)) { 
// //         mid3 = (m / 2) - 1, mid4 = mid3 + 1;
// //         see2 = (b[mid3] + b[mid4]) / 2;
// //     }

// //     if (!(n & 1) && !(m & 1)) {
// //         int cal = (see1 + see2) / 2;
// //         cout << cal<< '\n';
// //     } else if (n & 1 && m & 1) {
// //         int cal = (a[(n / 2)] + b[m / 2]) / 2;
// //         cout << cal + 1 << '\n';
// //     } else {
// //         if (n & 1) {
// //             cout << ((see2 + a[n / 2]) / 2 )-1<< '\n';
// //         } else {
// //             cout <<( (see1 + b[m / 2]) / 2)-1 << '\n';
// //         }
// //     }

// //     auto end = chrono::high_resolution_clock::now();
// //     auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
// //     // cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';

// //     return 0;
// // }


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
//     auto begin = chrono::high_resolution_clock::now();
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     ll n, m;
//     cin >> n;
//     vll a(n);
//     f(i, 0, n) cin >> a[i];
//     cin >> m;
//     vi b(m);
//     f(i, 0, m) cin >> b[i];
//     int mediPos1 = (n+m- 1) / 2;
//     int mediPos2 = ((n+m) % 2 == 0) ? mediPos1 + 1 : mediPos1;
//     ll i = 0, j = 0, curr = 0, prev = 0;
//     for (int c = 0; c <= mediPos2; c++) {
//         prev = curr;
//         if (i < n && (j >= m || a[i] <= b[j])) {
//             curr = a[i++];
//         } else {
//             curr = b[j++];
//         }
//     }

//     if ((n+m)%2==1) {
//         cout<< curr;
//     }
//     else {
//    cout<<(ll)ceil((prev + curr) / 2.0);
//     }
//     auto end = chrono::high_resolution_clock::now();
//     auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
//     // cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';

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
#define pb push_back
#define me(a, x) memset(a, x, sizeof(a))
#define all(v) v.begin(), v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

int main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n, m;
    cin >> n;
    vll a(n);
    f(i, 0, n) cin >> a[i];

    cin >> m;
    vll b(m);
    f(i, 0, m) cin >> b[i];

    a.insert(a.end(), b.begin(), b.end());

    sot(a);

    ll size = n + m;
    if (size % 2 == 0) {
        ll mid1 = size / 2;
        ll mid2 = mid1 - 1;
        cout << (a[mid1] + a[mid2]) / 2 << '\n';
    } else {
        ll mid = size / 2;
        cout << a[mid] << '\n';
    }

    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    // cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';

    return 0;
}
