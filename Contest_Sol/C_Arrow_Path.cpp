#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
#define vll vector<ll>
#define vi vector<int>
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
  ll n;
  string cur,sub;
  cin >> n;
    cin >> cur >> sub;
    cur = " " + cur;
    sub = " " + sub;
    if(n == 2) {yes continue;}
    int i = 1;
    int flag  =1;
    while(i < n) {
        if(cur[i+1] == '<') {
            if(sub[i] == '<') {flag =0;break;}
            swap(cur,sub);
            i+=1;
            continue;
        }
        i += 2;
    }
   if(flag) yes
   else no
}
return 0;
}