#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
#define vll vector<ll>
#define pb push_back
#define po pop_back
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(),v.end())
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){
   int n;
        cin >> n;
        string s;
        cin >> s;
        ll ans = 0;

        for (int i = n - 1, j = n - 1; i >= 0; i--) {
            if (ans != -1) {
                while (j >= 0 && s[j] == '1') {
                    j--;
                }
                if (j == -1) {
                    ans = -1;
                } else {
                    ans += i - j;
                    j--;
                }
            }
            cout << ans << " \n"[i == 0];
        }
}
return 0;
}