


// // }
// // return 0;
// // }
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
// signed main() {
// ios_base::sync_with_stdio(false);
// cin.tie(0);
// int t; cin>>t;
// while(t--){
//   int n,k; cin>>n>>k;
//   map<char,int> mp;
//   string s; cin>>s;
   
//   f(i,0,n){
//      mp[s[i]]++;
//   }
//   vector<int> v(n);
//   if(k%2==0){
//         if(k>=mp['0']){
//           f(i,0,n-1){
//             s[i] = '1';
//             cout<<s[i];
//           }
//           cout<<0<<'\n';
//         }
      
//   }
// }
// return 0;
// }



#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int t;
  cin >> t;
  while (t-- > 0) {
    int n, k;
    string s;
    cin >> n >> k >> s;
    vector<int> res(n);
    if (k % 2 == 0) {
      for (int i = 0; i < n; i++) {
        if (s[i] == '0' && k > 0) {
          res[i]++;
          s[i] = '1';
          k--;
        }
      }
    } else {
      for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
          if (k > 0) {
            res[i]++;
            k--;
          } else {
            s[i] = '0';
          }
        } else {
          s[i] = '1';
        }
      }
    }  
    if (k % 2 != 0) {
      if(s[n-1] =='0') s[n-1] = '1';
     else  s[n - 1] = '0';
      res[n - 1]++;
      k--;
    }
    res[n-1] += k;
    cout << s << "\n";
    for (int i = 0; i < n; i++)
      cout << res[i] << " ";
    cout << "\n";
  }
  return 0;
}