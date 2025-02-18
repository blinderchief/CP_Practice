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

void func(ll i, ll l,ll r, ll k, vll &ans) {
    if (l == r) {
        ans[l] = i;
        return;
    }
    ll sz = r - l - 1;
    if (sz < 60 && (1LL << sz) < k) {
        ans[r] = i;
        func(i + 1, l, r - 1, k - (1LL << sz), ans);
    } else {
        ans[l] = i;
        func(i + 1, l + 1, r, k, ans);
    }
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){
  ll n ,k; cin>>n>>k;
  if (n - 1 < 60 && (1LL << (n - 1)) < k) {
        cout << "-1\n";
        continue;
} vll ans(n);
    func(1, 0, n - 1, k, ans); 
 
    for (auto i : ans)
        cout << i << ' '; 
    cout << '\n';
}
return  0;
}