/**
 * writer:blinderchief
 **/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define po pop_back
#define me(a, x) memset(a, x, sizeof(a))
#define all(v) v.begin(), v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
int main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n;cin>>n;
        vll v(n);
        f(i,0,n)cin>>v[i];
        if(n==1) {
          if(v[0]%2==0) cout<<1<<'\n';
          else cout<<0<<'\n';
          continue;
        }
        int cnte=0;int cnto=0;
        f(i,0,n){
            if(v[i]%2!=0){
              cnto++;
            }
            else cnte++;
        }
        if(cnto==0){
          cout<<1<<'\n';
        }
        else if(cnte==0){
          cout<<cnto-1<<'\n';
        }
        else{
          cout<<cnto+1<<'\n';
        }
    }

    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}