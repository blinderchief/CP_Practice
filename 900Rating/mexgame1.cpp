// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i,a,n) for(int i =a;i<n;i++)
// #define vll vector<ll>
// #define pb push_back
// #define po pop_back
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(v.begin(),v.end())
// signed main() {
// ios_base::sync_with_stdio(false);
// cin.tie(0);
// int t; cin>>t;
// while(t--){
//   int n; cin>>n;
//   vll v(n);
//   f(i,0,n){
//     cin>>v[i];
//   }
//   vll ch(n);
//   f(i,0,n){
//     if(i%2==1){
//       ch.push_back(v[i]);
//     }
//   }
//   sot(ch);
//   map<int,int> mp;
//   f(i,0,n){
//     mp[ch[i]]++;
//   }
//   f(i,0,n){
//     if(mp[i]==0){
//       cout<<i<<'\n';
//       break;
//     }
//   }
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
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(), v.end())

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        vll v(n);
        f(i, 0, n) {
            cin >> v[i];
        }

        vll ch;
        f(i, 0, n) {
            if (i % 2 == 1) {
                ch.pb(v[i]);
            }
        }

        sot(ch);

        map<int, int> mp;
        for (int i = 0; i < ch.size(); i++) {
            mp[ch[i]]++;
        }

        int missing = 0;
        while (mp[missing] > 0) {
            missing++;
        }
        cout << missing << '\n';
    }

    return 0;
}
