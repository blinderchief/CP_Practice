// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i,a,n) for(int i =a;i<n;i++)
// #define vll vector<ll>
// #define pb push_back
// #define po pop_back
// #define no cout << "NO" << '\n';
// #define yes cout << "YES" << '\n';
// #define sot(v) sort(v.begin(),v.end())
// signed main() {
// ios_base::sync_with_stdio(false);
// cin.tie(0);
// int t; cin>>t;
// while(t--){
//   int n;cin>>n;
//   vll v(n);
//   map<int,int> mp;
//   f(i,0,n){
//     cin>>v[i];
//     mp[v[i]]++;
//   }
//   if(n==1 || mp.size()==1){
//     cout<<0<<'\n';
//     continue;
//   }
//   else if(mp[1]==n-1){
//     cout<<-1<<'\n';
//     continue;
//   }
//   else{
//     sot(v);
//     int cnt =0;
//     while(v[n-1]!=1){
//       v[n-1] = ceil(double(v[n-1])/v[n-2]);
//       cnt++;
//     }
//     cout<<n-1+cnt<<'\n';
//     f(i,0,n-1){
//       cout<<i+1<<" "<<n<<'\n';
//     }
//     while(cnt--){
//       cout<<n<<" "<<n-1<<'\n';
//     }
//  }
// }
// return 0;
// }

#include<bits/stdc++.h>
using namespace std;

using ll =  long long;
using vll = vector<ll>;
using vi = vector<int>;
using pll = pair<ll,ll>;
using pi = pair<int,int>;
#define all(a) std::begin((a)),std::end((a))
#define sort(a) std::sort(all(a))
#define rep(i,s,e) for(ll i=s;i<e;i++)
#define rrep(i,s,e) for(ll i=e-1;i>=s;i--)
#define dbg(x) cout << #x << "=" << x << endl;
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define readv(n) for(auto& x:n) cin >> x;
#define printv(n,c) for(auto& x:n) cout << x << c;
#define NL cout << "\n";
#define YES cout << "YES\n" << endl
#define NO cout << "NO\n" << endl

void solve()
{
    int n;cin>>n;
    vector<int> a(n);
    readv(a);

    if(n==1)
    {
        cout<<"0\n";
        return;
    }
    vector<pair<int,int>> ans;
    while(1)
    {
        int mn = min_element(all(a))-a.begin();
        int mx = max_element(all(a))-a.begin();

        if(a[mn]==a[mx])
        {
            break;
        }
        if(a[mn]==1)
        {
            cout<<"-1\n";
            return;
        }
        if(a[mx]==2)
        {
            break;
        }
        a[mx]=ceil(1.0*a[mx]/a[mn]);
        ans.push_back({mx,mn});
        
    }

    cout<<ans.size()<<endl;

    for(auto i : ans)
    {
        cout<<i.first+1<<" "<<i.second+1<<endl;
}
    
}

signed main()
{
     ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int t;
    cin >> t;
    rep(i,1,t+1)
    {
        solve();
    }
}