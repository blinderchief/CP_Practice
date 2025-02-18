#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i = a; i < n; i++)
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

    int n, m; 
    cin >> n >> m;
    int l = 1, r = n;
    for (int i = 0; i < m; i++) {
        string a, b, c, d;
        int x;
        cin >> a >> b >> c >> d >> x;
        if (c == "right") l = max (l, x + 1); else r = min (r, x - 1);
    }   
    if (l > r) cout << "-1" << endl; else cout << r - l + 1 << '\n';

    return 0;
}

