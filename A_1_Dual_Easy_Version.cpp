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
#define INF (int)1e18
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
int main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
      int n;
      cin>>n;
      vi arr(n);
      bool pos = false;
      int lar=0;
      for(int i=0;i<n;++i){
           cin>>arr[i];
           if(arr[i]>0){
              pos = true;
              if(arr[lar] < arr[i]) lar = i;
           }
      }
      if(n==1){
          cout<<0<<'\n';
          continue;
      }
      if(pos == false){
          cout<<n-1<<'\n';
          for(int i=n-2;i>=0;--i)
          {
              cout<<i+1<<" "<<i+2<<'\n';
          }
      }
      else{
          cout<<5+2*(n-1)<<'\n';
          for(int i=0;i<5;++i){
              arr[lar] = 2*arr[lar];
              cout<<lar+1<<" "<<lar+1<<'\n';
          }
          cout<<2<<" "<<lar+1<<"\n"<<2<<" "<<lar+1<<'\n';
          for(int i=2;i<n;++i)
          {
              cout<<i+1<<" "<<i<<"\n"<<i+1<<" "<<i<<"\n";
          }
      }
      cout<<'\n';
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}