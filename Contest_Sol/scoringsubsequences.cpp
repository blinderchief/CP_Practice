#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
#define vll vector<ll>
#define pb push_back
#define po pop_back
#define all(v) v.begin(),v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(),v.end())
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> v(n+1);
        for(int i = 1; i <= n; i++) 
            cin >> v[i];

        int cnt = 1;
        cout << cnt << " ";
        for(int i = 2; i <= n; i++) {
            if(v[i - cnt] > cnt) 
                cnt++;
            cout << cnt << " ";
        }
        cout << '\n';
    }
    return 0;
}



