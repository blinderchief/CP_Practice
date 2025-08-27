// // /**
// //  * writer:blinderchief
// //  **/
// // #include<bits/stdc++.h>
// // using namespace std;
// // /*
// // #define LOCAL
// // #ifdef LOCAL
// // #include "algo/debug.h"
// // #else
// // #define debug(...) "india"
// // #endif
// // */
// // #define ll long long
// // #define ull unsigned ll
// // #define f(i,a,n) for(int i = a; i < n; i++)
// // #define vll vector<ll>
// // #define vi vector<int>
// // #define pb emplace_back
// // #define po pop_back
// // #define me(a, x) memset(a, x, sizeof(a))
// // #define all(v) (v).begin(), (v).end()
// // #define rall(x) (x).rbegin(), (x).rend()
// // #define no cout << "NO" << '\n';
// // #define yes cout << "YES" << '\n';
// // #define sot(v) sort(all(v))
// // #define sz(x) (int)(x).size()
// // #define inf 0x3f3f3f3f
// // const int mod = (int)(1e9 + 7);
// // //Small observations-Think,read Problem again
// // /*
// // 1 23 4 7
// // 1 3 6 10 17 
// // 1 2 3 4 7
// // */
// // mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
// // signed main() {
// //     auto begin = chrono::high_resolution_clock::now();
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(0);
    
// //         int n;cin>>n;
// //         vll v(n);
// //         f(i,0,n) cin>>v[i];
// //       ll ac = accumulate(all(v),0ll);
// //         if(ac&1){
// //           cout<<1<<"\n";
// //     }
// //     else{
// //       cout<<0<<'\n';
// //     }
// //     auto end = chrono::high_resolution_clock::now();
// //     auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
// //    //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
// //     return 0;
// // }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int ac = accumulate(v.begin(), v.end(), 0);
    int target = ac/ 2;

    // dp[i] = whether we can form sum i
    vector<bool> dp(target + 1, false);
    dp[0] = true;

    for (int num : v) {
        for (int j = target; j >= num; j--) {
            if (dp[j - num]) dp[j] = true;
        }
    }

    int best = 0;
    for (int j = target; j >= 0; j--) {
        if (dp[j]) {
            best = j;
            break;
        }
    }

    int min_diff = ac - 2 * best;
    cout << min_diff << "\n";
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
	int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
	if(n==1){
		cout << a[0] << endl;
		return 0;
	}
    vector<pair<vector<int>,vector<int>>> res;

    int m = 1<<n;
    for(int j=1;j<m-1;j++){
        vector<int> L,R;
        for(int i=0;i<n;i++){
            if(j>>i & 1) L.push_back(a[i]);
            else R.push_back(a[i]);
        }
        res.push_back({L,R});
    }

    int ans = INT_MAX;
    for(auto &p:res){
        int s1=0,s2=0;
        for(int i=0;i<p.first.size();i++){
            s1 += p.first[i];
        }
        for(int i=0;i<p.second.size();i++){
            s2 += p.second[i];
        }
        ans = min(ans, abs(s2-s1));
    }
    cout << ans << endl;
    return 0;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
	int t=1;
	//cin >> t;
	while(t--){
	 solve();
	}
}
