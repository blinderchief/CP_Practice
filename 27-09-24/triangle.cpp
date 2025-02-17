#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
#define vll vector<ll>
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
  int n; cin>>n;
  vll v(n);
  f(i,0,n) cin>>v[i];
  int cnt =0;
  sot(v);
  vector<int> freq(n,0);
  f(i,0,n-1){
  ll call =  v[i+1]-v[i]+1;
  ll calr = v[i+1]+v[i]-1;
   freq[call]++;
   if(calr+1<n) freq[calr+1]++;
  }ll cur=0,prev=-1;
  f(i,0,n){
  cur+=freq[i];
  if(prev!=-1 && freq[prev] >0) cnt+=(i-prev);
  freq[i] = cur;
  prev = i;
  }
  cout<<cnt<<"\n";

}
return 0;
}