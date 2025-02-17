
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        int ch = 0;

        if (n > 15 && n % 3 == 2 && n >= 10) {
            ch++;
            n -= 10;
        }

        ch += n / 15;
        n %= 15;

        if (n % 3 != 0) {
            if (n >= 10) {
                ch++;
                n -= 10;
            }
            ch += n / 6;
            n %= 6;
            ch += n / 3;
            n %= 3;
            ch += n;
        } else {
            ch += n / 6;
            n %= 6;
            ch += n / 3;
            n %= 3;
            ch += n;
        }

        cout << ch << '\n';
    }
    return 0;
}
