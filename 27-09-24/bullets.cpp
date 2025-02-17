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
        vector<int> v(n);
        
        f(i, 0, n) cin >> v[i];
        
        if(is_sorted(all(v))) {
            cout << n << '\n'; 
        } else {
            int cnt = 0;
            for (int i = 0; i < n - 1; i++) {
                if (abs(v[i] - v[i + 1]) == 1 && v[i] > v[i + 1]) {
                    int j = i + 1;
                    while (j < n && abs(v[j] - v[j - 1]) == 1 && v[j - 1] > v[j]) {
                        j++;
                    }
                    cnt++; 
                    if(j==n) break;
                    i = j -2; 
                } else {
                    cnt++; 
                }
            }
            cout << cnt << '\n';
        }
    }
    
    return 0;
}

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
// int count(vector<int>& numbers) {
//     int cnt = 0;
//     int max_digits = 0;
//     vector<int> digits(100); 
    
//     for (int num : numbers) {
//         int index = 0;
//         while (num > 0) {
//             digits[index] += num % 10;
//             num /= 10;
//             index++;
//         }
//         max_digits = max(max_digits, index);  
//     }
    
//     for (int i = 0; i < max_digits; i++) {
//         digits[i] += cnt;  
//         if (digits[i] > 9) {
//             cnt = digits[i] / 10;
//         } else {
//             cnt = 0;
//         }
//     }
    
//     return cnt;
// }

// signed main() {
// ios_base::sync_with_stdio(false);
// cin.tie(0);
// int t; cin>>t;
// while(t--){
//  int n;
//         cin >> n;
//         vector<int> a(n);
        
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
        
//         sort(a.rbegin(), a.rend());
        
//         int res = count(a);
        
//         cout << res <<'\n';
// }
// return 0;
// }


