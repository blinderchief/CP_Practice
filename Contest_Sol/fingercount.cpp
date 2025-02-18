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
int n; cin>>n;
vector<int> v(n);
int cntod =0 ,cntev =0,cnt =0;
f(i,0,n){
cin>>v[i];
cnt+=v[i];
}
// if(v[i]%2!=0){
//   cntod++;
// }
// else{
//   cntev++;
// }
// }
// if(cntod==n){
// cout<<3<<'\n';
// }
// else if(cntev==n){
//   cout<<2<<'\n';
// }
// else{
int cntan=0;
f(i,1,6){
int re = (cnt + i) % (n + 1);
if (re!=1) {
    cntan++;
}
}
cout<<cntan;


return 0;
}

