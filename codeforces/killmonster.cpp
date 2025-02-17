#include<bits/stdc++.h>
using namespace std;
#define int long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
#define vll vector<int>
#define pb push_back
#define po pop_back
#define all(v) v.begin(),v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(),v.end())
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){
  int n,x,k;cin>>n>>x>>k;
  vll v(n),unique(n),OnlyOne(n);
   map<int,int> mp;
  f(i,0,n) cin>>v[i];
  sot(v);
  f(i,0,n) {
    mp[v[i]]++;
    unique[i] = mp.size();
  }
  f(i,0,n) {
    if(mp[v[i]]==1) OnlyOne[i] = 1;
  }
  partial_sum(OnlyOne.begin(), OnlyOne.end(), OnlyOne.begin());
  int index = lower_bound(all(v),x) - v.begin() -1;
  int secondindex  =  lower_bound(all(v),x*k) - v.begin()-1;
  int ans =0; 
  if(secondindex!=-1)  ans  =  unique[secondindex];
  auto solve = [&](int indx) -> int{
    int val = v[indx]*k;
    int ind = lower_bound(all(v),val) - v.begin()-1;
    if(ind==-1) return 0;
    return unique[ind] - (ind>=indx ? OnlyOne[min(index,ind)] - (indx ? OnlyOne[indx-1] : 0ll): 0ll); 
  };
  int cnt =0;
 for(int i =index; i>=0;i--){
  if(x>v[i]){
    cnt++;
    ans = max(ans,cnt+ solve(i));
    x = v[i];
  }
 }
 cout<<ans<<'\n';
}
return 0;
}