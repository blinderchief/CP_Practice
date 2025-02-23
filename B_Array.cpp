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
    ll n,k;
  cin>>n>>k;
  vector<ll> vect(n);
  for(ll i=0;i<n;i++) cin>>vect[i];
  map<ll,ll> m;
  ll dis = 0, p = 0,q = 0;
  while(q<n){
    auto it = m.find(vect[q]);
    if(it==m.end()){
      dis++;
      m.insert({vect[q],1});
    }else{
      it->second++;
    }
    if(dis==k) break;
    q++;
  }
  if(dis<k){
    cout<<-1<<" "<<-1<<"\n";
    return 0;
  }
  ll len = q + 1;
  ll l = p;
  ll r = q;
  while(q<n-1){
    auto it = m.find(vect[p]);
    if(dis==k){
      it->second--;
      if(it->second==0) dis--;
      p++;
    }
    if(dis<k){
      it = m.find(vect[q + 1]);
      if(it==m.end() || it->second==0){
        if(it==m.end()){
          m.insert({vect[q + 1],1});
        }else{
          it->second++;
        }
        dis++;
      }else it->second++;
      q++;
     }
    if(dis==k) {
      if(q - p + 1<len){
        len = q - p + 1;
        l = p;
        r = q;
      }
    }
  }
  while(dis==k){
    auto it = m.find(vect[p]);
    it->second--;
    if(it->second==0) break;
    p++;
    len = q - p + 1;
    l = p;
    r = q;
  }
  cout<<l + 1<<" "<<r + 1<<"\n";
  return 0;
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}