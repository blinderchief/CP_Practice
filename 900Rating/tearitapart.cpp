// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long int 
// #define f(i,n) for(int i = 0; i < n; i++)

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t;

//     while (t--) {
//         string s;
//         cin >> s;
//         int n = s.size();
//         int res = n;
//         for(char c ='a'; c<='z';c++){
//           int pocket = 0;
//           for(int i =1, curr=(s[0]==c?0:1);i<n;i++){
//             pocket = max(curr,pocket);
//             if(s[i]==c) curr =0;
//             else curr++;
//             pocket = max(curr,pocket);
//           }
//             int steps = 0;
//             while(pocket>0)
//             {
//               steps++;
//               pocket= pocket/2;
//             }
//             res = min(res,steps);
//           }
//           cout<<res<<'\n';
        
//     }
//            return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,n) for(int i =0;i<n;i++)
#define sot(v) sort(v.begin(),v.end())
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){
string s; cin>>s;
ll n = s.size();
ll cnt = INT_MAX;
map<char,vector<ll>> mp;
f(i,n){
  mp[s[i]].push_back(i);
}
for(const auto &x:mp){
char ch = x.first;
ll maxi = 0;
vector<ll> v = x.second;
ll sz = v.size();
maxi = v[0]-0;
for(int i =1;i<sz;i++){
  maxi = max(maxi, v[i]-v[i-1]-1);
}
maxi  = max(maxi , n-1-v[sz-1]);
cnt = min(cnt, maxi);
}
if(cnt==0){
  cout<<0<<'\n';
  continue;
}
ll ans = (ll)log2(cnt)+1;
cout<<ans<<'\n';

}
return 0;
}