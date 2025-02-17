// /**
//  * writer: blinderchief 
// **/
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i,a,n) for(int i =a;i<n;i++)
// #define vll vector<ll>
// #define vi vector<int>
// #define pb push_back
// #define po pop_back
// #define me(a, x) memset(a, x, sizeof(a))
// #define all(v) v.begin(),v.end()
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(all(v))

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int t; 
//     cin >> t;
//     while(t--) {
//         string s; 
//         cin >> s;
//         ll cal = 0;
//         int cnt2 = 0, cnt3 = 0;
//         for(int i = 0; i < s.size(); i++) {
//             if((int)(s[i] - '0') == 2) cnt2++;
//             else if((int)(s[i] - '0') == 3) cnt3++;
//             cal += (int)(s[i] - '0');
//         }
//         int chk = ((cal % 9)-9)%9;
//         if(chk == 0) {
//             yes
//         } else {
//              bool flag =false;
//          for(int i =0;i<=cnt3;i++){
//             ll tempchk = chk;
//             tempchk+=(6*i);
//             if(!(tempchk%9)){
//                 yes
//                 flag = true;
//                 break;
//             }      
//         for(int j=0;j<=cnt2;j++){
//            tempchk+=2*j;
//            if(tempchk%9==0){
//             yes 
//             flag = true;
//             break;
//            }
//             }
//             if(flag) {
//                 break;
//             }
//          }
//          if(!flag) {
//             no
//          } 
//         }
//     }
//     return 0;
// }


/**
 * writer: blinderchief 
 **/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define po pop_back
#define me(a, x) memset(a, x, sizeof(a))
#define all(v) v.begin(),v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; 
    cin >> t;
    while(t--) {
        string s; 
        cin >> s;

        ll cal = 0;
        int cnt2 = 0, cnt3 = 0;

        // Count digits and calculate sum
        for(char c : s) {
            int dig = c - '0';
            if(dig == 2) cnt2++;
            else if(dig == 3) cnt3++;
            cal += dig;
        }
        int chk = cal % 9;
        if(chk == 0) {
            yes
            continue;
        }
        bool found = false;
        for(int i = 0; i <= cnt3 && !found; i++) {
            for(int j = 0; j <= cnt2; j++) {
                if((chk + 6 * i + 2 * j) % 9 == 0) {
                    yes
                    found = true;
                    break;
                }
            }
        }

        if(!found) {
            no;
        }
    }
    return 0;
}
