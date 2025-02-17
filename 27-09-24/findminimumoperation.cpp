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
//   ll n,k;cin>>n>>k;
//   if(k==1 || n<k) cout<<n<<'\n';
//   else if(n==k) {
//     cout<<1<<'\n';
//   }
//   else {
//     if(n%k==0) cout<<1<<'\n';
//     else {
//       ll chk =k;
//       int ope=0;
//       while((chk*=k)<n){
//         chk*=k;
//       }
//       while(n>0){
//         if(n==k) {ope++; break;}
//         if(n<k){

//         }
//         n-=k;
        
//         ope++;
//       }




//          }
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
int check(ll n, ll k){
  ll res=0;
  while(n>0){
    res+=(n%k);
    n/=k;
      }
      return res;
}
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){
  ll n,k;cin>>n>>k;
  if(k==1) cout<<n<<'\n';
  else {

      cout<<check(n,k)<<'\n';    
  }
}
return 0;
}