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
set<int> st;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

        int n, m; 
        cin >> n >> m;

        f(i, 1, n + 1) st.insert(i);  

        vector<ll> ans(n+1); 
ll l,r,x;
        f(i, 0, m) {
           cin>>l>>r>>x;
            while(true) {  
              auto it = st.lower_bound(l);  
              if(it == st.end()) break;
              if(*it == x) {
                l= x+1;
                  continue;
              }
               if(it == st.end() || *it > r) break;
              ans[*it] = x; 
              st.erase(it);              
            }
        }
        ans[x] =0;
        f(i, 1, n + 1) cout << ans[i] << " ";  
    
    return 0;
}
