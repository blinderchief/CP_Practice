// // #include <bits/stdc++.h>
// // using namespace std;
// // #define ll long long int
// // #define f(i, a, n) for (int i = a; i < n; i++)
// // #define vll vector<ll>
// // #define pb push_back
// // #define po pop_back
// // #define no cout << "NO" << '\n';
// // #define yes cout << "YES" << '\n';
// // #define sot(v) sort(v.begin(), v.end())
// // signed main()
// // {
// //   ios_base::sync_with_stdio(false);
// //   cin.tie(0);
// //   int t;
// //   cin >> t;
// //   while (t--)
// //   {
// //     int n;
// //     cin >> n;
// //     vll v(n);
// //     f(i, 0, n)
// //     {
// //       cin >> v[i];
// //     }
// //     sot(v);
// //     reverse(v.begin(), v.end());
// //     if (v[n - 1] != v[n - 2])
// //     {
// //       if (n % 2 == 0)
// //       {
// //         yes
// //       }
// //       else
// //       {
// //         no
// //       }
// //     }
// //     else
// //     {
// //       if (n % 2 != 0)
// //       {
// //         yes
// //       }
// //       else
// //       {
// //         no
// //       }
// //     }
// //   }
// //   return 0;
// // }


#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
#define vll vector<ll>
#define pb push_back
#define po pop_back
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(),v.end())
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){
  int n;
        cin >> n;
       map<int, int> chk;
        vector<int> v(n);
        int sum = 0;
        bool check = false;
        for(int i = 0; i < n; ++i) {
            cin >> v[i];
            chk[v[i]]++;
        }
        for(int i = 50; i > 0; --i) {
            sum += chk[i];
            if(sum % 2 == 1) {
                check= true;
                break;
            }
        }
        
        if(!check) {
            no
        } else {
            yes
        }
}
return 0;
}