// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i,a,n) for(int i =a;i<n;i++)
// #define vll vector<ll>
// #define pb push_back
// #define po pop_back
// #define all(v) v.begin(),v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(v.begin(),v.end())
// char c[]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','w','x','y','z'};
// signed main() {
// ios_base::sync_with_stdio(false);
// cin.tie(0);
//   string s; cin>>s;
//   int cnt=1;
//   f(i,0,s.size()-1){
//     if(s[i]!=s[i+1]){
//       cnt++;
//     }
//   }
//   if(cnt==s.size()) {cout<<s<<'\n';}  
//   else {  
//     f(i,0,s.size()-1){
//       if(s[i]==s[i+1]){
//         if(i+2<s.size() && s[i+1]==s[i+2]){
//           s[i+1] = c[s[i+2]-'b'];
//         }
//         else{
//           if(i>0 && s[i-1]!= c[s[i-1]-'b']){
//             s[i]=c[s[i-1]-'b'];
//           }
//           else if(i+2<s.size() && s[i+2]!=c[s[i+2]-'b']){
//               s[i+1]= c[s[i+2]-'b'];
//           }
//         }
//       }
//     }
//  cout<<s<<'\n';
//   }
  

// return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;
    int n = s.size();

    for (int i = 0; i < n - 1; ++i) {
        if (s[i] == s[i + 1]) {
            for (char ch = 'a'; ch <= 'z'; ++ch) {
                if (s[i] != ch && (i + 2 >= n || s[i + 2] != ch)) {
                    s[i + 1] = ch;
                    break;
                }
            }
        }
    }

    cout << s << '\n';
    return 0;
}
