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
// //   int n;cin>>n;
// //   vector<int>v(n);
// //   map<int,int> mp;
// //   f(i,0,n){
// //     cin>>v[i];
// //     mp[v[i]]++;
// //   }
// //   int chk = *max_element(all(v));
  
// //   if(n%2==0) cout<<chk+n/2<<'\n';
// //   else{
// //    if(mp[chk]==n/2) cout<<chk+(n/2) <<'\n';
// //    else{
// //     if(chk%2!=0)cout<<chk+(n/2)+(abs(n/2-mp[chk]))<<'\n';
// //     else cout<<chk+(n/2)+(abs(n/2-mp[chk]-1))<<'\n';
// //    }

// //   }
// // }
// // return 0;
// // }
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
    
//     int t; 
//     cin >> t;
    
//     while (t--) {
//         int n;
//         cin >> n;
        
//         vector<int> v(n);
//         for (int i = 0; i < n; i++) {
//             cin >> v[i];
//         }        
//         int max1 =0;int max2=0;
//         int count1 = 0,count2=0;
//         for (int i = 0,j=1; i < n,j<n; i += 2,j+=2) {
//             max1 = max(max1,v[i]);
//             count1++;
//             max2= max(max2,v[j]);
//             count2++;
//         }
//         cout<<max((max1+count1), (max2+count2));
        
    
//     }
    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; 
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int max1 = 0, max2 = 0;
        int count1 = 0, count2 = 0;
        
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) { 
                max1 = max(max1, v[i]);
                count1++;
            } else { 
                max2 = max(max2, v[i]);
                count2++;
            }
        }

        cout << max((max1 + count1), (max2 + count2)) << '\n';
    }

    return 0;
}
