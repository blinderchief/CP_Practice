// // /**
// //  * writer:blinderchief 
// // **/
// // #include<bits/stdc++.h>
// // using namespace std;

// // #define ll long long int
// // #define f(i,a,n) for(int i = a; i < n; i++)
// // #define vi vector<int>
// // #define pb push_back
// // #define all(v) v.begin(), v.end()
// // #define sot(v) sort(all(v))

// // int main() {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(0);

// //     int n;
// //     cin >> n;
// //     vi v(n);
// //     map<int, int> mp;

// //     f(i, 0, n) {
// //         cin >> v[i];
// //         mp[v[i]]++;
// //     }

// //     ll ans = 0;

// //     // if (mp.size() == n) {
// //     //     vector<int> keys;
// //     //     for (auto it = mp.rbegin(); it != mp.rend(); ++it) {
// //     //         keys.pb(it->first);
// //     //     }
// //     //     for (int i = 0; i < keys.size(); i += 2) {
// //     //         ans += keys[i];
// //     //     }
// //     //     cout << ans << "\n";
// //     //     return 0;
// //     // }

// //     vector<array<ll, 3>> chk; 
// //     for (auto &it : mp) {
// //         chk.pb({1LL * it.first * it.second, it.first, it.second});
// //     }

// //     sot(chk); 

// //     vector<bool> used(chk.size(), false); 

// //     for (int i = chk.size() - 1; i >= 0; --i) {
// //         if (used[i]) continue;

// //         ans += chk[i][0];
// //         used[i] = true;

// //         int curr_val = chk[i][1];
// //         int see =0;
// //         for (int j = i - 1; j >= 0; --j) {
// //             if(see>=2) break;
// //             if (!used[j] && (chk[j][1] == curr_val - 1)) {
// //                 used[j] = true;
// //                 see++;
// //             }
// //             if(!used[j] && chk[j][1] == curr_val + 1){
// //               used[j]=true;
// //               see++;
// //             }
// //         }
// //     }

// //     cout << ans << '\n';
// //     return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;

// void solve()
// {
//     ll n;
//     cin >> n;
//     vector<ll> a(n);

//     for (int i = 0; i < n; ++i) {
//         cin >> a[i];
//     }

//     unordered_map<ll, ll> freq;
//     for (int i = 0; i < n; ++i) {
//         freq[a[i]]++;
//     }
//     vector<ll> keys;
//     for (auto pair : freq) {
//         keys.push_back(pair.first);
//     }
//     sort(keys.begin(), keys.end());
//     ll prev2 = 0, prev1 = 0; 
//     ll ans = 0;
//     for (int i = 0; i < keys.size(); ++i) {
//         ll key = keys[i];
//         ll current_value = key * freq[key];

//         if (i > 0 && keys[i] == keys[i - 1] + 1) {
//             ans = max(prev1, prev2 + current_value);
//         } else {
//             ans = prev1 + current_value;
//         }

//         prev2 = prev1;
//         prev1 = ans;
//     }
//     cout << ans << "\n";
// }
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     solve();
//     return 0;
// }


/**
 * writer:blinderchief 
**/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i = a; i < n; i++)
#define vi vector<int>
#define pb push_back
#define all(v) v.begin(), v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vi v(n);
    map<ll, ll> mp;
    f(i, 0, n) {
        cin >> v[i];
        mp[v[i]]++;
    }
  vector<ll> keys;
for (auto it = mp.begin(); it != mp.end(); ++it) {
    keys.pb(it->first);
}
    sort(all(keys)); 
    ll prev1 = 0, prev2 = 0; 
    ll prevKey = 0; 
    for (auto key: keys) {
        ll curr = 0;
        if (key == prevKey + 1) {
            curr = max(prev1, key * mp[key] + prev2);
        } else {      
            curr = key * mp[key] + prev1;
        }
        prev2 = prev1;
        prev1 = curr;
        prevKey = key;
    }
    cout << prev1 << '\n';
    return 0;
}

// /**
//  * writer:blinderchief 
// **/
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i,a,n) for(int i =a;i<n;i++)
// #define vll vector<ll>
// #define vi vector<int>
// #define pb push_back
// #define po pop_back
// #define all(v) v.begin(),v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(all(v))
// const int mx = 100010; 
// int main() {
// ios_base::sync_with_stdio(false);
// cin.tie(0);
// int n;  cin>>n;
// vi v(n);
// map<ll,ll> mp;
// f(i,0,n){
//   cin>>v[i];
//   mp[v[i]]++;
// }
// vector<ll> dp(mx);
// dp[0] = 0;
// dp[1] = mp[1];
// f(i,2,mx+1){
// dp[i] =  max(dp[i-1],i*mp[i]+dp[i-2]);
// }
// cout<<dp[mx];
// return 0;
// }