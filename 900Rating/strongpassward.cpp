

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
int maxtime(const string &s) {
    int time = 2; 
    for (int i = 1; i < s.length(); ++i) {
        if (s[i] == s[i-1]) {
            time += 1;
        } else {
            time += 2;
        }
    }
    return time;
}

signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){
string s; cin>>s;
string res = s + 'a';
    int max_time = maxtime(res);
    for (char c = 'a'; c <= 'z'; ++c) {
        for (int i = 0; i <= s.length(); ++i) {
            string ne = s.substr(0, i) + c + s.substr(i);
            int time = maxtime(ne);
            if (time > max_time) {
                max_time = time;
                res= ne;
            }
        }
    }

   cout<<res<<"\n";
}
return 0;
}
