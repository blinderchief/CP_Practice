/**
 * writer:blinderchief
 **/
#include<bits/stdc++.h>
using namespace std;
/*
#define LOCAL
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) "india"
#endif
*/
#define ll long long
#define ull unsigned ll
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define vi vector<int>
#define pb emplace_back
#define po pop_back
#define me(a, x) memset(a, x, sizeof(a))
#define all(v) (v).begin(), (v).end()
#define rall(x) (x).rbegin(), (x).rend()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
#define sz(x) (int)(x).size()
#define inf 0x3f3f3f3f
const int mod = (int)(1e9 + 7);
//Small observations-Think,read Problem again
/*
The Rectangular area should have at least one flower of each species present in the overall meadow 
--- 
What I can Do
we will increase the cnt if all the unquire species are there
--
we will start with the whole array 
and then decrease the row from the bottom and always check is all the unique species are present or not if present then cnt++ 
after reaching the last row where condition of species is specified we then decrease the column by one from left and 
see is it possile or not to follow the condition then see for the below row and do the same things means minus one column again by one from left and see the the condition for all the below rows and if condition satisfies we will cnt++ 
--
for checking that is all the species are there in the rectangle or not we will initially find all the positions of the unique species and when checking for any rectangular fence we will check is that fence cover the unique species means they are under that rectangular space or not based on that it we will cnt
*/
/*
How would I optimize
if I know the range of every unique species then we can just minus upper to lower and get the 

*/
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
signed main() {
  auto begin = chrono::high_resolution_clock::now();
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n;cin>>n;
  vector<string>grid(n);
  f(i,0,n)cin>>grid[i];

    set<char> st;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            st.insert(grid[i][j]);

    int size = st.size();
    ll cnt = 0;

    for (int r1 = 0; r1 < n; r1++) {
        for (int c1 = 0; c1 < n; c1++) {
            for (int r2 = r1; r2 < n; r2++) {
                for (int c2 = c1; c2 < n; c2++) {
                    // Checking if rectangle (r1,c1) -> (r2,c2) contains all species
                    set<char> found;
                    for (int i = r1; i <= r2; i++) {
                        for (int j = c1; j <= c2; j++) {
                            found.insert(grid[i][j]);
                            if ((int)found.size() == size) break;
                        }
                        if ((int)found.size() == size) break;
                    }
                    if ((int)found.size() == size) cnt++;
                }
            }
        }
    }

    cout << cnt << "\n";
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cerr << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}





