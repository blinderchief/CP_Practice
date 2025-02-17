
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
#define vll vector<ll>
#define pb push_back
#define all(v) v.begin(),v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(),v.end())
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; 
    cin >> t; 
    while(t--) {
        int n, q; 
        cin >> n >> q; 
        vll v(n); 
        f(i, 0, n) {
            cin >> v[i];
        }
        map<int, int> mp;
         f(i, 1, n + 1) {
          int chk = (n - i + 1) * (i - 1);
                int cal = chk + (n - i);
                mp[cal]++;
                if (i < n) {
                    int ck = v[i] - v[i - 1] - 1;
                    if (ck > 0) {
                        int cl = (n - i) * i;
                        mp[cl] += ck;
                    }
                }
            }
        while(q--) {
            ll k; 
            cin >> k;  
            cout << mp[k] << " ";
        }
        cout << '\n'; 
    }

    return 0;
}

