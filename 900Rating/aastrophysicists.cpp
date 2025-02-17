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
int t; cin>>t;
while(t--){
  ll n,k,g;cin>>n>>k>>g;
        ll x = ceil(double(g)/double(2))-1;
        if(x==0 || k==0){
            cout<<"0\n";
            continue;
        }
        if((n*x) >= (g*k)){
            cout<<g*k<<"\n";
            continue;
        }
        ll p = ((g*k)-(n*x))%g;
        ll t = (x + p)%g;
        if(t <= x){
            cout<<((n-1)*x) + t<<"\n";
        }
        else{
            cout<<((n-1)*x) - (g-t)<<"\n";
        }
}
return 0;
}