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
vector<pair<pair<int,int>,pair<int,int>>> ops;
 
array<vector<int>,2> arr;
vector<pair<int,int>> pos;
 
void Swap(int a, int b, int c, int d) {
    swap(arr[a][b], arr[c][d]);
    ops.push_back(make_pair(make_pair(a,b), make_pair(c,d)));
    pos[arr[a][b] - 1] = make_pair(a,b);
    pos[arr[c][d] - 1] = make_pair(c,d);
}
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
signed main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n;  cin>>n;
        ops.clear();
        arr[0].resize(n);
        arr[1].resize(n);
        pos.resize(2*n);
        for(int i =0;i<2;i++){
          for(int j =0;j<n;j++){
            cin>>arr[i][j];
          }
        }
        for(int i =0;i<2;i++){
          for(int j =0;j<n;j++){
            pos[arr[i][j]-1] = make_pair(i,j);
          }
        }
        for(int i =0;i<2*n;i++){
          auto cur= pos[i];
          if(cur.first != i%2){
            Swap(cur.first,cur.second,1-cur.first,cur.second);
            cur.first  = 1- cur.first;          }
            while(cur.second>i/2){
              Swap(cur.first,cur.second,cur.first,cur.second-1);
              cur.second--;
            }
        }
        cout<<ops.size()<<"\n";
        for(auto x:ops) {
          if(x.first.first==x.second.first){
            cout<<x.first.first +1<<" "<<max(x.first.second,x.second.second)<<'\n'; 
          }
else{
  cout<<3<<" "<<x.first.second +1<<'\n';
}
        }     
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}