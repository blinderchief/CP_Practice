// #include<bits/stdc++.h>
// using namespace std;
// using i64 = long long;
// void work()
// {
// 	int n, m, k;
// 	cin >> n >> m >> k;
// 	int cnt;
// 	cin >> cnt;
// 	vector<int> a(cnt), b;
// 	for(int i = 0; i < cnt; ++i) cin >> a[i];
// 	for(int i = 0; i < n; ++i){
// 		for(int j = 0; j < m; ++j){
// 			int w = min(min(i + 1, n - i), min(k, n - k + 1));
// 			int d = min(min(j + 1, m - j), min(k, m - k + 1));
// 			b.push_back(w*d);
// 		}
// 	}
// 	sort(a.rbegin(), a.rend());
// 	sort(b.rbegin(), b.rend());
// 	i64 ans = 0;
// 	for(int i = 0; i < a.size() && i < b.size(); ++i){
// 		ans += 1LL * a[i] * b[i];
// 	}
// 	cout << ans << "\n";
// }
// int main()
// {
// 	ios::sync_with_stdio(0);
// 	cin.tie(0);
// 	cout.tie(0);
// 	int t;
// 	cin >> t;
// 	while(t--)
// 		work();
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
	int n,m,k; cin>>n>>m>>k;
	int w; cin>>w;
	vll v(w);
	f(i,0,n){
		cin>>v[i];
	}
	vll ans;
		f(i,0,n){
		f(i,0,m){
			int top = 
		}
	}
}
return 0;
}