
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i = a; i < n; i++)
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
    while (t--) {
        int n; cin >> n;
        // If n is odd
        if (n % 2 != 0) {
            vll ch(n);
            int a = 0, b = n - 1;
            
            f(i, 1, n + 1) {
                if (i % 2 == 0) {  
                    ch[b] = i; 
                    b--;
                } else {  
                    ch[a] = i; 
                    a++;
                }
            }
            
            f(i, 0, n) {
                cout << ch[i] << " ";
            }
            cout << '\n';
        }
        else {
            cout << -1 << '\n';
        }
    }
    return 0;
}
