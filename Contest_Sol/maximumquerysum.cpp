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
int n,q; cin>>n>>q;
vector<int> v(n);
f(i,0,n){
  cin>>v[i];
}
vector<pair<int,int>> Q(q);
vector<int> freq(n,0);
int chkmin = INT_MAX; 
f(i,0,q){
  cin>>Q[i].first>>Q[i].second;
  Q[i].first--; Q[i].second--;
  freq[Q[i].first]++;
freq[Q[i].second+1]--;
}
for(int i= 1;i<n;i++){
  freq[i]+=freq[i-1];
}
sort(v.rbegin(),v.rend());
sort(freq.rbegin(),freq.rend());
ll sum =0;
for(int i =0;i<n;i++){
  sum+=(ll)v[i]*freq[i];
}
cout<<sum<<'\n';

return 0;
}

