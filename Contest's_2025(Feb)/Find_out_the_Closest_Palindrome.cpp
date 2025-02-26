// not passing all the testcases
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
    string s;cin>>s;
    int n = s.size();
    string temp = s;
   if(n==1){
    char c = s[0];
    int an= c-'0';
    an--;
    char ans = an+'0';
    cout<<ans<<'\n';
    return 0;
   }
   else{
    for(int i =0,j=n-1;i<j;i++,j--){
      if(n%2==0){
        if(i==(n/2)-1){
          int cal = (s[i]-'0')-(s[j]-'0');
          if(cal>0){
            if(cal>5){
              s[j] = --s[i];
            }
            else{
              s[j] = s[i];
            }
          }
        }
      }
      if(s[i]!=s[j]){
        s[j]= s[i];
      }
    }
    if(n%2!=0){
      cout<<s<<'\n';
   }
   else {
    cout<<s<<'\n';
   }
  }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}