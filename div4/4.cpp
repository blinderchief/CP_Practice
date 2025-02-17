// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i,a,n) for(int i =a;i<n;i++)
// #define vll vector<ll>
// #define pb push_back
// #define po pop_back
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(v.begin(),v.end())

// signed main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
    
//     int t; 
//     cin >> t;
    
//     while(t--) {
//         string a, b;
//         cin >> a >> b;
//         int j = 0;
//         bool possible = true;

//         f(i, 0, a.size()) {
//             if(j >= b.size()) {
//                 break;
//             }
//             if(a[i] == b[j]) {
//                 j++;
//             } else if(a[i] == '?') {
//                 a[i] = b[j];
//                 j++;
//             }
//         }
        
//         f(i, 0, a.size()) {
//             if(a[i] == '?') {
//                 a[i] = 'a';
//             }
//         }
        
//         if(j >= b.size()) {
//             yes;
//             cout << a << '\n';
//         } else {
//             no;
//         }
//     }
    
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define pb push_back
#define po pop_back
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define sot(v) sort(v.begin(),v.end())

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; 
    cin >> t;
    
    while (t--) {
        string s, t; 
        cin >> s >> t;
        
        bool fail = false;
        int ptr = 0;
        
        for (char& c : t) {
            while (ptr < int(s.size()) && s[ptr] != '?' && s[ptr] != c) {
                ptr += 1;
            }
            if (ptr == int(s.size())) {
                fail = true;
                break;
            }
            s[ptr++] = c;
        }
        
        for (char& c : s) {
            if (c == '?') {
                c = 'a';
            }
        }
        
        if (!fail) {
            yes
            cout << s << '\n';
        } else {
            no
        }
    }
    
    return 0;
}
