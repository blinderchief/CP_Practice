/**
 * writer:blinderchief
 **/
#include<bits/stdc++.h>
using namespace std;
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
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
int main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
         ll n ; 
        cin >> n;
        vll a(n);
        map<ll, vector<ll>>pos;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            pos[a[i]].push_back(i);
        }
        vector<pair<ll,ll>> chk;
       for(auto  it =pos.begin();it!=pos.end();it++){
        if(it->second.size()>1){
          chk.pb({it->second.front(),it->second.back()});
        }
       }
       sot(chk);
        vector<pair<ll, ll>> merged;
        for (auto &[start, end] : chk) {
            if (merged.empty() || merged.back().second < start) {
                // No overlap, add as a new interval
                merged.emplace_back(start, end);
            } else {
                // Overlap exists, merge intervals
                merged.back().second = max(merged.back().second, end);
            }
        }

        // Calculate the total cost
        int cost = 0;
        for (auto &[start, end] : merged) {
            unordered_set<int> distinct_elements;
            for (int i = start; i <= end; ++i) {
                distinct_elements.insert(A[i]);
            }
            cost += distinct_elements.size();
        }

        cout << cost << "\n";
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
   //cerr << "Time taken: " << (float)clock() / CLOCKS_PER_SEC << " secs" << '\n';
    return 0;
}