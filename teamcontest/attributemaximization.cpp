

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
vi v(14);
set<int> st;
f(i,0,n){
int x; cin>>x;
st.insert(x);
v[x]++;
} 
int ans =0,r=0;
while(r<st.size()){
    sot(v);
    int f =0;
    for(int i =13;i>0;i--){
        if(v[i]==0) break;
     if(v[i]!=0 && f+v[i]<=k){
        f+=v[i];
        v[i]=0;
        r++;
     }
    }
    ans++;
}
cout<<ans;
 
return 0;
}