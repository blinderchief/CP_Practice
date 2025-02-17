// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// ll n;
// int main()
// {
//    ll t;
// cin>>t;
// while(t--)
// {
//     cin>>n;
//  vector<pair<ll,ll>>v,p,q;
//  for(int i=0;i<n;i++){
//  ll x; cin>>x; v.push_back({x,i});
// }
// for(int i=0;i<n;i++){
//  ll x; cin>>x; p.push_back({x,i});
// }
// for(int i=0;i<n;i++){
//  ll x; cin>>x; q.push_back({x,i});
// }
// sort(v.rbegin(),v.rend());
// sort(p.rbegin(),p.rend());
// sort(q.rbegin(),q.rend());
// ll s=0,mx=0;
// for(int i=0;i<3;i++){
// for(int j=0;j<3;j++){
// for(int k=0;k<3;k++){
// if(v[i].second!=p[j].second && p[j].second!=q[k].second && v[i].second!=q[k].second){
// s=(v[i].first+p[j].first+q[k].first);
// mx=max(mx,s);}}}}
// cout<<mx<<endl;
// }}

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
int t; cin>>t;
while(t--){
   int n;cin>>n;
   vector<pair<int,int>> a(n),b(n),c(n);
   f(i,0,n) {cin>>a[i].first; a[i].second = i;}
   f(i,0,n) {cin>>b[i].first; b[i].second =i;}
   f(i,0,n) {cin>>c[i].first; c[i].second = i;}
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    sort(c.rbegin(),c.rend()); 
    ll maxi = 0;  
    f(i,0,3) {
      f(j,0,3){
         f(k,0,3){
            if(a[i].second!=b[j].second && b[j].second!=c[k].second && a[i].second!=c[k].second){
               ll cal = a[i].first+ b[j].first + c[k].first;
               maxi =  max(maxi,cal);
            }
         }
      }
    }
    cout<<maxi<<'\n';
    

}
return 0;
}
