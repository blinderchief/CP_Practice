#include <bits/stdc++.h>
using namespace std;

bool is_pal(const string &s){
    int l = 0, r = (int)s.size()-1;
    while(l < r){
        if(s[l++] != s[r--]) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    if(!(cin >> t)) return 0;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        bool found = false;
        int maxmask = 1<<n;
        for(int mask = 0; mask < maxmask; ++mask){
            string p = "";
            string x = "";
            vector<int> idx;
            for(int i = 0; i < n; ++i){
                if(mask & (1<<i)){
                    p.push_back(s[i]);
                    idx.push_back(i+1); // 1-based index
                } else {
                    x.push_back(s[i]);
                }
            }
            // check p non-decreasing
            bool ok = true;
            for(int i = 1; i < (int)p.size(); ++i){
                if(p[i-1] > p[i]) { ok = false; break; }
            }
            if(!ok) continue;
            // check x palindrome
            if(is_pal(x)){
                // print answer
                cout << (int)idx.size() << '\n';
                if(!idx.empty()){
                    for(int i = 0; i < (int)idx.size(); ++i){
                        if(i) cout << ' ';
                        cout << idx[i];
                    }
                    cout << '\n';
                } else {
                    cout << '\n';
                }
                found = true;
                break;
            }
        }
        if(!found) cout << -1 << '\n';
    }
    return 0;
}
