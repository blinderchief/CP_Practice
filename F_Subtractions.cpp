/**
 * writer: blinderchief
 **/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i = a; i < n; i++)
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n; 
    cin >> n; 
    while (n--) {
        int op = 0;
        ll a, b;
        cin >> a >> b;
         if(a==b) {
            cout<<1<<'\n';
            continue;
         }
        if (a > b) swap(a, b);

        while (b - a != 0) {
            if (a == 0) break; 
            int qu = b / a;
            op += qu;
            b -= qu * a;
            if (a > b) swap(a, b);  
        }
        cout << op << '\n';
    }
    return 0;
}
