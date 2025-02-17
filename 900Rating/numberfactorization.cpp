// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i,a,n) for(int i =a;i<n;i++)
// #define vll vector<ll>
// #define pb push_back
// #define po pop_back
// #define all(v) v.begin(),v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(v.begin(),v.end())
// signed main() {
// ios_base::sync_with_stdio(false);
// cin.tie(0);
// int t; cin>>t;
// while(t--){  
//  ll n;
//     cin>>n;
//     vll a;
//     map<ll,ll> mpp;
//     ll cnt=n;
//     ll mx=1;
//     for(int i=2;i*i<=n;i++){
//         if(cnt%i==0){
//             ll cnt1=0;
//             while(cnt%i==0){
//                 cnt1++;
//                 cnt/=i;
//             }
//             mpp[i]=cnt1;
//             mx=max(mx,cnt1);
//         }
//     }
//     if(cnt!=1){
//         mpp[cnt]=1;
//     }
//     ll ans=0;
//     f(i,0,mx){
//         ll current=1;
//         for(auto &x:mpp){
//             if(x.second>0){
//                 mpp[x.first]--;
//                 current*=(x.first);
//             }
//         }
//         ans+=current;
//     }
//     cout<<ans<<endl;
// }
// return 0;
// }
 

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

vll primeFactors(ll n) {
    vll factors;
    while (n % 2 == 0) {
        factors.push_back(2);
        n /= 2;
    }

    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 2) {
        factors.push_back(n);
    }
    return factors;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; 
    cin >> t;
    
    while (t--) {
        ll n;
        cin >> n;
        
        vll chek = primeFactors(n);
        map<int, int> mp;
        
        f(i, 0, chek.size()) {
            mp[chek[i]]++;
        }
        
        vector<pair<ll, ll>> v;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            v.push_back({it->second, it->first});
        }
        
        sort(v.begin(), v.end());
        
        ll ans = 0;
         for (int i = 0; i < v.size() - 1; i++) {
            ll sto = 1;
            int chk = i;
            ll min_count = v[i].first;
            while (chk < v.size() && v[chk].first >= min_count) {
                sto *= v[chk].second;  
                v[chk].first -= min_count; 
                chk++;
            }
                ans += sto * min_count;
        }
        
        ans += v[v.size() - 1].first * v[v.size() - 1].second;
        
        cout << ans << '\n';
    }
    
    return 0;
}
