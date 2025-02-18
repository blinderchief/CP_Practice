/**
 * writer:blinderchief
 **/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define po pop_back
#define me(a, x) memset(a, x, sizeof(a))
#define all(v) v.begin(), v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
ll C(int n, int k) {
    double res = 1;
    for (int i = 1; i <= k; ++i)
        res = res * (n - k + i) / i;
    return (ll)(res + 0.01);
}
int main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin>>t;
    if(t==1) cout<<1<<"\n";
    else if(t==2) cout<<1<<" "<< 2<<'\n';
    else if(t==3) cout<<1<<" "<<2<<" "<<4<<'\n';
    else if(t==4) cout<<1<<" "<<2<<" "<<4<<" "<<8<<'\n';
    else if(t==5) cout<<1<<" "<<2<<" "<<4<<" "<<8<<" "<<16<<'\n';
    else {
        cout<<1<<" "<<2<<" "<<4<<" "<<8<<" "<<16<<" ";
        for(int i =6;i<=t;i++){
           ll cal =  C(i,4)+C(i,2)+1;
            cout<<cal<<" ";
        }
        cout<<'\n';
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}