/**
 * writer:blinderchief
 **/
#include<bits/stdc++.h>
using namespace std;
/*
#define LOCAL
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) "india"
#endif
*/
#define ll long long
#define ull unsigned ll
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define vi vector<int>
#define pb emplace_back
#define po pop_back
#define me(a, x) memset(a, x, sizeof(a))
#define all(v) (v).begin(), (v).end()
#define rall(x) (x).rbegin(), (x).rend()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
#define sz(x) (int)(x).size()
#define inf 0x3f3f3f3f
const int mod = (int)(1e9 + 7);
//Small observations-Think,read Problem again
/*
8 cakes, 3
 

chol-4+2 =6-> 3; 

vni= 2->5

----
16

8+4+2=>14->7

8->4->2+7->9
--
4-2=2+3->5
4+2->6->3
--------
8
x= 7
y=16-7=9



*/
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
signed main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        ll k,x;cin>>k>>x;
        ll cho= 1LL<<k;
        ll van= 1LL<<k;
        if(cho==x){
            cout<<0<<'\n';
            continue;
        }
        ll y = (1LL<<(k+1))-x;
        vi ans;
        while(x!=(1ll<<k)){
            if(x<y){
                y-=x;
                x*=2;
                ans.pb(1);
            }else{  
                x-=y;
                y*=2;
                ans.pb(2);
            }
        }
        reverse(all(ans));
        cout<<ans.size()<<"\n";
        f(i,0,ans.size()){
            cout<<ans[i]<<" ";
        }
        cout<<'\n';
       
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}
