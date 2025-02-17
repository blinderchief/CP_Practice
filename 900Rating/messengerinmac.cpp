#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
#define vll vector<ll>
#define pb push_back
#define po pop_back
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(),v.end())
bool sorta(const pair<ll,ll> &a,const pair<ll,ll> &b){return (a.second < b.second);}

signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){
  ll n,l; cin>>n>>l;
    vector<pair<ll,ll>>v(n);
    for(int i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        v[i].first=a;
        v[i].second=b;
    }
    sort(v.begin(),v.end(),sorta);
    int ans = 0;
    for(int i = 0; i < n; i++){
        priority_queue<int> pq;
        int sum = 0;
        for(int j = i; j < n; j++){
            pq.push(v[j].first);
            sum += v[j].first;
            while(!pq.empty() && sum + v[j].second - v[i].second > l){
                sum -= pq.top();
                pq.pop();
            }
            ans = max(ans, (int)pq.size());
        }
    }
    cout<< ans << endl;

}
return 0;
}