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
// #define me(a, x) memset(a, x, sizeof(a))
// #define all(v) v.begin(),v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(all(v))
// int main() {
// ios_base::sync_with_stdio(false);
// cin.tie(0);
//   int n; cin>>n;
//   vector<pair<int,int>> v(n);
//  f(i,0,n){
//   cin>>v[i].first>>v[i].second;
//  }
//  int k; 
//     int l, r;
//     vector<int> vec, vec2;
//     for(int i = 1; i <= n; i++)
//     {
//         cin>>l>>r;
//         v[l].second = i;
//         v[r].first = i;
//         if(!l)
//         {
//             vec.pb(i);
//         }
//     }
//     for(int e : vec)
//     {
//         while(e)
//         {
//             k = e;
//             e = v[e].second;
//         }
//         vec2.pb(k);
//     }
//     for(int i = 0; i < vec.size() - 1; i++)
//     {
//         v[vec2[i]].second = vec[i + 1];
//         v[vec[i + 1]].first = vec2[i];
//     }
//     for(int i = 1; i <= n; i++)
//     {
//         cout<<v[i].first<<" "<<v[i].second;
//         cout<<'\n';
//     }
// return 0;
// }



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
// #define me(a, x) memset(a, x, sizeof(a))
// #define all(v) v.begin(),v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(all(v))
// int main() {
// ios_base::sync_with_stdio(false);
// cin.tie(0);
// int t; cin>>t;
// vector<array<int,3>> len(t);
// for(int i =0;i<t;i++){
//  cin>>len[i][0];
//  len[i][1]= i+1;
//  cin>>len[i][2];
// }
// list<int> li;
// vector<tuple<bool,int,bool>>le;
// for(int i =0;i<t;i++){
// if(len[i][0]==0){
//     if(len[i][2]==0){
//         le.pb(make_tuple(true,len[i][1],true));

//     }
//     else{
//         le.pb(make_tuple(true,len[i][1],false));
//     }
// }
// else if(len[i][2]==0){
//         le.pb(make_tuple(false,i+1,true));
// }
// else{
//     le.pb(make_tuple(false,len[i][1],false));
// }
// }
// for(int i =0;i<le.size();i++){

// }

// return 0;
// }