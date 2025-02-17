/**
 * writer:blinderchief
 **/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define po pop_back
#define me(a, x) memset(a, x, sizeof(a))
#define all(v) v.begin(), v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
int cal(int n){
int sum =0;
while(n>0){
    sum+=(n%10);
    n/=10;
}
return sum;
}
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
int main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    if(t<=6){
        int a =1;int b=1;
        if(t==1) cout<<1<<'\n';
       else  if(t==2)  cout<<1<<" "<<1<<'\n';
        else {
            cout<<1<<" "<<1<<" ";
            for(int i =3;i<=t;i++){
                int c = a+b;
                cout<<c<<" ";
                a= b;
                b = c;
        }
        cout<<'\n';}
    }
    else{
        int a =1; int b=1; 
          cout<<1<<" "<<1<<" ";
              for(int i =3;i<=t;i++){
                int c = a+b;
                if(i%7==0){
                    a = b;
                    b= cal(c);
                    cout<<b<<" ";
                    continue;
                }
                if(i%8==0){
                    a = b;
                    b = cal(c);
                    cout<<b<<" ";
                    continue;
                }
                
                cout<<c<<" ";

                a= b;
                b = c;
        }

cout<<'\n';
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}