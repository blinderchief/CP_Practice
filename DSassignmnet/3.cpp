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
// string s,res;
// cin>>s;
// if(s.size()<2){
//   cout<<""<<'\n';
//   return 0;
// }
// vector<char> check(s.size());
// check[s.size()-1] = s[s.size()-1];
// for(int i =s.size()-2; i>=0;i--){
//   check[i] = min(s[i],check[i+1]);
// }
// f(i,0,s.size()){
// if(res.empty() || s[i]<=check[i]){
//   res.push_back(s[i]);
//   if(res.size()>=2) break;
// }
// }
// if(res.size()<2){
//   for(int  i=res.size();i<s.size();i++){
//  if(s[i]<res[0]){
//   res.push_back(s[i]);
//   break;
//  }
//   }
// }
// cout<<res<<'\n';

// return 0;
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
string s; cin>>s;
string res;
char p = s[0];
int x=0;
for(int i =1;i<s.size()-1;i++){
  if(s[i]<p){
    p =s[i];
    x =i;
  }
}
char v =s[x+1];
for(int i = x+2;i<s.size();i++){
  if(s[i]<v){
    v = s[i];
  }
}
cout<<p<<v<<'\n';

return 0;
}



