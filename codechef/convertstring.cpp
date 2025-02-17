// // #include<bits/stdc++.h>
// // using namespace std;
// // #define ll long long int 
// // #define f(i,a,n) for(int i = a; i < n; i++)
// // #define vll vector<ll>
// // #define pb push_back
// // #define po pop_back
// // #define all(v) v.begin(),v.end()
// // #define no cout << "NO" << '\n';
// // #define yes cout << "YES" << '\n';
// // #define sot(v) sort(v.begin(),v.end())

// // signed main() {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(0);
// //     int t;
// //     cin >> t;
// //     while (t--) {
// //         int n;
// //         cin >> n;
// //         string s;
// //         cin >> s;
        
// //         map<char, int> mp;
// //         f(i, 0, n) {
// //             mp[s[i]]++;
// //         }
// //             int cnt = 0;
// //                 for (int i = 1; i <= n; i++) {
// //                     if ( i>= mp['0']&& ((i-mp['0']) % 2 == 0)) cnt++;
// //                     else if(i>=mp['1'] && ((i-mp['1'])%2==0)) cnt++;
// //                 }
// //                 cout<<cnt<<'\n';
// //     return 0;
// // }
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define po pop_back
#define me(a, x) memset(a, x, sizeof(a))
#define all(v) v.begin(), v.end()
#define sot(v) sort(all(v))

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<pair<int, string>> v(n);
    f(i, 0, n) {
        cin >> v[i].second;
        v[i].first = v[i].second.size();
    }
    sot(v);
    string tar;
    cin >> tar;
    int tar_len = tar.size();
    int stoa = 0, cnt_eq = 0;
    for (auto &p : v) {
        if (p.first < tar_len) stoa++;
        else if (p.first == tar_len) cnt_eq++;
    }
    int m = stoa + (cnt_eq - 1);
    int stob = m + (m/k) * 7 + 1;
    cout << stoa+1 << " " << stob << '\n';
    return 0;
}