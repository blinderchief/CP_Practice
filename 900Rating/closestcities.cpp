// // #include<bits/stdc++.h>
// // using namespace std;
// // #define ll long long int 
// // #define f(i,n) for(int i =0;i<n;i++)
// // #define sot(v) sort(v.begin(),v.end())
// // signed main() {
// // ios_base::sync_with_stdio(false);
// // cin.tie(0);
// // int t; cin>>t;
// // while(t--){
// //   int n; cin>>n;
// //   vector<ll> a(n);
// //   f(i,n){
// //     cin>>a[i];
// //   }
// //   int m; cin>>m;  
// //   vector<pair<int,int>> v(m);
// //   f(i,m){
// //     cin>>v[i].first;
// //     cin>>v[i].second;
// //   }
// //   vector<int> ans(m);
// //   f(i,m){
// //     ll temp  =abs(a[v[i].first-1] - a[v[i].second-1]);
// //     ll cnt =0;
// //     if(v[i].second>v[i].first){
// //       for(int i =v[i].first-1;i<v[i].second;i++){
// //           ll check1 = a[i+1]-a[i];
// //           ll check2 =0;
// //           if(i!=0){
// //             ll check2 = a[i]-a[i-1];
// //           }
// //           ll check3 = min(check1,check2);
// //           if(check3 == check1){
// //             cnt++;
// //           }
// //           else{
// //             cnt+=check1;
// //           }

// //   }
// //     }
// //     else{
// //        for(int i =v[i].first-1;i>v[i].second;i--){
// //           ll check1 = a[i+1]-a[i];
// //           ll check2 =0;
// //           if(i!=0){
// //             ll check2 = a[i]-a[i-1];
// //           }
// //           ll check3 = min(check1,check2);
// //           if(check3 == check1){
// //             cnt++;
// //           }
// //           else{
// //             cnt+=check1;
// //           }
// //   }
// //     }
// //   cnt = min(cnt,temp);
// //   ans.push_back(cnt);

// //   }
// //   f(i,m){
// //     cout<<ans[i]<<'\n';
// //   }
// //   cout<<'\n';

// // }
// // return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i,n) for(int i = 0; i < n; i++)
// #define sot(v) sort(v.begin(), v.end())

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t;
//     while(t--) {
//         int n;
//         cin >> n;
//         vector<ll> a(n);
//         f(i, n) {
//             cin >> a[i];
//         }

//         int m;
//         cin >> m;
//         vector<pair<int, int>> v(m);
//         f(i, m) {
//             cin >> v[i].first >> v[i].second;
//         }

//         vector<int> ans(m);
//         f(i, m) {
//             ll temp = abs(a[v[i].first - 1] - a[v[i].second - 1]);
//             ll cnt = 0;

//             if(v[i].second > v[i].first) {
//                 for(int j = v[i].first - 1; j < v[i].second - 1; j++) {
//                     ll check1 = a[j + 1] - a[j];
//                     ll check2 = (j != 0) ? a[j] - a[j - 1] : LLONG_MAX;
//                     ll check3 = min(check1, check2);
//                     if(check3 == check1) {
//                         cnt++;
//                     } else {
//                         cnt += check1;
//                     }
//                 }
//             } else {
//                 for(int j = v[i].first - 1; j > v[i].second - 1; j--) {
//                     ll check1 = a[j] - a[j - 1];
//                     ll check2 = (j != n-1) ? a[j + 1] - a[j] : LLONG_MAX;
//                     ll check3 = min(check1, check2);
//                     if(check3 == check1) {
//                         cnt++;
//                     } else {
//                         cnt += check1;
//                     }
//                 }
//             }
//             cnt = min(cnt, temp);
//             ans[i] = cnt;
//         }

//         f(i, m) {
//             cout << ans[i] << '\n';
//         }
//         cout << '\n';
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<long long> left(n), right(n);
        for (int i = 0; i < n - 1; i++) {
        if (i == 0 || a[i] - a[i - 1] > a[i + 1] - a[i]) right[i + 1]++;
            else right[i + 1] += a[i + 1] - a[i];
        }
        
        for (int i = n - 1; i > 0; i--) {
            left[i - 1] = left[i];
            if (i == n - 1 || a[i] - a[i - 1] < a[i + 1] - a[i]) left[i - 1]++;
            else left[i - 1] += a[i] - a[i - 1];
        }

        int q;
        cin >> q;

        while (q--) {
            int s, e;
            cin >> s >> e;
            s--, e--;

            if (s < e) cout << right[e] - right[s] << endl;
            else cout << left[e] - left[s] << endl;
        }
    }

    return 0;
}