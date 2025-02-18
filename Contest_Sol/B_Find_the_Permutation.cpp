// /**
//  * writer:blinderchief
//  **/
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define f(i,a,n) for(int i = a; i < n; i++)
// #define vll vector<ll>
// #define vi vector<int>
// #define pb push_back
// #define po pop_back
// #define me(a, x) memset(a, x, sizeof(a))
// #define all(v) v.begin(), v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(all(v))
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
// int main() {
//     auto begin = chrono::high_resolution_clock::now();
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int t; cin >> t;
//     while (t--) {
//         int n; cin>>n;
      
//         vector<vector<int>> v(n);
//         f(i,0,n){
//           f(j,0,n){
//             cin>>v[i][j];
//           }
//         }
//         if(n==1){
//           cout<<1<<'\n';
//           continue;
//         } 
//         map<int,int> mp;
//         f(i,0,n){
//           f(j,0,n){
//             if(v[i][j]==1) mp[v[i][j]+1]++;
//           }
//         }
//         vector<pair<int,int>> see;
// for(auto it=mp.begin();it!=mp.end();it++)
// {
//   see.pb({it->second,it->first});
// }        
// sort(see.rbegin(),see.rend());
// vector<int> ans(n+10);
// int j =n;
// f(i,0,see.size()){
//   if(see[i].first>0){
//     ans[j]=see[i].second;
//     j--;
//   }
//   else break;
// }
// for(int i =1;i<=n;i++){
//   if(ans[i]==0){
//     ans[i]=i;
//   }
//   cout<<ans[i]<<" ";
// }
// cout<<'\n';
//     }
//     auto end = chrono::high_resolution_clock::now();
//     auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
//    //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
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
    int t; cin >> t;
    while (t--) {
      int n;
    cin>>n;
   vector<int>pos(n);
  for(int i=1;i<=n;i++){
    string edge;
    cin>>edge;
    int p = n;
    for(int j=1;j<=n;j++){
      if(j>i && edge[j-1]=='1')
        p--;
      else if(j<i && edge[j-1]=='0')
        p--;
    }
    pos[p-1]=i;
  } 
  f(i,0,n){
    cout<<pos[i]<<" ";
  }  
  cout<<'\n';
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}