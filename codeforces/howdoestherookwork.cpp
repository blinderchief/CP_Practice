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
const ll MOD = 1000000007;
const int N = (int)3e5 + 5;
int n,k;
int dp[N];
void check(){
  dp[0]=1,dp[1]=1;
  f(i,2,MOD){
    dp[i] = dp[i-1]+ 2ll*(i-1)*dp[i-2]%MOD;
    dp[i]%=MOD;
  }
}
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
check();
int t; cin>>t;
while(t--){
   cin>>n>>k;
  vector<pair<int,int>> cor(k);
    ll cnt =n;
  f(i,0,k){
    cin>>cor[i].first;
    cout<<cor[i].second;
    if(cor[i].first !=cor[i].second) cnt-=2;
    else cnt--;
  }
  cout<<dp[cnt]<<'\n';

}
return 0;
}

