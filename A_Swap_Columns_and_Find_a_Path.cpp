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
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){
  int n;
		cin>>n;
    vll a(n),p(n),b(n);
		for(int i=1;i<=n;i++){
			cin>>a[i];
			p[i]=i;
		}
		for(int i=1;i<=n;i++)
			cin>>b[i];
    ll ans=-1e18;
		for(int i=1;i<=n;i++){
			ll sum=a[i]+b[i];
				for(int j=1;j<=n;j++){
				if(j!=i)
					sum+=max(a[j],b[j]);
			}
			ans=max(ans,sum);
		}
		cout<<ans<<"\n";
}
return 0;
}