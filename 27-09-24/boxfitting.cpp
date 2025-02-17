// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i,a,n) for(int i =a;i<n;i++)
// #define vll vector<ll>
// #define pb push_back
// #define po pop_back
// #define all(v) v.begin(),v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(v.begin(),v.end())
// signed main() {
// ios_base::sync_with_stdio(false);
// cin.tie(0);
// int t; cin>>t;
// while(t--){
//     ll n,w; cin>>n>>w;
//     vector<int> v(n); 
//     multiset<int> ms;
//     f(i,0,n) {
//     cin>>v[i];
//     ms.insert(v[i]);
//     }
//     int ans  =0;
// while(!ms.empty()){
// ll temp = w;
// while(true){
//     auto it = lower_bound(all(ms),temp);
//     if(it==ms.end()){
//        if(ms.size()>0){
//         it--;
//         temp -= *it;
//         ms.erase(*it);
//        } 
//        else{
//         break;
//        }
//     }
//     else{
//         if(*it==temp){
//             if(ms.size()>0){
//             temp-=*it;
//             ms.erase(*it);
//             break;
//         }
//         else break;
//         }
//         else if(*it>temp){
//             if(it!=ms.begin()){
//                 it--;
//                 temp-=*it;
//                 ms.erase(*it);
//             }
//             else break;
//         }
//     }
// } 
// ans++;
// }
// cout<<ans<<'\n';
// }
// return 0;
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

    while (t--) {
        ll n, w;
        cin >> n >> w;

        vector<int> v(n);
        multiset<int> ms;

        f(i, 0, n) {
            cin >> v[i];
            ms.insert(v[i]);
        }

        int ans = 0;

        while (!ms.empty()) {
            ll temp = w;

            while (true) {
                auto it = ms.upper_bound(temp);
                if (it == ms.begin()) {
                    // If no element can fit, exit the loop
                    break;
                }
                --it;  
                temp -= *it;  
                ms.erase(it);  
            }
            ans++;
        }

        cout << ans << '\n';
    }

    return 0;
}
