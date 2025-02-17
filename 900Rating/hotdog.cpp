
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
ll nb, ns, nc, pb, ps, pc, r;
bool check(ll x, map<char, int>& mp) {
    ll req_b = max(0LL, mp['B'] * x - nb);
    ll req_s = max(0LL, mp['S'] * x - ns);
    ll req_c = max(0LL, mp['C'] * x - nc);
    ll cost = req_b * pb + req_s * ps + req_c * pc;
    return cost <= r;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> r;

    map<char, int> mp;
    for (char ch : s) {
        mp[ch]++;
    }
    ll left = 0, right = 1e13; 
    ll result = 0;

    while (left <= right) {
        ll mid = left + (right - left) / 2;
        if (check(mid, mp)) {
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << result << '\n';
    return 0;
}
