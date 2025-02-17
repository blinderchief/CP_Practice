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
int t; cin>>t;
while(t--){
int n,k;cin>>n>>k;
vll a(n);
map<int,int> mp;
int check = 0;
f(i,0,n) {cin>>a[i]; mp[a[i]]++;
if(a[i]%2==1) check++;
}
if(mp[0]==n)  {yes continue;}
if(mp[1]>1) {no continue;}
int flag =1;
f(i,0,n){
  if(a[i]==1) continue;
  if(a[i]%k==0) flag =1;
  else {flag =0; break;}
}
if(flag && check<2) yes
else no
}
return 0;
}

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
    int t; 
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        map<int, int> need;  // Changed from `mp` to `need` for accurate tracking
        
        f(i, 0, n) {
            ll a;
            cin >> a;
            int p = 0;
            while (a) {  // Adjusted logic to decompose the number into its base-k representation
                need[p] += a % k;
                a /= k;
                p++;
            }
        }
        
        bool ok = true;
        for (auto it = need.begin(); it != need.end(); ++it) {  // Iterating through the map without structured bindings
            if (it->second > 1) {
                ok = false;
                break;
            }
        }
        
        if (ok) yes
        else no
    }
    return 0;
}

