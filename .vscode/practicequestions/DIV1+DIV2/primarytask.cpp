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

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; 
    cin >> t;
    
    while(t--){
        int n; 
        cin >> n;
        vector<int> a(n+1);
        f(i, 1, n+1) cin >> a[i];
        
        int m;
        cin >> m;
        
        while(m--) {
            string q;
            cin >> q;
            
            if(q.size() != n) {
                no;
                continue;
            }
            
            map<char, int> char_to_value;
            map<int, char> value_to_char;
            bool ok = true;
            
            f(i, 0, n) {
                char ch = q[i];
                int value = a[i+1];
                
                if(char_to_value.find(ch) == char_to_value.end() && value_to_char.find(value) == value_to_char.end()) {
                    char_to_value[ch] = value;
                    value_to_char[value] = ch;
                } else if(char_to_value[ch] != value || value_to_char[value] != ch) {
                    ok = false;
                    break;
                }
            }
            
            if(ok) {
                yes;
            } else {
                no;
            }
        }
    }
    
    return 0;
}
