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
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; 
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        string a, b;
        cin >> a >> b;
        vector<pair<int, int>> v(q);
        f(i, 0, q){
            cin >> v[i].first >> v[i].second;
            v[i].first--;  
            v[i].second--; 
        }
        vector<int> ans;
        f(i, 0, q){
            int cnt = 0;
            vector<int> mpa(26, 0), mpb(26, 0); 
            f(j, v[i].first, v[i].second + 1){
                mpa[a[j] - 'a']++;
                mpb[b[j] - 'a']++;
            }
            f(k, 0, 26) {
                cnt += abs(mpa[k] - mpb[k]);
            }
            ans.push_back(cnt / 2);
        }
        f(i, 0, ans.size()){
            cout << ans[i] << '\n';
        }
    }
    return 0;
}
