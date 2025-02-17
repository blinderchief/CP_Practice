/**
 * author: blinderchief 
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

    string s; 
    cin >> s;

    if (s == "1") { 
        cout << 0;
        return 0;
    }

    int cnt = 0;
    while (s != "1") {
        if (s.back() == '1') {
            int i = s.size() - 1;

            while (i >= 0 && s[i] == '1') {
                s[i] = '0'; 
                i--;
            }
            if (i >= 0) s[i] = '1'; // Set next '0' to '1' if
            else s.insert(s.begin(), '1'); // If overflow, insert '1' at the beginning

            cnt++;
        } else {
            // If the last character is '0', remove it
            s.pop_back();
            cnt++;
        }
    }

    cout << cnt; 
    return 0;
}

