// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i,a,n) for(int i =a;i<n;i++)
// #define vll vector<ll>
// #define pb push_back
// #define po pop_back
// #define all(v) v.begin(),v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(v.begin(),v.end())
// signed main() {
// ios_base::sync_with_stdio(false);
// cin.tie(0);
// int t; cin>>t;
// while(t--){
// int n,m,k; cin>>n>>m>>k;
// bool chk2 = false;
// string s; cin>>s;
// int start = 0;
// int ans =0;
// f(i,0,n){
// int chk = i+1;
// if(s[i]=='L'){
// start = i+1;
// continue;
// }
// if(chk-start<m) continue;
// if(s[i]=='C'){
//   chk2 = true;
//   no
// }
// if(s[i]=='W'){
//   ans++;
//   if(ans>k)  {chk2 =true; no  }
// }
// }
// if(!chk2) yes
// }
// return 0;
// }






#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define f(i,a,n) for(int i = a; i < n; i++) 
#define no cout << "NO\n";
#define yes cout << "YES\n"; 

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    string path;
    cin >> path;

    int start = 0; 
    int wCount = 0; 

    for (int i = 0; i < n; i++) {
        if (path[i] == 'L') { 
            start = i + 1; 
            continue;
        }

        if (i + 1 - start < m) continue; 

        if (path[i] == 'C') { 
            no 
            return;
        }

        if (path[i] == 'W') { 
            wCount++; 
            if (wCount > k) { 
                no 
                return;
            }
        }
    }

    yes
}

signed main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
