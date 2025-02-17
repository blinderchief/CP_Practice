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
int a[100010],b[100010];
    int n,l,r;
    cin>>n>>l>>r;
    l--; r--;
    
    for(int i=0;i<n;i++)  cin>>a[i];
    for(int i=0;i<n;i++)   cin>>b[i];
    
    sort(b+l,b+r+1);
    
    sort(a+l,a+r+1);
    
    for(int i=0;i<n;i++)  if(a[i]!=b[i])  {cout<<"LIE"; return 0;}
    
    cout<<"TRUTH";
    return 0;
}
