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

    string s; 
    cin >> s;
    int n = s.size();
    bool valid = true;

    f(i, 0, n-1) {
        if (s[i] == s[i+1]) {
            valid = false;
            break;
        }
    }

    if (valid) {
        cout << s;
    } else {
        f(i, 0, n-1) {
            if (i <= n-3 && s[i] == s[i+1] && s[i+1] == s[i+2]) {
                s[i+1] = (s[i+1] == 'z') ? 'a' : s[i+1] + 1;
                i++; 
            } 
            else if (s[i] == s[i+1]) {
                char nextChar = (i+2 < n) ? s[i+2] : 'a';
                s[i+1] = (s[i+1] == 'z') ? 'a' : ((s[i+1] == nextChar) ? s[i+1] + 1 : nextChar);
            }
        }
        cout << s << '\n';
    }

    return 0;
}
