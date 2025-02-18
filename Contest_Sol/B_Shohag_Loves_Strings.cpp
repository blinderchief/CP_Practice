/**
 * writer:blinderchief 
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
int t; cin>>t;
while(t--){
  string s;  cin>>s;
  int n=s.size();
  if(n==1) cout<<-1<<'\n';
  else{  
    bool chk = false;
    for(int i =0;i<n-1;i++){
      if(s[i]==s[i+1]){
        cout<<s[i]<<s[i+1]<<'\n';
        chk =true;
        break;
      }
    }
    if(!chk){
    for(int i =0;i<n-2;i++){
    //   if(s[i]!=s[i+1]){
    //     cout<<s[i]<<s[i+1]<<'\n';
    //  chk =true;
    //     break;
    //   }
      if(s[i]!=s[i+2]){
        cout<<s[i]<<s[i+1]<<s[i+2]<<'\n';
        chk =true;
        break;
      }
    }
    if(!chk){
      cout<<-1<<'\n';
    }
    } 

   } 
  
  
  }

return 0;
}