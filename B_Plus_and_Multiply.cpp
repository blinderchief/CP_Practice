#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n,a,b;
    cin >> n >> a >> b;
    int val=1;
    if(a==1){
    	if((n-1)%b == 0){
    		cout << "Yes\n";
		}
		else{
			cout << "No\n";
		}
		return;
	}
	while(val <= n){
		if((n-val)%b == 0){
			cout << "Yes\n";
			return;
		}
		val *= a;
	}
	cout << "No\n";
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    	solve();
	}
}
