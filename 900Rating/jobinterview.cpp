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
int t; cin>>t;
while(t--){
  int n,m;cin>>n>>m;
  vector<ll> a(n+m+1),b(n+m+1);
  

}
return 0;
}



#include <bits/stdc++.h>
using namespace std;
#define ll long long

signed main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<ll> a(n+m+1);
        for(ll i=0;i<n+m+1;++i){
            cin>>a[i];
        }
        vector<ll> b(n+m+1);
        for(ll i=0;i<n+m+1;++i){
            cin>>b[i];
        }
        ll cnt1=0;
        ll x=0,y=0;
        for(ll i=0;i<n+m+1;++i){
            if(a[i]>b[i]){
                if(x<n+1){
                    cnt1+=a[i];
                    x++;
                }else{
                    cnt1+=b[i];
                    y++;
                }
            }else{
                if(y<m){
                    cnt1+=b[i];
                    y++;
                }else{
                    cnt1+=a[i];
                    x++;
                }
            }
        }
        ll cnt2=0;
        x=0,y=0;
        for(ll i=0;i<n+m+1;++i){
            if(a[i]>b[i]){
                if(x<n){
                    cnt2+=a[i];
                    x++;
                }else{
                    cnt2+=b[i];
                    y++;
                }
            }else{
                if(y<m+1){
                    cnt2+=b[i];
                    y++;
                }else{
                    cnt2+=a[i];
                    x++;
                }
            }
        }
        x=0,y=0;
        for(ll i=0;i<n+m+1;++i){
            if(a[i]>b[i]){
                if(x<n+1){
                    cout<<cnt1-a[i]<<' ';
                    x++;
                }else{
                    cout<<cnt2-b[i]<<' ';
                    y++;
                }
            }else{
                if(y<m+1){
                    cout<<cnt2-b[i]<<' ';
                    y++;
                }else{
                    cout<<cnt1-a[i]<<' ';
                    x++;
                }
            }
        }
        cout<<'\n';
    }
    return 0;
}
 