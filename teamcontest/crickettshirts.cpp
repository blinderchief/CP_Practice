#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define po pop_back
#define all(v) v.begin(),v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(),v.end())

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<pair<string, int>> pre(n), curr(n);
    f(i, 0, n) {
        cin >> pre[i].first;
        pre[i].second = pre[i].first.size();
    }

    f(i, 0, n) {
        cin >> curr[i].first;
        curr[i].second = curr[i].first.size();
    }
    sort(all(pre), [&](pair<string, int> a, pair<string, int> b) {
        return a.second < b.second;
    });
    sort(all(curr), [&](pair<string, int> a, pair<string, int> b) {
        return a.second < b.second;
    });

    int totsec = 0;
    f(i, 0, n) {
       if(pre[i].first!=curr[i].first){
        totsec++;
       }
    }

    cout << totsec << '\n';

    return 0;
}
