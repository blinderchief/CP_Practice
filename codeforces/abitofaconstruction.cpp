#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define pb push_back
#define all(v) v.begin(),v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(),v.end())
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        if(n==1) {cout<<k<<'\n';continue;}
        ll check =0;
        while(2*check+1 <=k){
          check = 2*check+1;
        }
     cout<<check<<" ";
     cout<<k-check<<" ";
        f(i,0,n-2){
          cout<<0<<" ";
        } 
        cout<<'\n';
    }
    
    return 0;
}
