#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,n) for(int i =0;i<n;i++)
#define sot(v) sort(v.begin(),v.end())
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){
      ll n;
        cin>>n;
 
        vector<ll>v(n);
 
        f(i,n){
            cin>>v[i];
            if(i%2==0){
                v[i]*=-1;
            }
        }
        unordered_set<ll> s;
        bool ans = false;
        bool status = false;
        ll ps = 0;
        s.insert(ps);
        f(i,n){
            ps+=v[i];
            if(s.count(ps)>0){
                cout<<"YES\n";
                status = true;
                break;
            }else{
                s.insert(ps);
            }
        }
        if(!status){
            cout<<"NO\n";
        }
}
return 0;
}
