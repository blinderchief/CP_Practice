

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-->0){
        int n,m;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;
        int i1=0;
        int i2=0;
        int j1=n-1;
        int j2=m-1;
        while(i1<n&&i2<m&&a[i1]==b[i2]){
            i1++;
            i2++;
        }
        while(j1>=0&&j2>=0&&a[j1]==b[j2]){
            j1--;
            j2--;
        }
        if(i1==0)cout<<-1<<"\n";
        else if(i1==n&&i2==m)cout<<0<<"\n";
        else if(i1==n||i2==m)cout<<1<<"\n";
        else if(i1>j1||i2>j2)cout<<1<<"\n";
        else cout<<2<<"\n";
        
          }
}