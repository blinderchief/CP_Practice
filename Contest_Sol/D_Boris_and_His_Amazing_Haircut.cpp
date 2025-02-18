/**
 * writer:blinderchief 
**/
#include<bits/stdc++.h>
using namespace std;
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
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
int main() {
auto begin = chrono::high_resolution_clock::now();
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){
  int n,m;cin>>n;
  bool ck =false;
  vll a(n),b(n),x(m);
  f(i,0,n) cin>>a[i];
  f(i,0,n) {cin>>b[i]; if(b[i]>a[i]){ck=true;}}
  cin>>m;
  f(i,0,m) cin>>x[i];
  if(ck) {no continue;}
  else{
    
  }


  

}
auto end = chrono::high_resolution_clock::now();
auto elapsed = chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
cout << "Time taken:" << elapsed.count()*1e-9 << "seconds" << endl;
return 0;
}