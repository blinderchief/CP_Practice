/**
 * writer:blinderchief 
**/
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
#define sot(v) sort(all(v))

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; 
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        string s; 
        cin >> s;

        int cnt = 0; 
        int ck = 0;   

        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                ck++;
            } else {
                ck = 0;
            }

            if (ck == m) {
                cnt++;   
                ck = 0;  
                i += (k - 1);  
            }
        }

        cout << cnt << '\n'; 
    }
    return 0;
}
