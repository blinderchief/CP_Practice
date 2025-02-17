#include <bits/stdc++.h>
using namespace std;

int main() {
int t; cin>>t;
while(t--){
    int a,b;cin>>a>>b;
    int cnt=0;
    while(a!=b){
        
        if(a>b) {
            cnt += ceil(a/2.0);
            a = a-ceil(a/2.0);  }
        else {
            cnt +=ceil(b/2.0);
            b = b-ceil(b/2.0);}
        
    }
    cout<<cnt<<'\n';
}
}
