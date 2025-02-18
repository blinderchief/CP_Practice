/**
 * writer:blinderchief 
**/
#include<bits/stdc++.h>
using namespace std;
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define po pop_back
#define me(a, x) memset(a, x, sizeof(a))
#define all(v) v.begin(),v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
int main() {
auto begin = chrono::high_resolution_clock::now();
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){
  ll n,m;
        cin>>n>>m;
        vector<ll>v(n+1),pref(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
        }
        pref[1]=v[1];
        for(int i=2;i<=n;i++)
        {
            pref[i]=pref[i-1]+v[i];
        }
        ll ans=0,sum=0;
        multiset<ll> ms;
        for(int i=m+1;i<=n;i++)
        {
            ms.insert(v[i]);
            while(!ms.empty() && pref[i]+sum<pref[m])
            {
                ll minm=*ms.begin();
                ms.erase(ms.begin());
                sum+=abs(2*minm);
                ans++;
            }
        }
        ms.clear();
        sum=0;
        for(int i=m;i>=1;i--)
        {
            ms.insert(v[i]);
            while(!ms.empty() && pref[i]<sum+pref[m])
            {
                ll maxm=*ms.rbegin();
                ms.erase(ms.find(*ms.rbegin()));
                sum-=(maxm*2);
                ans++;
            }
        }
        cout<<ans<<'\n';
 }
auto end = chrono::high_resolution_clock::now();
auto elapsed = chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
// cout << "Time taken:" << elapsed.count()*1e-9 << "seconds" << endl;
return 0;
}