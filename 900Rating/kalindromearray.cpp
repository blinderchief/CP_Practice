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
int n; 
vector<int> v(n);
bool check(int i,int j,int k){
while(i<=j){
  if(v[i]!=v[j]){
    if(v[i]==k){
      i++;
    }
    else if(v[j]==k){
      j--;
    }
    else return false;
  }
  else{
    i++;
    j--;
  }
}
return true;
}
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){
cin>>n;
v.resize(n);
  f(i,0,n){
    cin>>v[i];
  }
  int i =0,j=n-1;
  int chk1 = true,chk2 =true, chk3 =true;
  while(i<=j){
    if(v[i]!=v[j]){
      chk1 = check(i+1,j,v[i]);
      chk2 = check(i,j-1,v[j]);
      break;
    }
    else {
      i++;
      j--;
    }
  }
  if(chk1 || chk2){
    yes
  }
  else no
}
return 0;
}
