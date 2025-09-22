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
 - Collect indices of '1' (cuts). Let prev = 0 (sentinel).
 - For each cut at position R:
 
     L = prev + 1, len = R - prev
     if len == 2 -> impossible (output NO)
     if len == 1 -> p[R] = R
     if len >= 3 -> fill positions L..R-1 with values R-1, R-2, ..., L
                     and p[R] = R
   After processing all cuts, handle the tail (prev+1 .. n):
     tailLen = n - prev
     if tailLen == 1 -> impossible (output NO)
     if tailLen >= 2 -> rotate values in this block by +1 (cyclic shift),
                        i.e., p[L] = L+1, ..., p[n-1] = n, p[n] = L
 - If there are no '1's at all, output any permutation with no fixed points:
     choose descending n..1 (safe because n >= 2).
*/
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
signed main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin>>n;
        string s;cin>>s;
        vi p(n+1);
        bool cj  = false;
      vi one;
    for (int i = 0; i < n; ++i) if (s[i] == '1') one.pb(i + 1);
      f(i,0,n){
        if(s[i]=='0'){
          cj =true;
          break;
        }
      }
      if(!cj){
      yes
      f(i,0,n){
        cout<<i+1<<" ";
      }
      cout<<'\n';
      continue;
      }
      else{
        
         f(i,0,n){
        if(s[i]=='1'){
          cj =true;
          break;
        }
      }
        if(!cj){
          f(i,0,n){
            cout<<i+2<<" ";
          }
          cout<<'\n';
          continue;
        }
        else{
          
        bool ok = true;
        int prev = 0;
        for (int i = 0; i < one.size() && ok; i++) {
            int R = one[i];
            int L = prev + 1;
            int len = R - prev; 
            if (len == 2) {
                ok = false; 
                break;
            }
            if (len == 1) {
                p[R] = R;
            } else { 
               
                for (int j = 0; j <= len - 2; j++) {
                    p[L +j] = R - 1 - j;
                }
                p[R] = R;
            }
            prev = R;
        }

        int ans = n - prev;
        if (ans == 1) ok = false; 
        if (!ok) {
          no
            continue;
        }

        if (ans >= 2) {
            for (int i = prev + 1; i < n;i++) p[i] = i + 1;
            p[n] = prev + 1;
        }
        yes
        for (int i = 1; i <= n; ++i) {
            cout << p[i] << " ";

        }
        cout<<'\n';
        }

      }

    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}





