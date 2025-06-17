/**
 * writer:blinderchief
 **/
#include <bits/stdc++.h>
using namespace std;
/*
#define LOCAL
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) "india"
#endif
*/
#define int long long
#define f(i, a, n) for (int i = a; i < n; i++)
#define vll vector<int>
#define pb push_back
#define po pop_back
#define me(a, x) memset(a, x, sizeof(a))
#define all(v) v.begin(), v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
#define sz(x) (int)(x).size()
#define INF (int)9e18;
const int mod = (int)(1e9 + 7);
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
signed main()
{
  auto begin = chrono::high_resolution_clock::now();
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    // //   100 -17 =  83 /2 =     42+4   15-5/3 - 5
    // 16-5 =11 /3 =9 ->8
    int k, a, b, x, y;
    cin >> k >> a >> b >> x >> y;
    if (k < a && k < b)
    {
      cout << 0 << '\n';
      continue;
    }
    int cnt = 0;
    if(x<y){
    int tempk = k - a;
    cnt += (ceil((double)tempk / x));
    if(tempk%x==0 && tempk!=0) cnt++,a-=x;
    tempk = a - tempk % x - b;
    if(tempk>0){
    cnt += ceil((double)tempk / y);
    }
    else if(tempk==0) cnt++;
    cout << cnt << '\n';
    }
    else{
    int tempk = k - b;
    cnt += (ceil((double)tempk / y));
    if(tempk%y==0 && tempk!=0) cnt++,b-=y;
    tempk = a - tempk % y - b;
    if(tempk>0){
    cnt += ceil((double)tempk / x);
    }
    else if(tempk==0) cnt++;
    cout << cnt << '\n';
    }
   
  }
  auto end = chrono::high_resolution_clock::now();
  auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
  // cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
  return 0;
}
