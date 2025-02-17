



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
  int x,y,b;cin>>x>>y>>b;
   int a = min(x,y);
    cout<<"0 0 "<<a<<" "<<a<<'\n';
    cout<<a<<" 0 0 "<<a<<'\n';
  }
return 0;
}