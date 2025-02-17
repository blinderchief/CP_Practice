#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define pb push_back
#define po pop_back
#define all(v) v.begin(), v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(), v.end())

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; 
    cin >> t;
    
    while(t--) {
        ll n;
        cin >> n;
        
        vector<string> v(n);
        f(i, 0, n) {
            cin >> v[i];
        } 
        
        vector<int> ans(7, 0);  

        f(i, 0, 7) {
            int sum = 0;
            f(j, 0, n) {
                sum += (v[j][i] - '0');  
            }
            ans[i] = sum;
        }

        int ch = *max_element(ans.begin(), ans.end());
        cout << ch << '\n';
    }
    
    return 0;
}
