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
   int n,q; cin>>n>>q; 
  set<int>cnt1s;
  vi  ans;
   while(q--){
    int l,r;cin>>l>>r;
     if(l==1) {
      if(cnt1s.count(r)){
        cnt1s.erase(r);
      }
      else{
        cnt1s.insert(r);
      }
     }
     else{
      if(cnt1s.empty()){
        ans.pb(-1);
        continue;
      }
      vi temp;
      int ch1=-1 ,ch2=-1;
      auto it = cnt1s.lower_bound(r);
      if(it!=cnt1s.end()){
        ch2 = *it;
      }
      if(it!=cnt1s.begin()){
        ch1 = *prev(it);
      }
      if(ch1!=-1) temp.pb(ch1);
      if(ch2!=-1) temp.pb(ch2);
      int best =-1;
      int  min_dis = INT_MAX;
   for(auto& i:temp){
        int cal = abs(i-r);
        if(cal<min_dis || cal==min_dis && i<r){
          min_dis = cal;
          best = i;
        }
      }
      ans.pb(best);
     }
    }
    for(auto i: ans){
      cout<<i<<" ";
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}

