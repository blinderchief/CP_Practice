// /**
//  * writer:blinderchief 
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
// ios_base::sync_with_stdio(false);
// cin.tie(0);
// int t; cin>>t;
// while(t--){
//   int n;cin>>n;
//   vi v(n);
//   int cnt0 =0;
//   f(i,0,n){
//     cin>>v[i];
//     if(v[i]==0) cnt0++;
//   }
//   if(cnt0==v.size()){
//     cout<<0<<'\n';
//   }
//   else if(cnt0==0){
//     cout<<1<<"\n";
//   }
//   else{
//    if(v[0]!=0){
//     if(v[n-1]!=0){
//       auto it = find(v.begin(), v.end(),0);
//       if(it!=v.end()){
//         cout<<2<<'\n';
//       }
//       else{
//         cout<<1<<'\n';
//       }
//     }
//     else{
//             auto it = find(v.begin(),v.end()-1,0);
//             if(it!=v.end()-1){
//               cout<<2<<'\n';
//             }
//             else{
//               cout<<1<<'\n';
//             }
//     }
//    }
//    else {
//     if(v[n-1]==0){
//     auto it = find(v.begin()+1, v.end()-1,0);
//     if(it!=v.end()-1){
//       cout<<2<<'\n';
//     }
//     else{
//       cout<<1<<'\n';
//     }
//     }
//     else {
//           auto it = find(v.begin()+1, v.end(),0);
//          if(it!=v.end()){
//           cout<<2<<'\n';
//          }
//          else{
//           cout<<1<<'\n';
//          }
//     }
//    }

//   }

// }
// return 0;
// }


#include<bits/stdc++.h>
using namespace std;

#define ll long long int 
#define f(i, a, n) for (int i = a; i < n; i++)
#define vi vector<int>
#define all(v) v.begin(), v.end()

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi v(n);
        bool hasZ = false;
        bool hasNZ = false;
        f(i, 0, n) {
            cin >> v[i];
            if (v[i] == 0) hasZ = true;
            if (v[i] != 0) hasNZ = true;
        }

        if (!hasNZ) {
            cout << 0 << '\n';
        } else if (!hasZ) {
            cout << 1 << '\n';
        } else {
            auto firstNZ = find_if(all(v), [](int x) { return x != 0; });
            auto lastNZ = find_if(v.rbegin(), v.rend(), [](int x) { return x != 0; }).base() - 1;

            if (find(firstNZ, lastNZ + 1, 0) != lastNZ + 1) {
                cout << 2 << '\n';
            } else {
                cout << 1 << '\n';
            }
        }
    }

    return 0;
}
