
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
        ll n, k; 
        cin >> n >> k;
        vll v(n);

        f(i, 0, n) {
            cin >> v[i];
        }

        int cntk = 0;

        f(i, 0, n) {
            if (v[i] == k) {
                cntk++;
            }
        }

        if (cntk == n) {
            cout << 0 << '\n';
        } else {
            int ck = n;
            int cjk = -1;

            f(i, 0, n) {
                if (v[i] != k) {
                    if (cjk == -1) cjk = i;
                    ck = i;
                }
            }
            if (ck == cjk) {
                cout << 1 << '\n';
            } else {
                int flag = 0, flag1 = 0;
                f(i, cjk, ck + 1) {
                    if ((v[i] ^ k) != (v[cjk] ^ k)) {
                        flag = 1;
                    }
                    if (v[i] % k != 0) {
                        flag1 = 1;
                    }
                }
                if (!flag || !flag1) {
                    cout << 1 << '\n';
                } else {
                    cout << 2 << '\n';
                }
            }
        }
    }

    return 0;
}
