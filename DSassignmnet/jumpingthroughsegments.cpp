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
bool possible(vector<pair<ll,ll> > v, ll k) {
    pair<ll, ll> curr = make_pair(0, 0);
    f(i , 0 , v.size()){
        curr.first = max(curr.first - k, v[i].first);
        curr.second = min(curr.second + k , v[i].second);
 
        if(curr.first > curr.second) {
            return false;
        }
    }
 
    return true;
}
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){
    ll n; cin >> n;
    vector<pair<ll, ll> > v(n);
    for(auto &x : v) {
        cin >> x.first >> x.second;
    }
    ll low = 0, high = 1e12, ans = 0;
    while(low <= high) {
        ll mid = (low + high) >> 1;
        if(possible(v, mid)) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    cout << ans << "\n";
}
return 0;
}