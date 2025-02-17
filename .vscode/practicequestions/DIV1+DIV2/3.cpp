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
    int t; cin >> t;
    while(t--){
        int n, flag = 1; cin >> n;
        ll s1, s2, d1, d2;

        vector<pair<ll,ll>> v(n);
        f(i,0,n){
            cin >> v[i].first >> v[i].second;
        }
        cin >> s1 >> s2 >> d1 >> d2;

        ll chk = (d1-s1)*(d1-s1) + (d2-s2)*(d2-s2);  

        f(i,0,n){
            ll ch1 = v[i].first - d1;
            ll ch2 = v[i].second - d2;
            if((ch1 * ch1 + ch2 * ch2) <= chk ){  
                flag = 0;
                break;
            }
        }
        if(flag){
            yes
        } else {
            no
        }
    }
    return 0;
}

