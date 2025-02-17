/**
 * writer: blinderchief 
 **/
#include <bits/stdc++.h>
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

    int t; 
    cin >> t;
    while (t--) {
        ll n, a, b, c;
        cin >> n >> a >> b >> c;
        ll cal = (a+b+c);
        ll see = n/cal;
        ll cal1 =  n%cal;
        ll asn=  see*3;
        vi v(3);
        v[0]= a;
        v[1]=b;
        v[2]= c;
        int i =0; 
        while(cal1>0){
                asn+=1;
                cal1-=(v[i++]);
                if(i>2){
                    i=0;
                }
        }
        cout<<asn<<"\n";
    //     int chk= a+b+c;
    //     ll ans = 3; 
    //     while (chk < n) {
    //         chk *= 2; 
    //         ans+=3;
    //     }
    // if(chk==n){
    //     cout<<ans<<'\n';
    // }
    // else{
    //     ll chk =  (chk-(a+b+c));
    //     int see = 0;
    //     while(chk<n){
    //         see++;
    //     }
    //     cout<<ans-3+see<<"\n";
    // }
    }

    return 0;
}
