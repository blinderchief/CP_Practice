// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i,a,n) for(int i =a;i<n;i++)
// #define vll vector<ll>
// #define pb push_back
// #define po pop_back
// #define all(v) v.begin(),v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(v.begin(),v.end())
// signed main() {
// ios_base::sync_with_stdio(false);
// cin.tie(0);
// int t; cin>>t;
// while(t--){
//   int n,a,b; cin>>n>>a>>b;
//   int see = __gcd(a,b);
// 	vll v(n), ch(n);
// 	f(i,0,n) cin>>v[i];
// 	 f(i,0,n) ch[i] = v[i] %see;
// 	 sot(ch);
// 	 ll ans =ch[n-1] - ch[0];
// 	 f(i,1,n) {
// 		ll g = ch[i]-ch[i-1];
// 		ans = min(ans,see- g);
// 	 }
// 		cout<<ans<<"\n";
// }
// return 0;
// }
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
	int n,a,b;cin>>n>>a>>b;
	vll v(n);
	f(i,0,n) cin>>v[i];
	ll g = __gcd(a,b);
	f(i,0,n) v[i]%=g;
	sot(v);
	ll ans = v[n-1]- v[0];
	f(i,1,n){
		ans = min(ans,v[i-1]+g-v[i]);
	}
	cout<<ans<<"\n";
}
return 0;
}
