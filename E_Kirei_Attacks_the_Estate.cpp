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
void dfs(int parentNode, int currentNode, vll &v,vector<vll> &adj,vll &maxprofit, vll &maxloss ){
    if(parentNode!=-1){
        maxprofit[currentNode] = max(v[currentNode],v[currentNode]-maxloss[parentNode]);
        maxloss[currentNode]= min(v[currentNode],v[currentNode]-maxprofit[parentNode]);
    }
    else{
        maxprofit[currentNode] = v[currentNode];
        maxloss[currentNode]=0;
    }
    for(auto &child:adj[currentNode]){
        if(child!=parentNode){
            dfs(currentNode,child,v,adj,maxprofit,maxloss);
        }
    }
}
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
signed main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vll v(n);
        f(i,0,n)cin>>v[i];
        vector<vll> adj(n);
        f(i,0,n-1){
            int u,v;
            cin>>u>>v;
            u--;v--;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        vll maxprofit(n,0),maxloss(n,0);
        dfs(-1,0,v,adj,maxprofit,maxloss);
        f(i,0,n){
            cout<<maxprofit[i]<<" ";
        }
        cout<<'\n';

        
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}