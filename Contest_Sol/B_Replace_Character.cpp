/**
 * writer:blinderchief 
**/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define po pop_back
#define me(a, x) memset(a, x, sizeof(a))
#define all(v) v.begin(),v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){
  int n;cin>>n;
  map<char,int> mp;
  vector<char> v(26,0);
  string s;cin>>s;
  f(i,0,n){
    mp[s[i]]++;
  }
  
    int see= 0;
    char c;
    for (auto& chk : mp) {
        if (chk.second > see) {
            c = chk.first;
            see = chk.second;
        }
    }

  
  char sa;
    int flag = INT_MAX;

    for(auto it=mp.begin() ;it!=mp.end();it++) {
        if (it->first == c) continue;
        else if(it->second < flag) {
           flag = it->second;
            sa = it->first;
        }
    }
    for (int i = 0; i < n; i++) {
        if (s[i] == sa) {
            s[i] = c;
            break;
        }
    }
    cout << s << '\n';


  
}
return 0;
}
