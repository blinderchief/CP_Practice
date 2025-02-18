
// // #include <bits/stdc++.h>
// // using namespace std;

// // #define ll long long int 

// // int main() {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(0);

// //     ll n, m;
// //     cin >> n >> m;
// //     vector<pair<ll, ll>> x(n), y(m);

// //     for(int i =0;i<n;i++) {
// //         cin >> x[i].first >> x[i].second;
// //     }
// //     for(int i =0;i<m;i++){
// //         cin >> y[i].first >> y[i].second;
// //     }

// //     sort(x.begin(),x.end());
// //     sort(y.begin(),y.end());
// //     ll cnt = 0;
// //     ll i = 0, j = 0;
// //     while (i < n && j < m) {
// //         if ((x[i].first == y[j].second && x[i].second == y[j].first) || 
// //             (y[j].second != 0 && x[i].second != 0 &&
// //              x[i].first / y[j].second == y[j].first / x[i].second)) {
// //             cnt++;
// //             i++;
// //             j++;
// //         }
// //         else if (x[i].first < y[j].first) {
// //             i++;
// //         } else {
// //             j++;
// //         }
// //     }

// //     cout << cnt << '\n';
// //     return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long int 

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     ll n, m;
//     cin >> n >> m;
//     vector<pair<ll, ll>> red(n), blue(m);

//     for(int i = 0; i < n; i++) {
//         cin >> red[i].first >> red[i].second;
//     }
//     for(int i = 0; i < m; i++) {
//         cin >> blue[i].first >> blue[i].second;
//     }

//     sort(red.begin(), red.end());
//     sort(blue.begin(), blue.end());

//     ll cnt = 0;
//     ll i = 0, j = 0;

//     while (i < n && j < m) {
//         ll x = red[i].first, u = red[i].second;
//         ll y = blue[j].first, v = blue[j].second;

//         if (x == y && u == v) {
//             cnt++;
//             i++;
//             j++;
//         } 
//         else if (u != 0 && v != 0) {
//             double t1 = static_cast<double>(x) / v;
//             double t2 = static_cast<double>(y) / u;

//             if (fabs(t1 - t2) < 1e-9) { 
//                 cnt++;
//                 i++;
//                 j++;
//             } else if (t1 < t2) {
//                 i++;
//             } else {
//                 j++;
//             }
//         } else {  
//             if (x < y) {
//                 i++;
//             } else {
//                 j++;
//             }
//         }
//     }

//     cout << cnt << '\n';
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n, m;
    cin >> n >> m;
    map<ll, ll> redCnt, blueCnt;

    for (int i = 0; i < n; i++) {
        ll x, u;
        cin >> x >> u;
        redCnt[x * u]++;
    }

    for (int i = 0; i < m; i++) {
        ll y, v;
        cin >> y >> v;
        blueCnt[y * v]++;
    }

    ll coll = 0;

    for (const auto& entry : redCnt) {
        ll product = entry.first;
        ll redFreq = entry.second;
        if (blueCnt.find(product) != blueCnt.end()) {
            coll += min(redFreq, blueCnt[product]);
        }
    }

    cout << coll<< '\n';
    return 0;
}
