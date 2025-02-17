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
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     int t; 
//     cin >> t;

//     while(t--) {
//         int n, s, m;
//         cin >> n >> s >> m;
//         vector<pair<int, int>>ch(n);

//         for (int i = 0; i < n; ++i) {
//             cin >> ch[i].first >> ch[i].second;
//         }

//         bool flag = 0;

//         // Check the time before the first interval
//         if (ch[0].first >= s) {
//           flag =1;
//         }

//         // Check the time between intervals
//         for (int i = 1; i < n && !flag; ++i) {
//             if (ch[i].first - ch[i-1].second >= s) {
//                 flag = true;
//             }
//         }

//         // Check the time after the last interval
//         if (!flag && m - ch[n-1].second >= s) {
//           flag = true;
//         }

//         if (flag) {
//             yes
//         } else {
//             no
//         }
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
#define vll vector<ll>
#define pb push_back
#define po pop_back
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(),v.end())
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){
    int n,s,m; cin>>n>>s>>m;
    vector<pair<int,int>>v(n);
    f(i,0,n){
        cin>>v[i].first;
        cin>>v[i].second;
    } 
    if(v[0].first>=s) {cout<<"YES"<<'\n'; continue;}
    bool ch = false;
    f(i,1,n){
       if(v[i].first-v[i-1].second>=s) {
        ch = true;
        break;
       } 
    }
    if(ch) yes
    else{
        if(m-v[n-1].second>=s) {
            yes
        }else no
    }
    

}
return 0;
}