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
// int maxSubarraySumCircular(vector<int>& v) {
//     int total_sum=0,max_sum=INT_MIN,min_sum=INT_MAX,curr=0,curr1=0; 
//     for(int i=0;i<v.size();i++){
//         total_sum+=v[i];
//         curr+=v[i];
//         curr1+=v[i];
//         max_sum=max(curr,max_sum);
//         if(curr<0){
//             curr=0;
//         }
//         min_sum=min(curr1,min_sum);
//         if(curr1>0){
//             curr1=0;
//         }
//     }
//     return (total_sum==min_sum)?max_sum:max(max_sum,total_sum-min_sum);   
//     }
// signed main() {
// ios_base::sync_with_stdio(false);
// cin.tie(0);
// int t; cin>>t;
// while(t--){
//   int n;cin>>n;
//   vector<int> v(n);
//   f(i,0,n) cin>>v[i];
//   int l =0; int sum =0;  int max_sum = INT_MIN;
//   for(int r =0;r<n;r++){
//     sum+=v[r];
//     if(sum>max_sum) max_sum = sum;
//     if(sum<0) sum=0;
//   }
//   cout<<max_sum<<'\n';
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
int maxSubarraySumCircular(vector<int>& v) {
    int total_sum=0,max_sum=INT_MIN,min_sum=INT_MAX,curr=0,curr1=0; 
    for(int i=0;i<v.size();i++){
        total_sum+=v[i];
        curr+=v[i];
        curr1+=v[i];
        max_sum=max(curr,max_sum);
        if(curr<0){
            curr=0;
        }
        min_sum=min(curr1,min_sum);
        if(curr1>0){
            curr1=0;
        }
    }
    return (total_sum==min_sum)?max_sum:max(max_sum,total_sum-min_sum);   
    }
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){
  int n;cin>>n;
  vector<int> v(n);
  f(i,0,n) cin>>v[i];
  int ans = maxSubarraySumCircular(v);
  cout<<ans<<'\n';
}
return 0;
}
