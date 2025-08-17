#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;cin>>t;
    while(t--){
    int n,k;cin>>n>>k;
	vector<ll> v(n);
	for(int i =0;i<n;i++){
	    cin>>v[i];
	}
	
	if(k==n || k==1){
	    if((accumulate(v.begin(),v.end(),0L))<=0){
	        cout<<"NO"<<'\n';
	    }
	    else{
	        
	        cout<<"YES"<<'\n';
	        if(k==n){
	           for(int i =0;i<n;i++){
	            cout<<1<<(i!=n-1 ? " ": '\n');
	        }
	        }
	        else{
	           cout<<n<<'\n'; 
	        }
	        
	    }
	}
	else{
	    
	    
	}
    }
	

}
