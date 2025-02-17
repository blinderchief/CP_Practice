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
  vector<int>a={1,0,0,1};
        vector<int>b={0,1,1,0};int n,m;cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i%4==0 || i%4==3){
                    cout<<a[j%4]<<" ";
                }
                else
                {
                    cout<<b[j%4]<<" ";
                }
            }
            cout<<'\n';
        }
        

}
return 0;
}
