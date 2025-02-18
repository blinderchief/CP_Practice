/**
 * author:blinderchief 
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
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        bool reached = false;
        int fx, fy;
        int x = 0, y = 0;
        int check = 0;
        
        while (check < 100) {
            fx = x;
            fy = y;
            for (char m : s) {
                if (m == 'N') y++;
                else if (m == 'E') x++;
                else if (m == 'S') y--;
                else if (m == 'W') x--;
                if (x == a && y == b) {
                    reached = true;
                    break;
                }
            }
            if (fx == x && fy == y) {
                no
                break;
            }
            if (reached) {
                yes
                break;
            }
            check++;
        }
        
        if (!reached && (fx != x || fy != y)) {
            no
        }
    }
    
    return 0;
}
