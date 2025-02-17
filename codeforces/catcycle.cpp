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
        ll n,k; cin>>n>>k;
        if(n % 2 == 0) {
            cout << (k % n == 0 ? n : k % n) << '\n';
        } else {
            ll shift = (k - 1) / (n / 2);
            ll r = (k + shift) % n;
            cout << (r == 0 ? n : r) << '\n';
        }
    }
    return 0;
}
