#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// #define ll int
#define l(i,st,n) for(int i=st;i<n;i++)
#define rl(i,st,n) for(int i=n-1;i>=st;i--)
#define srt(v) sort(v.begin(),v.end())
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define vp(v) vector<pair<int,int>> v;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<char> v(n);
        l(i,0,n) cin>>v[i];
        int cnt0=0,cnt1=0;
        bool check=true;
        l(i,0,n){
            
            if(v[i]=='1'){
                cnt1++;
                check=true;
            }
            else{
                if(check){
                    cnt0++;
                    check=false;
                }
            }
        }
        if(cnt1>cnt0) yes;
        else no;
        
    }
}