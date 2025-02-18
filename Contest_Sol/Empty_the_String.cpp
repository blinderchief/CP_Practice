/**
 * writer: blinderchief 
**/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define po pop_back
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
        int n; 
        cin >> n;
        string s; 
        cin >> s;
        map<char,int> mp;
        mp['A']  =0;
        mp['B'] = 0;
        int ans = 0;
        for(char c : s){
        char comp = c == 'A' ? 'B' : 'A';
        if(mp[comp]){
            mp[comp]--;
            mp[c]++;
        }
        else{
            mp[c]++;
           ans++;
        }
    }

        cout << ans << '\n';
    }

    return 0;
}
