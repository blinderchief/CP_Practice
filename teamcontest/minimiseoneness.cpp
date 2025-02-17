#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define po pop_back
#define all(v) v.begin(),v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(),v.end())
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){
  int n;cin>>n;
 f(i,0,n){
  if(i==n/2) cout<<1;
  else cout<<0;
 }
  cout<<'\n';
}
return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define po pop_back
#define all(v) v.begin(), v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(), v.end())
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int cnt1 = 0, cnt0 = 0;
        
        f(i, 0, n) {
            if (s[i] == '1') {
                if ((i > 0 && s[i - 1] == '1') || 
                   (i < n - 1 && s[i + 1] == '1')
                         || ( i == 0 || i == n - 1)) {
                    cnt1 = 1;
                    break;
                }
            }
        }
        
        if (cnt1) 
            yes
        else 
            no
    }
    
    return 0;
}
