
/**
 * writer:blinderchief 
**/
#include<bits/stdc++.h>
using namespace std;
#define int long long 
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
const int N= 4e5+5;
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
    int n,m,q; cin>>n>>m>>q;
    vi a(n),b(m);
    f(i,0,n) cin>>a[i];
    f(i,0,m) cin>>b[i];
    int suma=  accumulate(all(a),0ll);
    int sumb =accumulate(all(b),0ll);
    vector<bool> achkp(N),achkn(N),bchkn(N),bchkp(N),finchkp(N),finchkn(N);
    for(int i =0;i<n;i++){
        if(abs(suma-a[i])<N){
            if(suma-a[i]<0){
                achkn[a[i]-suma] = true;
            }
            else{
                achkp[suma-a[i]]= true;
            }
        }
    }
    for(int i =0;i<m;i++){
        if(abs(sumb-b[i])<N){
            if(sumb-b[i]<0){
                bchkn[b[i]-sumb] = true;
            }
            else{
               bchkp[sumb-b[i]]= true;
            }
        }
    }
    f(i,1,N){
        f(j,1,N){
            if(i*j>N) {break;}
            if(achkp[i] && bchkp[j]){
                finchkp[i*j] = true;
            }
            if(achkp[i] && bchkn[j]){
                finchkn[i*j] = true;
            }
            if(achkn[i] && bchkp[j]){
                finchkn[i*j] = true;
            }
            if(achkn[i] && bchkn[j]){
                finchkp[i*j] = true;
            }
    }
    }
    for(int i =0;i<q;i++)
    {   int x; cin>>x;
    if(x<=0){
        if(finchkn[-x]){
            yes
        }
        else{
            no
        }
    } 
    else{
        if(finchkp[x]) yes
        else no
    }
       }

return 0;
}
