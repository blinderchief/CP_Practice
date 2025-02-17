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
    
    int t; 
    cin >> t;
    
    while (t--) {
        int m;
        cin >> m;
        
        map<int, int> store;
        vector<vector<int>> v(m);
        
        for (int j = 0; j < m; j++) {
            int n; 
            cin >> n;
            v[j].resize(n); 
            f(i, 0, n) {
                int a; 
                cin >> a;
                v[j][i] = a;
                store[a]++;
            }
        }

        map<int, int> l;
        for (auto it = store.begin(); it != store.end(); it++) {
            l[it->second]++;
        }
   auto it = l.begin();
        if (it->first>1 && l.size() == 1) {
            cout << -1 << '\n';
        } else {
            for (int j = 0; j < m; j++) { 
                bool chk = true;
                f(i, 0, v[j].size()) {
                    if (chk && store[v[j][i]] == 1) {
                        cout << v[j][i] << " ";
                        chk = false;
                    } else {
                        if (store[v[j][i]] != 0) store[v[j][i]]--;
                    }
                }
            }
            cout << '\n';
        }
    }

    return 0;
}
