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
  int n; cin>>n;
  vi v(n);
  int cnt1 =n+1;
  int cnt0=n+1;
  int see=0;
  f(i,0,n) {
      cin>>v[i];
   }

  f(i,0,n){
    if(cnt0>cnt1) {
      swap(cnt0,cnt1);
    }
    if(v[i]<=cnt0){
        cnt0 = v[i];
      }
      else if(v[i]>cnt0 && v[i]<=cnt1){
       cnt1= v[i];
      }
      else{ 
      see++;
        cnt0 =  v[i];
      }
  }
 
 cout<<see<<'\n';
 
}
auto end = chrono::high_resolution_clock::now();
auto elapsed = chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
// cout << "Time taken:" << elapsed.count()*1e-9 << "seconds" << endl;
return 0;
}