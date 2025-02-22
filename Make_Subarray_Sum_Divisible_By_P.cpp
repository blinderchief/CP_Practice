/**
 * writer:blinderchief
 **/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define po pop_back
#define me(a, x) memset(a, x, sizeof(a))
#define all(v) v.begin(), v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
#define INF (int)1e18
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
int main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n; cin>>n;
    vi v(n);
    f(i,0,n) cin>>v[i];
    int p; cin>>p; 
    ll ck = accumulate(all(v),0LL);
    ck = ck%p;
    if(ck == 0) {
        cout<<0<<'\n';
        return 0;
    }
    ll mini = n + 1;
    ll sum = 0;
    map<ll, int> mp;
    mp[0] = -1;
    for (int i = 0; i < n; ++i) {
        sum += v[i];
        if (mp.find(sum - ck) != mp.end()) {
            int j = mp[sum - ck];
            if (!(j == -1 && i == n - 1)) {
                int len = i - j;
                if (len < mini) {
                    mini = len;
                }
            }
        }
        if (mp.find(sum) == mp.end()) {
            mp[sum] = i;
        }
    }
   if(mini == n + 1) {
        cout<<-1<<'\n';
    } else {
        cout<<mini<<'\n';
    }

  

    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}
