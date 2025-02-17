#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define pb push_back
#define po pop_back
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(), v.end())

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; 
    cin >> t;
    while(t--) {
        int n; 
        cin >> n;
        string s, f; 
        cin >> s >> f;
        
        int cnt = 0;
        int cnt1 = 0;
        
        f(i, 0, n) {
            if(s[i] == '0' && f[i] == '1') {
                cnt++;
            } else if(s[i] == '1' && f[i] == '0') {
                cnt1++;
            }
        }
        if(cnt1>cnt){
          int ans = abs(cnt - cnt1);
        cout << cnt + ans << '\n';
        }
        else{
          cout<<cnt<<"\n";
        }
        
        
       
        
    }
    
    return 0;
}
