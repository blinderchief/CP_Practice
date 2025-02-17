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
// ios_base::sync_with_stdio(false);
// cin.tie(0);
// int temp2 = 9,temp3=1;
// for(int i =1;i<=5;i++){
// int temp1 =i;
//   for(int j= 1;j<=5;j++){
//     if(j%2!=0){
//      cout<<temp1<<" ";
//      temp1+=temp2;
//     }else{
//       cout<<temp1<<" ";
//       temp1+=temp3;
//     }
//   }
//   temp2-=2;
//   temp3+=2;
//   cout<<'\n';
// }
// return 0;
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
    int temp2  = 2;int temp3 = 1; int temp4 = 1;int temp5 = 11;
  for(int i =1;i<=6;i++){
     int temp1= i;
    for(int j =1;j<=i;j++){
      if(j%2!=0){
        cout<<temp1<<" ";
         temp1+=temp5;
      }
      else{
        if(j%4==0){
          cout<<temp1<<" ";
          temp1+=2*temp3;
        }else{
          cout<<temp1<<" ";
          temp1+=2*temp4;
        }
      }  
    }
    temp5-=2; 
    if(i>=5){
     temp3++;
    }
   if(i>=3){
     temp4++;
   }
  cout<<'\n';
  }
    return 0;
}
