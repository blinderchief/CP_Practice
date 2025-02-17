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
    int a,b,c; cin>>a>>b>>c;
    int hi[3] = {a,b,c}; 
    sort(hi,hi+3);
   int cnt=0;
   f(i,0,3){
     if(hi[i]==1) {
      cnt++;
     }
   }
   int cal1=0,cal2=0,cal3=0,cal4=0; 
   if(cnt==3) {
    cal1 = a+b+c;
   }
   else if(cnt==2){
    cal2 =(a+b)*c;
   }
   else if(cnt==1){
 cal3=(a+b)*c;
   }
   else {
    cal4=a*b*c;
   }
   cout<<max({cal1,cal2,cal3,cal4});
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << "seconds" << '\n';
    return 0;
}