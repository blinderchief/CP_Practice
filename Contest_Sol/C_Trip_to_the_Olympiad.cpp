
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
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
ll find(ll l, ll r) {
    ll x = l ^ r; 
    ll msb = 0;   
    while (x > 0) {
        msb++;
        x >>= 1;
    }
    return msb-1; 
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
auto begin = chrono::high_resolution_clock::now();
int t; cin>>t;
while(t--){
   ll l, r;
        cin >> l >> r;
        ll msb = find(l, r);
        ll l_special = l | ((1LL << msb)-1); 
        ll r_special = r & ~((1LL << msb)-1); 
        vector<ll> ca = {l, r, l_special, r_special};
       sot(ca);
        ca.erase(unique(all(ca)), ca.end());
        ll max_value = 0;
        ll best_a =-1, best_b = -1, best_c = -1;

        for (size_t i = 0; i < ca.size(); i++) {
            for (size_t j = i + 1; j < ca.size(); j++) {
                for (size_t k = j + 1; k < ca.size(); k++) {
                    ll a = ca[i];
                    ll b = ca[j];
                    ll c = ca[k];
                    ll cal = (a ^ b) + (b ^ c) + (a ^ c);

                    if (cal > max_value) {
                        max_value = cal;
                        best_a = a;
                        best_b = b;
                        best_c = c;
                    }
                }
            }
        }

        cout << best_a << " " << best_b << " " << best_c << '\n';
}
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   cout << "Time taken: " << elapsed.count() * 1e-6 << " milliseconds" << '\n';

return 0;
}
