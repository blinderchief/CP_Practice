
// /**
//  * writer:blinderchief 
// **/
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i,a,n) for(int i =a;i<n;i++)
// #define vll vector<ll>
// #define vi vector<int>
// #define pb push_back
// #define po pop_back
// #define me(a, x) memset(a, x, sizeof(a))
// #define all(v) v.begin(),v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(all(v))
// int main() {
// ios_base::sync_with_stdio(false);
// cin.tie(0);
// int t; cin>>t;
// while(t--){
  
// 	ll n;
// 	cin >> n ;
 
// 	vector <ll> v(n);
// 	f(i,0,n)
// 	cin >> v[i];
 
 
// 	bool check = true;
// 	ll a = 0, b = 0;
// 	ll ac = 0, bc = 0;
// 	f(i,0,n)
// 	{
// 		if (check)
// 		{
// 			a += v[i];
// 			ac++;
// 		}
// 		else
// 		{
// 			b += v[i];
// 			bc++;
// 		}
 
// 		check = !check;
// 	}
 
// 	ll sum = a + b;
// 	if (sum % n == 0)
// 	{
// 		ll x = sum / n;
 
// 		if (ac * x == a && bc * x == b)
// 		{
// 			yes
//       continue;
// 		}
// 	}
// 	no
// }
// return 0;
// }


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
	int n; cin>>n;
	vi v(n);
	f(i,0,n){
		cin>>v[i];
	}
	int cal = 0;
	f(i,0,n-1){
cal+=abs(v[i]-v[i+1]);
	}
	

}
return 0;
}