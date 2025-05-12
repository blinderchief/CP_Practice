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
#define int long long
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<int>
#define pb push_back
#define po pop_back
#define me(a, x) memset(a, x, sizeof(a))
#define all(v) v.begin(), v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
#define sz(x) (int)(x).size()
#define INF (int)9e18;
const int mod = (int)(1e9 + 7);
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
signed main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin>>n;
        vector<vector<int>> dp(n,vector<int>(n,-1));
        dp[0][0]=0;
        int dx=1,dy=0,x=0,y=0;
        f(i,0,n*n-1){
            if(dx+x>=n||dy+y>=n || dy+y<0 || dx+x<0 || dp[x+dx][y+dy]!=-1){
                if(dx==1&&dy==0)
                {
                    dx=0;
                    dy=1;
                }
                else if(dx==0&&dy==1)
                {
                    dx=-1;
                    dy=0;
                }
                else if(dx==-1&&dy==0)
                {
                    dx=0;
                    dy=-1;
                }
                else
                {
                    dx=1;
                    dy=0;
                }
            }
            x+=dx;
            y+=dy;
            dp[x][y]=i+1;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<n*n-1-dp[i][j]<<' ';
            }
            cout<<'\n';
        }

    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}