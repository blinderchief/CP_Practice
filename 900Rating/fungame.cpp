// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // #define ll long long int 
// // // // #define f(i,a,n) for(int i =a;i<n;i++)
// // // // #define vll vector<ll>
// // // // #define pb push_back
// // // // #define po pop_back
// // // // #define no cout << "NO" << '\n';
// // // // #define yes cout << "YES" << '\n';
// // // // #define sot(v) sort(v.begin(),v.end())
// // // // signed main() {
// // // // ios_base::sync_with_stdio(false);
// // // // cin.tie(0);
// // // // int t; cin>>t;
// // // // while(t--){
// // // //   int n; cin>>n;
// // // //   string s,t; cin>>s>>t;
// // // //   if(n==1){
// // // //     if(s=="0" && t=="1"){
// // // //       no
// // // //       continue;
// // // //     }
// // // //   }
// // // //   bool check =false;
// // // //   bool ye  = false;
// // // //   f(i,0,n){
// // // //     if(s[i]!=t[i]){
// // // //       if(s[i]=='1'){
// // // //         check = true;
// // // //       }
// // // //       if(s[i]=='1'){
// // // //         continue;
// // // //       }
// // // //       else{
// // // //         if(check){
// // // //           continue;
// // // //         }
// // // //         else{
// // // //           ye = true;
// // // //           break;
// // // //         }
// // // //       }
// // // //     }
// // // //   }
// // // //   if(!ye){
// // // //  yes
// // // //   }
// // // //   else{
// // // //     no
// // // //   }
// // // // }
// // // // return 0;
// // // // }
// // // #include <bits/stdc++.h>
// // // using namespace std;

// // // #define ll long long int 
// // // #define f(i,a,n) for(int i = a; i < n; i++)
// // // #define vll vector<ll>
// // // #define pb push_back
// // // #define po pop_back
// // // #define no cout << "NO" << '\n';
// // // #define yes cout << "YES" << '\n';
// // // #define sot(v) sort(v.begin(), v.end())

// // // signed main() {
// // //     ios_base::sync_with_stdio(false);
// // //     cin.tie(0);

// // //     int t; 
// // //     cin >> t;
    
// // //     while(t--) {
// // //         int n; 
// // //         cin >> n;
// // //         string s, t; 
// // //         cin >> s >> t;

// // //         if (n == 1) {
// // //             if (s == "0" && t == "1") {
// // //                 no
// // //                 continue;
// // //             }
// // //         }

// // //         bool check = false;
// // //         bool ye = false;

// // //         f(i, 0, n) {
// // //             if (s[i] == '1') {
// // //                     check = true;
// // //                 }
// // //             if (s[i] != t[i]) {
// // //                     if (check) {
// // //                         continue;
// // //                     } else {
// // //                         ye = true;
// // //                         break;
// // //                     }
                
// // //             }
// // //         }

// // //         if (!ye) {
// // //             yes
// // //         } else {
// // //             no
// // //         }
// // //     }
    
// // //     return 0;
// // // }


// // #include <bits/stdc++.h>
// // using namespace std;

// // #define ll long long int 
// // #define f(i, a, n) for(int i = a; i < n; i++)
// // #define vll vector<ll>
// // #define pb push_back
// // #define po pop_back
// // #define no cout << "NO" << '\n';
// // #define yes cout << "YES" << '\n';
// // #define sot(v) sort(v.begin(), v.end())

// // signed main() {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(0);

// //     int t; 
// //     cin >> t;
    
// //     while (t--) {
// //         int n;
// //         ll x;
// //         cin >> n >> x;
// //         vll a(n);
// //         f(i, 0, n) cin >> a[i];

// //         int count = 0;
// //         f(l, 0, n) {
// //             ll check = 0;
// //             f(r, l, n) {
// //                 check += a[r];
// //                 if (check> x) {
// //                     check= 0;  
// //                 } else {
// //                     count++; 
// //                 }
// //             }
// //         }
        
// //         cout << count << endl;
// //     }

// //     return 0;
// // }

// // #include <bits/stdc++.h>
// // using namespace std;

// // #define ll long long int 
// // #define f(i, a, n) for(int i = a; i < n; i++)
// // #define vll vector<ll>
// // #define pb push_back

// // signed main() {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(0);

// //     int t; 
// //     cin >> t;
    
// //     while (t--) {
// //         int n;
// //         ll x;
// //         cin >> n >> x;
// //         vll a(n);
// //         f(i, 0, n) cin >> a[i];

// //         int count = 0;
// //         ll total_toxicity = 0;
// //         int l = 0;

// //         f(r, 0, n) {
// //             total_toxicity += a[r];
// //             while (total_toxicity > x) {
// //                 total_toxicity -= a[l];
// //                 l++;
// //             }
// //             count += (r - l + 1); 
// //         }
        
// //         cout << count << endl;
// //     }

// //     return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long int 
// #define f(i, a, n) for(int i = a; i < n; i++)
// #define vll vector<ll>
// #define pb push_back
// #define po pop_back
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(v.begin(), v.end())

// signed main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     int t; 
//     cin >> t;
    
//     while (t--) {
//         int n;
//         ll x;
//         cin >> n >> x;
//         vll a(n);
//         f(i, 0, n) cin >> a[i];

//         int count = 0;
//         f(l, 0, n) {
//             ll check= 0;
//             f(r, l, n) {
//                 check += a[r];
//                 if (check > x) {
//                     check = 0;  
//                 } else {
//                     count++;  
//                 }
//             }
//         }
        
//         cout << count << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define f(i, a, n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define pb push_back
#define po pop_back
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(), v.end())

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; 
    cin >> t;
    
    while (t--) {
        int n;
        ll x;
        cin >> n >> x;
        vll a(n);
        f(i, 0, n) cin >> a[i];

        int count = 0;
        ll sum = 0;
        int start = 0;

        f(end, 0, n) {
            sum += a[end];
            while (sum > x && start <= end) {
                sum -= a[start];
                start++;
            }
            count += (end - start + 1);
        }
        
        cout << count << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n, x;
    cin >> n >> x;
    vector<long long> a(n);
    vector<long long> var(n + 2);
    var[n] = 0;
    var[n + 1] = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    long long ans = 0;
    long long j = n - 1;
    long long sum = 0;
    for (int i = n - 1; i >= 0; i --){
        sum += a[i];
        while (sum > x && j >= i){
            sum -= a[j];
            j --;
        }
        ans += var[j + 2];
        ans += j - i + 1;
        var[i] = var[j + 2] + j - i + 1;
    }
    cout << ans << endl;
}
int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
}
