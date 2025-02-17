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
  string s; cin>>s;
  int l1 = 1,r1=s.size(),l2=0,r2=0; 
  int check= -1;
 for(int i =0;i<s.size();i++){
    if(s[i]=='0'){
      check=i;
      break;
    }
 }    
 if(check==-1){
    check  = s.size()-1;
 }
  int k = check-1;
 for (int j = check ; j < s.size() && k >= 0 ; j++ , k--) {
        if (s[j] == '1') break;
    }
 cout << 1 << " " << r1<< " " << k+2 << " " <<  k+1 +s.size() - check;
 cout<<'\n';
}
return 0;
}


