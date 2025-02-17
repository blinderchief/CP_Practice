// // /**
// //  * writer:blinderchief 
// // **/
// // #include<bits/stdc++.h>
// // using namespace std;
// // #define ll long long int 
// // #define f(i,a,n) for(int i =a;i<n;i++)
// // #define vll vector<ll>
// // #define vi vector<int>
// // #define pb push_back
// // #define po pop_back
// // #define me(a, x) memset(a, x, sizeof(a))
// // #define all(v) v.begin(),v.end()
// // #define no cout << "NO" << '\n';
// // #define yes cout << "YES" << '\n';
// // #define sot(v) sort(all(v))
// // const ll N=2005,MOD= 1e9+7;
// // ll dp[N][N];
// // int main() {
// // ios_base::sync_with_stdio(false);
// // cin.tie(0);
// //  ll n,k;
// //  cin>>n>>k;
// //  f(i,1,n+1) dp[1][i]=1;
// //  for(ll i=2;i<=k;i++)
// //  {
// //   for(ll j=1;j<=n;j++)
// //   {
// //    for(ll k=j;k<=n;k+=j)
// //    {
// //     dp[i][j]+=dp[i-1][k];
// //     dp[i][j]%=MOD;
// //    }
// //   }
// //  }
// //  ll ans=0;
// //  for(ll i=1;i<=n;i++)
// //  {
// //   ans+=dp[k][i];
// //   ans%=MOD;
// //  }
// //  cout<<ans<<"\n";
// //  return 0;
 
// // }

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
// ll n,k;
// const int MOD=1e9+7;

// int dp[2005][2005];
// ll rec(int i){
// if(k<=0){
//   return 0;
// }
// if(dp[i][k]!=-1){
//   return dp[i][k];
// }
// stack<int> s;

// }
// int main() {
// ios_base::sync_with_stdio(false);
// cin.tie(0);
// cin>>n>>k;

// return 0;
// }

/**
 * writer:blinderchief 
**/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define po pop_back
#define me(a, x) memset(a, x, sizeof(a))
#define all(v) v.begin(),v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
string removeDuplicates(string s) {
    int n = s.size();
    stack<char> ck;
    ck.push(s[0]);
    for(int i= 1;i<n;i++){
        // t=ck.top();
        if(s[i] == ck.top()){
               ck.pop();
         }
        else{
           ck.push(s[i]);
           
        }
    } 
    string temp = "";
    while(!ck.empty()) {
        temp+=ck.top();
        ck.pop();
    }
    reverse(all(temp));
    return temp;
    }

int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
string s; cin>>s;
string temp = removeDuplicates(s);
cout<<temp<<"\n";
return 0;
}