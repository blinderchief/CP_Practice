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
    
    while(t--){
        int n, ch = 0; 
        cin >> n;
        
        vll v(n + 1), u(n + 1), res(n + 1);
        
        f(i, 1, n + 1) {
            cin >> v[i];
        }
        
        f(i, 1, n + 1) {
            res[n - i + 1] = v[i];
        }
        
        f(i, 1, n + 1) {
            cin >> u[i];
            if(u[i] != v[i]) ch = 1; 
        }
        
        if(ch) {
            ch = 0;
            f(i, 1, n + 1) {
                if(u[i] != res[i]) { 
                    ch = 1; 
                    break; 
                }
            }
        }
        if(!ch){
            cout << "Bob" << '\n';
        } else {
            cout << "Alice" << '\n';
        }
    }
    
    return 0;
}
