/**
 * author: blinderchief
**/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i, a, n) for (int i = a; i < n; i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define po pop_back
#define all(v) v.begin(), v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        ll n, x;
        cin >> n >> x;
        
        vi b(n);
        vector<pair<int, bool>> a(n, {0, true});
        
        f(i, 0, n) {
            cin >> a[i].first;
        }
        
        f(i, 0, n) {
            cin >> b[i];
        }
        
        int cnt = 0;
        
        f(i, 0, n) {
            if (a[i].first > b[i]) {
                a[i].second = false;
                cnt++;
            }
        }
        
        f(i, 0, n) {
            if (x <= 0) break;
            if (a[i].second) {
              ll cal = x-(b[i]-a[i].first+ 1);
              if(cal>=0){
                x -= (b[i]-a[i].first + 1);
                cnt++;
              }
                
            }
        }
        
        if (cnt > (n / 2) + 1) yes
        
    }
    
    return 0;
}
