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

int n,k; cin>>n>>k;
int a[14];
set<int> st;
    f(i,0,n) {
        int x;
        cin >> x;
        st.insert(x);  
        a[x]++;        
    }
    int done=0,ans=0;
    while (done < st.size()) {
        sort(a + 1, a + 14);
        
        ll f = 0;  
      for(int i =1;i>0;i++) {
            if (a[i] != 0 && f + a[i] <= k) {
                f += a[i];    
                a[i] = 0;         
                      ++done;     
                                }
        }
        ++ans;      }

    cout << ans;
return 0;
}

