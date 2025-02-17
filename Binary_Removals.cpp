/**
 * writer:blinderchief
 **/
#include<bits/stdc++.h>
using namespace std;
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
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
int main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        ll n,x,k; cin>>n>>x>>k;
        string s; cin>>s;
        int cnt0=0;
        ll total =0;
        int cbt1=0;
       for(int i =n-1;i>=0;i--){
      
          if(s[i]=='0'){
            cnt0++;
          }
          else{
            total+=cnt0;
            cbt1++;
          }
       }
       if(total<=x && total%k==0){
        cout<<1<<"\n";
       }
       else{
        cout<<2<<'\n';
       }
      
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
   //cerr << "Time taken: " << (float)clock() / CLOCKS_PER_SEC << " secs" << '\n';
    return 0;
}