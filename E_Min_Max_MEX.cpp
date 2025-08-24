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
*/
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
signed main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n,k;cin>>n>>k;
        vll v(n);
        f(i,0,n) cin>>v[i];
        auto check = [&](int m)-> bool {
            if(m==0) return true;
            vector<int> freq(m,0);
            int flag=m;    
            int found =0;
            for(auto &x:v){
                if(x<m){
                    if(freq[x]==0)  flag--;
                    freq[x]++;
                    if(flag==0)   {
                        fill(all(freq),0);
                        flag= m;
                        found++;                    
                    }
                    if(found>=k) return true;
                }
            }
            return found>=k;
        };
        int lo = 0,hi =n,ans=n;
        while(lo<=hi){
            int mid =( lo+hi)/2;
            if(check(mid)){
                ans = mid;
                lo = mid+1;
            }
            else{
                hi= mid-1;
    }
     
}
cout<<ans<<'\n';
        
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}