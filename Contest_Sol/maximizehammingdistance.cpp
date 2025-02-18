// // #include<bits/stdc++.h>
// // using namespace std;
// // #define ll long long int 
// // #define f(i,a,n) for(int i =a;i<n;i++)
// // #define vll vector<ll>
// // #define pb push_back
// // #define po pop_back
// // #define all(v) v.begin(),v.end()
// // #define no cout << "NO" << '\n';
// // #define yes cout << "YES" << '\n';
// // #define sot(v) sort(v.begin(),v.end())
// // signed main() {
// // ios_base::sync_with_stdio(false);
// // cin.tie(0);
// // int t; cin>>t;
// // while(t--){
// //   ll n,m ; cin>>n>>m;
// //   vector<string> s(n);
// //   map<pair<char,int>,pair<int,int>> mp;
// //   ll cntsp = 0,idx; 
// //   f(i,0,n){
// //     cin>>s[i];
// //     for(int j =0;j<n;j++){
// //       if(s[i][j]=='1') {
// //         mp[{'1',j}].second++;
// //       }else if(s[i][j]=='0'){
// //         mp[{'0',j}].first++;
// //       }
// //       else{
// //           cntsp++;
// //           idx = j;
// //       }
// //     }
// //   }
// //   if(cntsp==m) {
// //     bool ch = true;
// //     for(int i =0;i<m;i++){
// //       if(ch) {s[i][idx] = '1'; ch = false;}
// //       else {s[i][idx] = '0'; ch = true;}
// //     }
// //   }
// //   vector<int> help(n,-1);
// //   f(i,0,n){
// //     if(cntsp==m) continue;
// //     if(mp[{'1',i}]>mp[{'0',i}]){
// //       help[i]=0;
// //     }
// //     else{
// //       help[i]=1;
// //     }
// //   }
// //   ll ans =0;
// //   for(int i =0;i<m-1;i++){
// //     bool ch = true;
// //     for(int j =0;j<n;j++){
// //        if(s[i][j]!='?' && s[i+1][j]!='?'  &&(s[i][j]!=s[i+1][j] || help[j]==8) ) {
        
// //       }
// //       else if(s[i][j]=='?' && help[j]!=-1){
// //         if(s[i+1][j]!=help[j]) ans++;
// //       }
// //       else if(s[i+1][j]=='?' && help[j]!=-1) {
// //         if(s[i][j]!=help[j]) ans++;
// //       }
// //     }
// //   }
// //  cout<<ans<<'\n';

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
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
    
//     int t; 
//     cin >> t;
//     while(t--) {
//         ll n, m;
//         cin >> n >> m;
        
//         vector<string> s(m); // Corrected: Should be m, not n
//         for(int i = 0; i < m; i++) {
//             cin >> s[i];
//         }

//         // To maximize the Hamming distances, we need to handle the '?' optimally
//         vector<int> optimal(n, -1); // Array to store optimal bit (0/1) for each position

//         // We will count occurrences of '0', '1' for each column (i.e., each character position in all strings)
//         for(int j = 0; j < n; j++) {
//             int count0 = 0, count1 = 0, counts=0,idx;
//             for(int i = 0; i < m; i++) {
//                 if (s[i][j] == '0') count0++;
//                 else if (s[i][j] == '1') count1++;
//                 else {counts++; idx=i;}
//             }
//             // We replace '?' in such a way that we balance the counts of '0' and '1' in the column
//             // We prefer the less frequent value to maximize Hamming distance
//              if(counts==m) {
//               bool ch = true;
//        for(int i =0;i<m;i++){
//       if(ch) {s[j][idx] = '1'; ch = false;}
//       else {s[j][idx] = '0'; ch = true;}
//              }
//              continue;
//              }
//             if (count1 > count0) optimal[j] = 0;
//             else optimal[j] = 1;
//         }

//         // Now we replace all '?' with optimal values
//         for(int i = 0; i < m; i++) {
//             for(int j = 0; j < n; j++) {
//                 if (s[i][j] == '?') {
//                     s[i][j] = (optimal[j] == 1) ? '1' : '0';
//                 }
//             }
//         }

//         // Now calculate the sum of Hamming distances for all pairs of strings
//         ll totalHammingDistance = 0;
//         for(int i = 0; i < m; i++) {
//             for(int j = i + 1; j < m; j++) {
//                 ll hammingDist = 0;
//                 for(int k = 0; k < n; k++) {
//                     if (s[i][k] != s[j][k]) hammingDist++;
//                 }
//                 totalHammingDistance += hammingDist;
//             }
//         }

//         cout << totalHammingDistance << '\n';
//     }
    
//     return 0;
// }
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
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
    
//     int t; 
//     cin >> t;
//     while(t--) {
//         ll n, m;
//         cin >> n >> m;
        
//         vector<string> s(m);
//         for(int i = 0; i < m; i++) {
//             cin >> s[i];
//         }

//         vector<int> optimal(n, -1);

//         for(int j = 0; j < n; j++) {
//             int count0 = 0, count1 = 0, questionMarks = 0;

//             for(int i = 0; i < m; i++) {
//                 if (s[i][j] == '0') count0++;
//                 else if (s[i][j] == '1') count1++;
//                 else questionMarks++;
//             }

//             if (questionMarks == m) {
//                 bool alternate = true;
//                 for(int i = 0; i < m; i++) {
//                     s[i][j] = (alternate) ? '1' : '0';
//                     alternate = !alternate;
//                 }
//             } else {
//                 if (count1 > count0) {
//                     optimal[j] = 0;
//                 } else {
//                     optimal[j] = 1;                 }
//             }
//         }

//         for(int i = 0; i < m; i++) {
//             for(int j = 0; j < n; j++) {
//                 if (s[i][j] == '?') {
//                     s[i][j] = (optimal[j] == 1) ? '1' : '0';
//                 }
//             }
//         }

//         // Calculate the sum of Hamming distances for all pairs of strings
//         ll totalHammingDistance = 0;
//         for(int i = 0; i < m; i++) {
//             for(int j = i + 1; j < m; j++) {
//                 ll hammingDist = 0;
//                 for(int k = 0; k < n; k++) {
//                     if (s[i][k] != s[j][k]) hammingDist++;
//                 }
//                 totalHammingDistance += hammingDist;
//             }
//         }

//         cout << totalHammingDistance << '\n';
//     }
//     return 0;

// }


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
    while(t--) {
        ll n, m;
        cin >> n >> m;
        
        vector<string> s(m);
        for(int i = 0; i < m; i++) {
            cin >> s[i];
        }
ll ans =0;
        vector<int> optimal(n, -1);
        for(int j = 0; j < n; j++) {
          ll count0 = 0, count1 = 0;

            for(int i = 0; i < m; i++) {
                if (s[i][j] == '0') count0++;
                else if (s[i][j] == '1') count1++;
      
            }
            while(count0+count1<m){
              if(count0<=count1) count0++;
              else count1++;
            }
            ans+=count1*count0;
        }
        cout<<ans<<'\n';       
    }
    return 0;

}