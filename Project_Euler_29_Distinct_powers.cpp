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
/* Small observations-Think,read Problem again
*/
const int N=1e5+5;
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
vector<int>b(20);
set<int>s;
vector<bool>temp(N);
signed main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
        int n;cin>>n;
        int power = 0, temp_val = 1;
        while(temp_val*2<=n){
            temp_val*=2;
            power++;
        }
        for(int i =1;i<=power;i++){
            int j =2;
            while(j<=n){
                s.insert(i*j);
                j++;
            }
            b[i]=s.size();
        }
        ll ans=0;
        for(int i =2;i<=n;i++){
            if(!temp[i]){
                power=1;
                for(ll j =(ll)i*i;j<=n;j*=(ll)i){
                    temp[j]=1;
                    power++;
                }
                ans+=b[power];
            }
        }
        cout<<ans<<'\n';
        

    
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}
