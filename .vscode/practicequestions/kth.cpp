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
//   int a,b,k; cin>>a>>b>>k;
//   if(k%2==0){
//     for(int i =1;i<=k/2;i++){
//       cout<<a-i<<" "<<b-i<<'\n';
//     }
//     for(int j =1;j<=k/2;j++){
//       cout<<a+j<<" "<<b+j<<'\n';
//     }
//   }
//   if(k%2!=0){
//     cout<<a<<" "<<b<<'\n';
//     for(int i =1;i<=k/2;i++){
//       cout<<a-i<<" "<<b-i<<'\n';
//     }
//     for(int i =1;i<=k/2;i++){
//       cout<<a+i<<" "<<b+i<<'\n';
//     }

//   }
// }
// return 0;
// }
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
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
    while(t--){
        int a, b, k; 
        cin >> a >> b >> k;

        vector<pair<int, int>> result;

        if(k % 2 != 0){
            result.pb({a, b});
        }

        for(int i = 1; i <= k / 2; i++){
            result.pb({a - i, b - i});
            result.pb({a + i, b + i});
        }

        for(auto &p : result){
            cout << p.first << " " << p.second << '\n';
        }
    }

    return 0;
}
