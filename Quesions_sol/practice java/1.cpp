// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i,a,n) for(int i =a;i<n;i++)
// #define vll vector<ll>
// #define pb push_back
// #define po pop_back
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(v.begin(),v.end())
// signed main() {
// ios_base::sync_with_stdio(false);
// cin.tie(0);
// int temp1 =2;
// for(int i=1;i<=5;i++){
//   for(int j =i;j<5;j++){
//     cout<<" ";
//   }
//    int temp =2, temp2 = i-1;
//   for(int k =1;k<=2*i-1;k++){
//     if(k==1 || k==2*i-1){
//       cout<<'1';
//     }
//    else  if(k==ceil((double(2*i-1))/2)){
//       cout<<temp1;
//       temp1++;
//     }
//     else{
//       if(k<ceil((double(2*i-1))/2)){
//         cout<<temp;
//         temp++;
//       }
//       else{
//         cout<<temp2;
//         temp2--;
//       }
//     }
//   }
//   cout<<'\n';

// }
// return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i,a,n) for(int i =a;i<n;i++)
// #define vll vector<ll>
// #define pb push_back
// #define po pop_back
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(v.begin(),v.end())
// signed main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int temp = 1;
//     for(int i = 1; i <= 5; i++) {
//         int sum=0;
//         if(i==1){
//             cout<<temp<<'\n';
//             temp+=2;
//             continue;
//         }
//        for(int j=1;j<=2*i-1;j++){
//         if(j!=ceil(double(2*i-1)/2)){
//             cout<<temp<<" ";
//             sum+=temp;
//             temp+=2;
//         }
//         else{
//             int check = (2*i-1) - ceil(double(2*i-1)/2);
//             int an = (temp-2)*check + check*(check+1);
//             cout<<sum+an<<" ";
//         }
//        }
//        cout<<'\n';    
//   }
//   return 0;
// }
        
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i,a,n) for(int i =a;i<n;i++)
// #define vll vector<ll>
// #define pb push_back
// #define po pop_back
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(v.begin(),v.end())
// signed main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int temp = 1;
//     for(int i = 1; i <= 4; i++) {
//         for(int k =1;k<=5-i+1;k++){
//             cout<<" ";
//         }
//         int sum=0;
//         if(i==1){
//             cout<<" ";
//             cout<<temp<<'\n';
//             temp+=2;
//             continue;
//         }
//        for(int j=1;j<=2*i-1;j++){
//         if(j!=ceil(double(2*i-1)/2)){
//             cout<<temp<<" ";
//             sum+=temp;
//             temp+=2;
//         }
//         else{
//             int check = (2*i-1) - ceil(double(2*i-1)/2);
//             int an = (temp-2)*check + check*(check+1);
//             cout<<sum+an<<" ";
//         }
//        }
//        cout<<'\n';    
//   }
//     return 0;
// }
