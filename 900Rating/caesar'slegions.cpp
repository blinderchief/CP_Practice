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
int n1, n2, k1, k2;
// n1 - footmen
// n2 - horsemen
// k1 - no consecutive footmen
// k2 - no consecutive horsemen
 
int dp[101][101][11][11];
 
int func(int n1, int n2, int cf, int ch) {
    //base case
    if(n1 == 0 && n2==0) return 1;
    // memoization check
    if(dp[n1][n2][cf][ch] != -1) return dp[n1][n2][cf][ch];
    int ans = 0;
    //footmen
    if(n1 > 0 && cf  < k1)
        ans = (ans + func(n1-1, n2, cf+1, 0))%100000000;
    //horsemen
    if(n2 > 0 && ch < k2) 
        ans = (ans + func(n1, n2-1, 0, ch+1))%100000000;
 
    // memoize and return
    return dp[n1][n2][cf][ch] = ans;
 
}

signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
 memset(dp, -1, sizeof dp);
    cin>>n1>>n2>>k1>>k2; 
    cout<<func(n1, n2, 0, 0)<<endl;
return 0;
}