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
  int n; cin>>n;
  vi a(n);
  f(i,0,n) cin>>a[i];
  int cnt= 1;
   bool check = false;
        for(int i = 0; i < n - 1; i++){
            int chkmx = max(a[i], a[i+1]);
            int chkmi= min(a[i], a[i+1]);
            if(2 * chkmi > chkmx) {
                check = true;
                break;
            }
        }

if(check) yes
else no    

}
return 0;
}

