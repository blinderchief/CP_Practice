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
int t; cin>>t;
while(t--){
  int n;cin>>n;
  vector<int>  v(n);
  f(i,0,n) cin>>v[i];
  ll suml=0,sumr=0;
  for(int i =0,j=n-1;i<j;i++,j--){
      suml+=v[i];
      sumr+=v[j];
  }
  if(n%2==1) {
    if(suml!=sumr){
      if(suml+v[n/2] == sumr|| sumr+v[n/2]==suml) {cout<<n<<'\n'; continue;}
    }
  }
  if(suml!=sumr){
    if(suml>sumr){
      int cnt=0;
      int i = (n/2) -1;
      while( i>=0 && sumr!=suml){
          suml-=v[i];
          i--;
          cnt++;
      }
      if(suml!=sumr) {
        cout<<0<<'\n'; continue;
      }
      if(n%2==0){
        cout<<n-cnt<<"\n";
      }else{
        cout<<n-cnt-1<<'\n';
      }

    }
    else{
      int cnt= 0;
      int j = (n/2) +1;
      while(j<n && sumr!=suml)
      {
        sumr-=v[j];
        j++;
        cnt++;
      }
      if(suml!=sumr){ cout<<0<<'\n'; continue;}
      if(n%2==0){
        cout<<n-cnt<<"\n";
      }else{
        cout<<n-cnt-1<<'\n';
      }
    }
  }
  else{
    if(n%2==0) cout<<n<<'\n';
    else cout<<n-1<<'\n';
  }
}

return 0;
}