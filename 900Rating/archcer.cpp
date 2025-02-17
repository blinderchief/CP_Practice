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

//   int a,b,c,d; cin>>a>>b>>c>>d;
//  	double res = ((double)(a*d))/(b*d-(b-a)*(d-c));
//   cout<<setprecision(9)<<res<<'\n';

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
int a,b,c,d;cin>>a>>b>>c>>d;
double p = (double)a/b; double q = (1-(double)c/d)*(1-(double)a/b);
double ans = ((double)p/(1.0-q));
cout<<setprecision(9)<<ans<<'\n';
return 0;
}