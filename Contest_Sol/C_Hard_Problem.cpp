#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define po pop_back
#define me(a, x) memset(a, x, sizeof(a))
#define all(v) v.begin(),v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--) {
      ll m,a,b,c; cin>>m>>a>>b>>c;
      int ch =0;
      ll sto = 0;
      if(m>=a){
        ch+=a;
        sto+=(m-a);
      }
      else{
        ch+=m;
      }
      if(m>=b){
        ch+=b;
        sto+=(m-b);
      }
      else{
      ch+=m;
      }
      cout<<ch+min(c,sto)<<"\n";
    //     ll m, a, b, c;
    //     cin >> m >> a >> b >> c;
    //     int ans = 0;
    //   ll cal = a+b+c;
    //   if(2*m>=cal){
    //     cout<<cal<<'\n';
    //     continue;
    //   }
    //     if (m <= a) {
    //         ans += m;
    //         a -= m;
    //     } else {
    //         ans += a;
    //         m -= a;
    //         a = 0;
    //     }

    //     if (m <= b) {
    //         ans += m;
    //         b -= m;
    //     } else {
    //         ans += b;
    //         m -= b;
    //         b = 0;
    //     }

    //     if (m <= c) {
    //         ans += m;
    //     } else {
    //         ans += c;
    //     }

    //     cout << ans << '\n';
    // }
    }
    return 0;
}
