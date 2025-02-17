#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define pb push_back
#define po pop_back
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(), v.end())
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt_A = count(s.begin(), s.end(), 'A');
        int cnt_D = count(s.begin(), s.end(), 'D');
        int cnt_C = count(s.begin(), s.end(), 'C');
        int cnt_$ = count(s.begin(), s.end(), '?');
        int cnt_B = count(s.begin(), s.end(), 'B');

        int max_A = min(n, cnt_A);
        int max_C = min(n, cnt_C);
        int max_B = min(n, cnt_B);
        int max_D = min(n, cnt_D);

        int res = max_A + max_B + max_C + max_D;
        int _A = n - max_A;
        int _B = n - max_B;
        int _C = n - max_C;
        int _D = n - max_D;
        
        int flag = cnt_$ - (_A + _B + _C + _D);
        if (flag > 0) {
            res += flag;
        }
        cout << res << "\n";
    }
    return 0;
}
