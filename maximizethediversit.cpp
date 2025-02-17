
#include<bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){

    int n,k; cin>>n>>k;
    map<int, int> mp;
    for(int i=0;i<n;i++) {
        int x; cin>>x;
        mp[x]++;
    }

    multiset<int> ms;
    int ans = (n*(n-1))/2;
    for(auto e:mp){
        if(e.second > 1){
            ms.insert(e.second);
        }
    }
    while(ms.size() && k){
        int y = *ms.rbegin();
        ms.erase(ms.find(y));
        y--;
        k--;
        if(y > 1){
            ms.insert(y);
        }
    }

    for(auto e:ms){
        ans -= (e*(e-1))/2;
    }

    cout<<ans<<'\n';
}

int32_t main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t = 1; cin>>t;
while(t--){
solve();
}

return 0;
}
