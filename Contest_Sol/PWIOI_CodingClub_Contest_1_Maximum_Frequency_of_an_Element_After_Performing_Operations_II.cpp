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

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     ll n;
//     cin >> n;
//     vll v(n);
//     f(i, 0, n) cin >> v[i];
//     sot(v);

//     ll k;
//     cin >> k;
//     int o;
//     cin >> o;

//     // Find the most frequent element in v
//     ll maxi = 1, cnt = 1;
//     ll see = v[0];
//     f(i, 1, n) {
//         if (v[i] == v[i - 1]) {
//             cnt++;
//         } else {
//             if (cnt > maxi) {
//                 maxi = cnt;
//                 see = v[i - 1];
//             }
//             cnt = 1; 
//         }
//     }
//     if (cnt > maxi) {
//         maxi = cnt;
//         see = v[n - 1];
//     }

//     ll sum = accumulate(all(v), 0ll);
//     ll find = sum / n;
//     int idx = lower_bound(all(v), find) - v.begin();
//     ll see2 = 0;
    
//     if (idx == n || v[idx] != find) {
//         if (idx == 0) {
//             see2 = v[idx];
//         } else if (idx == n) {
//             see2 = v[idx - 1];
//         } else {
//             ll left = v[idx - 1], right = v[idx];
//             see2 = (abs(left - find) <= abs(right - find)) ? left : right;
//         }
//     } else {
//         see2 = v[idx];
//     }

//     cnt = maxi;
//     int temp_o = o; 
//     f(i, 0, n) {
//         if (v[i] != see) {
//             if (temp_o == 0) break;
//             if (abs(v[i] - see) <= k) {
//                 temp_o--;
//                 cnt++;
//             }
//         }
//     }
//   if(maxi>=2) {cout<<cnt<<'\n'; return 0;}
//   else{
//   ll cnt2 = maxi;
//     temp_o = o; 
//     f(i, 0, n) {
//         if (v[i] != see2) {
//             if (temp_o == 0) break;
//             if (abs(v[i] - see2) <= k) {
//                 temp_o--;
//                 cnt2++;
//             }
//         }
//     }

//         cout << max(cnt, cnt2) << '\n'; 
//   }
//     return 0;
// }
/**
 * writer:blinderchief
 **/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,a,n) for(int i = a; i < n; i++)
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
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n; cin>>n;
    vll v(n);
    f(i,0,n) cin>>v[i];
    ll k,o;cin>>k>>o;
     unordered_map<ll, int> freq,diff;
        int max_freq = 0;
        set<ll> st; 
        for (auto i : v) {

            int mini = i - k;
            int maxi = i + k+1;

            if (mini < 0) {
                mini = 0;
            }
            diff[mini]++;
            diff[maxi]--;
            freq[i]++;
            st.insert(mini);
            st.insert(maxi);
            st.insert(i);
            max_freq = max(max_freq, freq[i]);
            
        }

        ll ans = 0;
        ll curr = 0;
        for (auto i:st) {
            curr += diff[i];
            ans = max(ans, min(curr, freq[i] + o));
        }

    cout<<min(ans, max_freq + o);
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}
