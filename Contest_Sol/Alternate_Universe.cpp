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
  vll a(n),b(n);
  f(i,0,n) cin>>a[i];
  f(i,0,n) cin>>b[i];
  ll l=-1,r=n+1,ans=-1;
	    while(l<=r)
	    {
	        ll m=(l+r)/2;
	        ll t=m;
	        for(ll i=0;i<n;i++)
	        {
	            if(t<0)
	            break;
	            if(t<=a[i])
	            t+=(b[i]-1);
	            else
	            t=max(t-1,a[i]+b[i]-1);
	        }
	        if(t>=0)
	        {
	            ans=m;
	            r = m-1;
	        }
	        else l=m+1;
	    }
	    cout<<ans<<'\n';
}
auto end = chrono::high_resolution_clock::now();
auto elapsed = chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
// cout << "Time taken:" << elapsed.count()*1e-9 << "seconds" << endl;
return 0;
}
