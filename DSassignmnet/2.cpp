#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
#define vll vector<ll>
#define pb push_back
#define po pop_back
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(),v.end())

signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int n,q; cin>>n>>q;
vector<int> v(n);
f(i,0,n){
  cin>>v[i];
}
sot(v);
    while (q--) {
        string s; int k;
        cin >> s>> k;
        if (s == "ADD") {
            auto pos = lower_bound(v.begin(),v.end(), k);
            v.insert(pos, k);
        } else if (s == "DEL") {
            auto pos = lower_bound(v.begin(), v.end(), k);
            if (pos != v.end() && *pos == k) {
                v.erase(pos);
            }
        }

        int res = 0;
        if (v.size() > 1) {
            res = v.back() - v.front();
        }

        cout << res <<'\n';
    }

    return 0;
}




// to erase in multiset we have to pass address to rease otherwise if value is passed every occurence of value will be erased





