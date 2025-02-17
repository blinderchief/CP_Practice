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
  int n,q; cin>>n>>q;
  vector<int> v(n),one,two,three;
 int a=0,b=0,c=0;
  f(i,0,n)
{
cin>>v[i]; 
if(v[i]==1) a++;
if(v[i]==2) b++;
if(v[i]==3) c++;
one.pb(a);
two.pb(b);
three.pb(c);
}

while (q--)
{ 
  int l,r; cin>>l>>r;
  if((r-l+1)%2!=0) no
  else{
    l--; r--;
    int len = r-l+1;
    int cnt1= (l-1>=0)? one[r]-one[l-1]:one[r]; 
    int cnt2= (l-1>=0)? two[r]-two[l-1]:two[r]; 
    int cnt3= (l-1>=0)? three[r]-three[l-1]:three[r]; 
   if(cnt1==len/2 || cnt2==len/2 || cnt3==len/2) {
    yes
   }
   else no
  }

  }

}
return 0;
}