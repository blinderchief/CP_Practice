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
int main() {
    long long t, n, cnt, st;
    string a, b, an;
    cin >> t;
    while (t--) {
        cin >> n >> a >> b;
        an = a[0] + b;
        cnt = 1;
        st = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] < b[i - 1] && st == 1) {
                an[i] = a[i];
                cnt = 1;
            }
            if (a[i] > b[i - 1])
                st = 0;
            if (a[i] == b[i - 1] && st == 1) {
                cnt++;
            }
        }
        cout << an << '\n' << cnt << '\n';
    }
    return 0;
}

