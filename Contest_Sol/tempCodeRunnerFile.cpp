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
#define INF (int)1e18
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
int main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n,l,r; cin>>n>>l>>r;
        vll v(n);
        ll sum=0;
      f(i,0,n) cin>>v[i], sum+=v[i];
      if(l==r) {cout<<*min_element(all(v))<<'\n'; }
      else if(l==1 && r==n) {
        cout<<sum<<'\n';
      }
      else{
        --l;r;
        vector<ll>temp(v.begin(),v.begin()+r),temp2(v.begin()+l,v.end()); 
        sot(temp);sot(temp2);
       cout<<min(accumulate(temp.begin(),temp.begin()+r-l,0ll),accumulate(temp2.begin(),temp2.begin()+r-l,0ll))<<'\n';


         }
      


    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}