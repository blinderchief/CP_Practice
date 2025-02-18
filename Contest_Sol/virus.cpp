// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i,a,n) for(int i = a; i < n; i++)
// #define vll vector<ll>
// #define pb push_back
// #define po pop_back
// #define all(v) v.begin(),v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(v.begin(),v.end())

// signed main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     int t; 
//     cin >> t;
//     while(t--) {
//         ll n, m;
//         cin >> n >> m;
//         vector<ll> v(m);
        
//         f(i, 0, m) {
//             cin >> v[i];
//             v[i]--;
//         }

//         if(n == m) { 
//             cout << m << '\n'; 
//             continue; 
//         }
// if(m==1) {
//   cout<<2<<'\n';
//   continue;
// }
//     sot(v);
//         vector<ll> diffcheck;
//         ll ans=0,cur =0;
//         f(i, 1, m) {
//             ll diff = v[i] - v[i-1] - 1;
//             diffcheck.pb(diff);
//         }
//         diffcheck.pb(v[0]-n-v[m-1]-1);
//         sort(diffcheck.rbegin(),diffcheck.rend());
//     for(auto &x: diffcheck){
//       if(x-2*cur<=0) break;
//       else if(x-2*cur<=2) {cur++;  ans++;}
//       else{
//         ans+=(x-2*cur-1);
//         cur+=2;
//       }
//     }
//     cout<<n-ans<<'\n';
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define pb push_back
#define po pop_back
#define all(v) v.begin(),v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(),v.end())

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; 
    cin >> t;
    while(t--) {
        ll n, m;
        cin >> n >> m;
        vector<ll> v(m);
        
        f(i, 0, m) {
            cin >> v[i];
            v[i];
        }

        if(n == m) { 
            cout << m << '\n'; 
            continue; 
        }

        if(m == 1) {
            cout << 2 << '\n'; 
            continue;
        }
        sot(v); 
        vector<ll> gaps;
        f(i, 1, m) {
            ll diff = v[i] - v[i-1] - 1;
            gaps.pb(diff);
        }
        ll circular_gap = (v[0]+n - v[m-1] - 1);
        gaps.pb(circular_gap);

        sort(gaps.rbegin(), gaps.rend());

        ll ans = 0, cur = 0;
        for(auto &gap : gaps) {
            if(gap - 2 * cur <= 0) break;
            else if(gap - 2 * cur <= 2) {
                cur++;
                ans++;
            } else {
                ans += (gap - 2 * cur - 1);
                cur += 2;
            }
        }

        cout << n - ans << '\n';
    }
    
    return 0;
}
