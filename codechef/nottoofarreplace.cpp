// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // #define ll long long int 
// // // #define f(i,a,n) for(int i =a;i<n;i++)
// // // #define vll vector<ll>
// // // #define vi vector<int>
// // // #define pb push_back
// // // #define po pop_back
// // // #define all(v) v.begin(),v.end()
// // // #define no cout << "NO" << '\n';
// // // #define yes cout << "YES" << '\n';
// // // #define sot(v) sort(v.begin(),v.end())
// // // signed main() {
// // // ios_base::sync_with_stdio(false);
// // // cin.tie(0);
// // // int t; cin>>t;
// // // while(t--){
// // //   int n;cin>>n;
// // //   vi v(n+1);
// // //   f(i,0,n+1){
// // //     cin>>v[i];
// // //   }
// // //   int last = v[n];
// // //   while(true){
// // //     bool chk = true;

// // //  f(i,0,n)
// // //         {
// // //             if(v[i]<=2*v[n] && v[i]>v[n])
// // //             {
// // //                 swap(v[i],v[n]);
// // //     last = v[n];
// // //         chk = false;
// // //             }
              
// // //         }
// // //         if(!chk) {
// // //           break;
// // //         }
// // //   }
   
// // //         int cal = accumulate(v.begin(),v.begin()+n+1,0);
// // //         cout<<cal<<'\n';

// // // }
// // // return 0;
// // // }



      
// //       #include<bits/stdc++.h>
// //       using namespace std;
// //       #define ll long long int 
// //       #define f(i,a,n) for(int i =a;i<n;i++)
// //       #define vll vector<ll>
// //       #define vi vector<int>
// //       #define pb push_back
// //       #define po pop_back
// //       #define all(v) v.begin(),v.end()
// //       #define no cout << "NO" << '\n';
// //       #define yes cout << "YES" << '\n';
// //       #define sot(v) sort(v.begin(),v.end())
// //       signed main() {
// //       ios_base::sync_with_stdio(false);
// //       cin.tie(0);
// //       int t; cin>>t;
// //       while(t--){
// //         int n; cin>>n;
// //         string s; cin>>s;
// //         int c =0;
// //         f(i,0,s.size()){
// //     if(s[i]=='1') c++;
// //         }
// //         int see = n-c;
// //         if(see!=0 && see%2!=0){
// //             cout<<1<<'\n';
// //         }
// //         else{
// //           cout<<c<<'\n';
// //         }

// //       }
// //       return 0;
// //       }


// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i,a,n) for(int i =a;i<n;i++)
// #define vll vector<ll>
// #define vi vector<int>
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
//   int n; cin>>n;
//      vi v(n);
//        f(i,0,n) cin>>v[i];
//         int res=0;
//         int c=1;
//         for(int i=0;i<n-1;i++)
//         {
//             if(v[i]==v[i+1])
//             {
//                 c++;
//             }
//             else
//             {
//                 res+=(c)*(c+1)/2;
//                 c=1;
//             }
//         }
 
//         cout<<res<<'\n';
 
// }
// return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

// Function to calculate the number of subarrays for a contiguous segment
ll countSubarrays(int length) {
    return (ll)length * (length + 1) / 2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> A(n);
        
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        
        ll result = 0;
        int currentLength = 1; // Track the length of contiguous segments
        
        for (int i = 1; i < n; i++) {
            if (A[i] == A[i - 1]) {
                currentLength++;
            } else {
                // Add the number of subarrays for the current contiguous segment
                result += countSubarrays(currentLength);
                currentLength = 1; // Reset for the new segment
            }
        }
        
        // Don't forget the last segment
        result += countSubarrays(currentLength);
        
        cout << result << '\n';
    }

    return 0;
}
