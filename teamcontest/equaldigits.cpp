// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i,a,n) for(int i =a;i<n;i++)
// #define vll vector<ll>
// #define vi vector<int>
// #define pb push_back
// #define po pop_back
// #define all(v) v.begin(),v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(v.begin(),v.end())
// signed main() {
// ios_base::sync_with_stdio(false);
// cin.tie(0);
//  ll n;
//     cin >> n;
//     // Iterate over all possible digit lengths.
//     for (int i = 1; i <= 18;i++) {
//         // Try numbers like 1, 11, 111, ..., 9, 99, 999...
//         for (int d = 1; d <= 9; ++d) {
//             // Generate a number where all 'digit' digits are the same.
//             ll chk = 0;
//             for (int i = 0; i < i; ++i) {
//                 chk = chk * 10 + d;
//             }

//             // If the candidate is greater than or equal to n, print and exit.
//             if (chk>= n) {
//                 cout << chk << '\n';
//                 return 0;
//             }
//         }
//     }

// return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i,a,n) for(int i =a;i<n;i++)
// #define vll vector<ll>
// #define vi vector<int>
// #define pb push_back
// #define po pop_back
// #define all(v) v.begin(),v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(v.begin(),v.end())
// signed main() {
// ios_base::sync_with_stdio(false);
// cin.tie(0);
// int t; cin>>t;
// while(t--){
//   string s; cin>>s;
//   map<char,int> mp;
//   if(s.size()==1) no
//   else{
//     f(i,0,s.size()){
//         mp[s[i]]++;
//     }
//     if(mp['a']==mp['b']){
//       yes
//     }
//     else no
//   }
// }
// return 0;
// }

   

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i,a,n) for(int i =a;i<n;i++)
// #define vll vector<ll>
// #define vi vector<int>
// #define pb push_back
// #define po pop_back
// #define all(v) v.begin(),v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(v.begin(),v.end())

// signed main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     ll n;
//     cin >> n;
    
//     for (int i = 1; i <= 18; i++) {
//         for (int d = 1; d <= 9; ++d) {
//             ll chk = 0;
//             for (int j = 0; j < i; ++j) {
//                 chk = chk * 10 + d;
//             }

//             if (chk >= n) {
//                 cout << chk << '\n';
//                 return 0;
//             }
//         }
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin >> n;
   string str_n = to_string(n);
    int len = str_n.length();

    // Generate a candidate where all digits are the same as the first digit of n.
    string c(len, str_n[0]);
    ll chk = stoll(c);

    // If this candidate is greater than or equal to n, print and return.
    if (chk >= n) {
        cout << chk << '\n';
        return 0;
    }

    // Otherwise, increment the first digit and generate the next candidate.
    if (str_n[0] < '9') {
        c = string(len, str_n[0] + 1);
        chk = stoll(c);
        cout << chk << '\n';
        return 0;
    }

    // If the incremented digit is '10', move to a longer number like '111...'
    c = string(len + 1, '1');
    cout << c << '\n';
    
    return 0;
}
