// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // #define ll long long int 
// // // // #define f(i,a,n) for(int i =a;i<n;i++)
// // // // #define vll vector<ll>
// // // // #define pb push_back
// // // // #define po pop_back
// // // // #define all(v) v.begin(),v.end()
// // // // #define no cout << "NO" << '\n';
// // // // #define yes cout << "YES" << '\n';
// // // // #define sot(v) sort(v.begin(),v.end())
// // // // signed main() {
// // // // ios_base::sync_with_stdio(false);
// // // // cin.tie(0);
// // // // int t; cin>>t;
// // // // while(t--){
// // // //   string s,t; cin>>s>>t;
// // // //   if(s==t) {yes continue;}
// // // //   int ch =0;
// // // //   for(int i =s.size()-1;i>=0;i--){
// // // //       if(s[i]==t[t.size()-1]){
// // // //         ch = i;
// // // //         break;
// // // //       }
// // // //   }
// // // //   bool chk =false;
// // // //   for(int i =ch+1;i<s.size();i++){
// // // //     for(int j=0;i<t.size();j++){
// // // //       if(s[i]==t[j]){
// // // //         chk = true;
// // // //         break;
// // // //       }
// // // //     }
// // // //   }
// // // //   if(chk) no 
// // // //   else yes  
// // // // }
// // // // return 0;
// // // // }


// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // #define ll long long int 
// // // #define f(i,a,n) for(int i =a;i<n;i++)
// // // #define vll vector<ll>
// // // #define pb push_back
// // // #define po pop_back
// // // #define all(v) v.begin(),v.end()
// // // #define no cout << "NO" << '\n';
// // // #define yes cout << "YES" << '\n';
// // // #define sot(v) sort(v.begin(),v.end())

// // // signed main() {
// // //     ios_base::sync_with_stdio(false);
// // //     cin.tie(0);
    
// // //     int t; 
// // //     cin >> t;
    
// // //     while(t--) {
// // //         string s, t;
// // //         cin >> s >> t;
        
// // //         if(s == t) {
// // //             yes
// // //             continue;
// // //         }
// // //         int j =0;
// // //         bool chk =false;
// // //         for(int i = 0; i <s.size(); i++) {
// // //             if( j<t.size() && s[i] == t[j] ) {
// // //                 j++;
// // //             }
// // //             if(j==t.size()){
// // //               for(int z =0;z<t.size();z++){
// // //                 if(s[i]==t[z]){
// // //                     chk =true;
// // //                     break;
// // //                 }
// // //               }
// // //             }
// // //             if(chk) break;
// // //         }
// // //         if(j!=t.size()) no
// // //         else if(chk) {
// // //           no
// // //         }
// // //         else yes
// // //     }
    
// // //     return 0;
// // // }

// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // #define ll long long int 
// // // // #define f(i,a,n) for(int i =a;i<n;i++)
// // // // #define vll vector<ll>
// // // // #define pb push_back
// // // // #define po pop_back
// // // // #define all(v) v.begin(),v.end()
// // // // #define no cout << "NO" << '\n';
// // // // #define yes cout << "YES" << '\n';
// // // // #define sot(v) sort(v.begin(),v.end())
// // // // signed main() {
// // // // ios_base::sync_with_stdio(false);
// // // // cin.tie(0);
// // // // int t; cin>>t;
// // // // while(t--){
// // // //   string s,t; cin>>s>>t;
// // // //   map<char,int> mp,mp1;
// // // //   for(int i =0;i<s.size();i++){
// // // //     mp[s[i]]++;
// // // //   }
  
// // // //   for(int i =0;i<t.size();i++){
// // // //    mp1[t[i]]++;
// // // //   } 
 
// // // // }
// // // // return 0;
// // // // }


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
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(0);
    
// //     int t; 
// //     cin >> t;
    
// //     while(t--) {
// //         string s, t;
// //         cin >> s >> t;
        
// //         int j = t.size()-1;
// //         bool chk = false;
// //         int see =0;
// //         for(int i = s.size(); i >=0; i--) {
// //             if(j<0) {break;}
// //             if(j>0 && s[i] == t[j]) {
// //               if(j==t.size()-1) see = i;
// //                 j--;
// //            }
// //         }
// //         for(int i = see+1;i<s.size();i++){
// //           for(int j =0;j<t.size();j++){
// //            if(s[i]==t[j]){
// //             chk = true;
// //             break;
// //           }
// //           }
// //           if(chk) break;
// //         }
// //        if(j!=t.size()) no
// //        else if(!chk)  yes
// //        else no
// //     }
    
// //     return 0;
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
//         string s, t;
//         cin >> s >> t;
        
//         int j = t.size() - 1;
//         int see = -1;
//    map<char,int> mp,mp1; 
//    bool chk = false;
//         for(int i = s.size() - 1; i >= 0 && j>=0; i--) {
//             if(s[i] == t[j]) {
//                 if(mp[t[j]]!=mp[s[i]]) {chk = true; break;}
//                 mp1[t[j]] ++;
//                 mp[s[i]]++;
//                 j--;  
//             }
//             else {
//                 mp[s[i]]++;
//             }
//         }

//        if(chk || j>=0) {
//         no
//        }else {
//         yes
//        }
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
        string s, t;
        cin >> s >> t;
        
        int i = s.size() - 1;
        int j = t.size() - 1;
        
        vector<int> cn1(26, 0), cn2(26, 0);
        bool chk = false;
        
        while(i >= 0 && j >= 0) {
            if(s[i] == t[j]) {  
                if(cn1[s[i] - 'A'] != cn2[t[j] - 'A']) {
                    chk = true;
                    break;
                }
                cn1[s[i] - 'A']++; 
                cn2[t[j] - 'A']++; 
                i--;
                j--;
            } else {
                cn1[s[i] - 'A']++;  
                    i--;
            }
        }
        
        if(chk || j >= 0) no
        else yes
    }
    
    return 0;
}
