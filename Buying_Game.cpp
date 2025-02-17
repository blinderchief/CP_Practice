
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define po pop_back
#define all(v) v.begin(),v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){
  int n;cin>>n;
  vll a(n),b(n);
  f(i,0,n){
    cin>>a[i];
  }
  f(i,0,n){
    cin>>b[i];
  }
  f(i,0,n){
    a[i]-=b[i];
  }
   sot(a);
  ll cal = accumulate(all(b),0ll);
  ll cal2 = accumulate(all(b),0ll);
  cal+=a[0];
  f(i,1,n){
    cal+=a[i];
    cal2 = min(cal2,cal);
  }
  cout<<cal2<<'\n';
}
return 0;
}