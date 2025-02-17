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
      ll n,k;
         cin >> n >> k;
    vll a(n);
    for(int i = 0 ; i < n ; i++) {
        cin >> a[i];
    }
    int f = 0 , l = n-1,cot=0,p=0;
    while(k && f <= l) {
        if(f == l) {
            if(k < a[f])break;
            cot++;
            break;
        }
        ll mn = min(a[f],a[l]);
        if(p == 0) {
            if(a[f] == mn) {
                if(k < 2*mn-1) break;
                a[l] -= (mn-1);
                f++;
                cot++;
                k -= 2*mn-1;
                p = 1;
            }else {
                if(k < 2*mn) break;
                a[f] -= mn;
                l--;
                cot++;
                k -= 2*mn;
                p = 0;
            }
        }else {
            if(a[l] == mn) {
                if(k < 2*mn-1) break;
                a[f] -= (mn-1);
                l--;
                cot++;
                k -= 2*mn-1;
                p = 0;
            }else {
                if(k < 2*mn) break;
                a[l] -= mn;
                f++;
                cot++;
                k -= 2*mn;
                p = 1;
            }
        }
    }
    cout << cot <<'\n';

    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}