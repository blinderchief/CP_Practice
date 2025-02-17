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

 int n, x;
        cin >> n >> x;
        vector<int> a(n);
        
        ll totalCars = 0;
        int maxCars = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            totalCars += a[i];    
            maxCars = max(maxCars, a[i]);  
        }
        
        ll totalCustomers = (totalCars + x - 1) / x;  
        
        ll maxModelCustomers = maxCars;

        cout << max(totalCustomers, maxModelCustomers) << '\n';

}
return 0;
}