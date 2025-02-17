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
//   int n;cin>>n;
//   vector<int> v(n);
//   f(i,0,n) cin>>v[i];


// }
// return 0;
// }

#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin >> n;
	int a[n];
	for(int i = 0;i < n;i++) cin >> a[i];
	int ans = 1;
	for(int k = 1;k<n;k++){
		if(n%k)continue;
		int g = 0;
		for(int i = 0;i+k<n;i++){
			if(a[i+k] != a[i]) g = __gcd(g, abs(a[i+k]-a[i]));  // if  two number are not equal then to get the same remainder after dividing them by some integer by subtracting both number ,the result will be the common remainder 
		}
		if(g != 1) ans++;
	}
	cout << ans << '\n';
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;cin >> t;
	while(t--) solve();
}