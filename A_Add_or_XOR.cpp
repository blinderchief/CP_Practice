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
        int a,b,x,y; cin>>a>>b>>x>>y;
        if(a==b) cout<<0<<'\n';
        else if(a>b && a%2==0){
          cout<<-1<<'\n';
        } 
        else if(a>b && a%2==1 && a-1==b){
          cout<<y<<'\n';
        }
        else if(a>b && a%2==1 && a-1!=b){
          cout<<-1<<'\n';
        }
        else if(a<b){
          if(x<=y){
            cout<<(b-a)*x<<'\n';
          }
          else{
            if((a&1 && b&1 )|| (a%2==0 && b%2==0) ) cout<<((b-a)/2)*y+((b-a)/2)*x<<'\n';
            else if(a%2==1 && b%2==0) {
              int cal=((b-a)/2)+1;
              cout<<(cal)*y+(cal-1)*x+(x-y)<<'\n';
            }
            else{
              int cal=((b-a)/2)+1;
              cout<<(cal)*y+(cal-1)*x<<'\n';

            }
          }
        }
        else{
          cout<<-1<<'\n';
        }
    // 
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}