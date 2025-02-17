#include <bits/stdc++.h>
#define int long long
#define ff first
#define ss second
#define debug(x) cout<<x<<'\n';
#define debugv(v) for(auto p:v)cout<<p<<' '; cout<<'\n';
#define yes cout<<"YES";
#define no cout<<"NO";
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    string s;cin>>s;
    string t;cin>>t;
    int s0 = 0, s1 =0, t0 = 0, t1 = 0;
    for(auto p:s){
        if(p == '0') s0++;
        else s1++;
    }
    for(auto p:t){
        if(p == '0') t0++;
        else t1++;
    }
    if(s0 != t0 || s1 != t1){
        no
        return;
    }
    int c =0;
    for(int i=0;i<n;i++){
        if(s[i] != t[i]) c++;
    }
    if(c/2 == k) yes
    else if(c/2 < k){
        if(s0 == 1 and s1 == 1){
            if(s!=t){
                if(k%2 == 0) no
                else yes
            }
            else{
                if(k%2 != 0) no
                else yes
            }
        }
        else{
            yes
        }
    }
    else no
    return;
}
signed main() {
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<'\n';
    }
}