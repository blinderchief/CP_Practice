/**
 * author:blinderchief
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
int t; cin>>t;
while(t--){
    string s;
        cin >> s;
        int q;
        cin >> q;
        int cnt = 0;
     auto check = [&](const string a,int b)->bool{
       if (b < 0 || b + 3 >= s.size()) return false;
         return s.substr(b, 4) == "1100";
    };
        for (int i = 0; i + 3 < s.size(); ++i) {
            if (check(s, i)) {
                cnt++;
            }
        }
   
        while (q--) {
            int i;
            char v;
            cin >> i >> v;
            --i; 
            for (int j = i - 3; j <= i; ++j) {
                if (check(s, j)) {
                  cnt--;
                }
            }

            s[i] = v; 
            for (int j = i - 3; j <= i; ++j) {
                if (check(s, j)) {
                    cnt++;
                }
            }

            if (cnt > 0) {
              yes
            } else {
                no
            }
        }
}
return 0;
}

