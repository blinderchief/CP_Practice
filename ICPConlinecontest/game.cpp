#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int mod  = 998244353;
vector<ll> nums(23); 
ll dp[4000006];    



void solve() {
  ll n; 
    cin >> n;
   for (int i = 2; i <= 22; i++) {
        nums[i]= (nums[i - 1] * 2) + (1ll << (i));
    }
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;  
    for (int i = 0; i < 23; i++) {
        for (int weight = 1; weight <= 4e6; weight++) {
          if((weight - nums[i])<0) continue; 
            (dp[weight] += dp[weight - nums[i]])%=mod;
        }
    }
    for(int i =0;i<n;i++){
      ll x;cin>>x;
      cout << dp[x] <<'\n';
    }
}

int main() {
    
    int t =1; 
    
    while (t--) {
        solve();
    }
    return 0;
}
