// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         vector<int> odd,even,chk;
//         for (int i = 0; i < n; ++i) {
//             cin >> a[i];
//             if (a[i] % 2 == 0) {
//                even.push_back(a[i]);
//             } else {
//                 odd.push_back(a[i]);
//             }
//         }
//         int cnt=0;
//         if(even.size()==0 || odd.size()==0){
//           cout<<0<<'\n';
//           continue;
//         }
//         else{
//          ll ch = *max_element(odd.begin(),odd.end());
//           for(int i =0;i<even.size();i++){
//             if(even[i]<ch){
//               cnt++;
//             }
//             else{
//               chk.push_back(even[i]);
//             }
//           }
//           ll flag = *max_element(chk.begin(),chk.end());
//           while(true){
//            ch+=flag;
//            cnt++;
//             if(ch>flag){
//               break;
//             }
//           }
          
//     cout<<cnt+chk.size()<<'\n';
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

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> odd, even, chk;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] % 2 == 0) {
                even.push_back(a[i]);
            } else {
                odd.push_back(a[i]);
            }
        }
        
        int cnt = 0;

        if (even.size() == 0 || odd.size() == 0) {
            cout << 0 << '\n';
            continue;
        } else {
            ll lo = *max_element(odd.begin(), odd.end()); // Largest odd
            sort(a.begin(), a.end());
            for (int i = 0; i < n; i++) {
                if (a[i] % 2 == 0 && a[i] < lo) {
                    cnt++;
                    a[i] = a[i] + lo;
                    lo = max(lo, a[i]);
                }
            }

            bool all_same_parity = true;
            for (int i = 1; i < n; i++) {
                if (a[i] % 2 != a[0] % 2) {
                    all_same_parity = false;
                    break;
                }
            }

            if (all_same_parity) {
                cout << cnt << "\n";
                continue;
            }

            ll indx = 0; // Index of largest odd
            for (int i = 0; i < n; i++) {
                if (a[i] % 2 == 1 && a[i] == lo) {
                    indx = i;
                    break;
                }
            }

            a[indx] = lo + *max_element(even.begin(), even.end());
            cnt++;

            for (int i = 0; i < n; i++) {
                if (a[i] % 2 == 0) {
                    cnt++;
                }
            }

            cout << cnt << "\n";
        }
    }

    return 0;
}

