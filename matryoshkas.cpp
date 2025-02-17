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
  ll n; cin>>n;
  vll v(n);
  map<int,int> mp;
  ll chek =0;
  f(i,0,n){
    cin>>v[i];
    mp[v[i]]++;
    if(mp[v[i]]==1){
      chek++;
    }
  }
  sot(v);
  unique(all(v));
  ll curCnt = 0,ans =0;
  ll last = v[0] -1;
  f(i,0,chek){
 if (v[i] == last + 1) {
				if (mp[last] <= mp[v[i]]) {
					curCnt += mp[v[i]] - mp[last];
				}
				else {
					ans += mp[last] - mp[v[i]];
					curCnt = mp[v[i]];
				}
				last = v[i];
			}
			else {
				ans += curCnt;
				curCnt = 0;
				last = v[i] - 1;
				if (mp[last] <= mp[v[i]]) {
					curCnt += mp[v[i]] - mp[last];
				}
				else {
					ans += mp[last] - mp[v[i]];
					curCnt = mp[v[i]];
				}
				last = v[i];
			}
		}
		ans += curCnt;
		cout << ans << "\n";
  }

  
return 0;
}



	