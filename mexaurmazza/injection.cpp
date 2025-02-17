#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
#define vll vector<ll>
ll n, k, d, w;
vll v;
bool chek(ll a) {
   ll i =0; 
   ll cnt =0;
   while(i<n && cnt<a){
    int see= k;
    int j = i;
  
   }
   return cnt==a;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k >> d >> w;
        v.resize(n);
        f(i, 0, n) {
            cin >> v[i];
        }
        int cnt =0;
        f(i,0,n){
            int j =i;
        while(j<n && j-i<k && v[j]-v[i]<=w+d){
       j++;
    }
    i = j-1;
    cnt++;
        }
        cout<<cnt<<'\n';
    }
    return 0;
}

