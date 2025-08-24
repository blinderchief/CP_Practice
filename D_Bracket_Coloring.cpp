#include<bits/stdc++.h>
#define int long long
using namespace std;
int f(string s){
	int bal = 0;
    for (char c : s) {
        if (c == '(') bal++;
        else bal--;
        if (bal < 0) return false;
    }
    return bal == 0;
}
int solve(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	int c1 = count(s.begin(),s.end(),'(');
	if(c1 != n-c1){
		cout << "-1\n";
		return 0;
	}
	if(f(s)){
		cout << "1\n";
		for(int i=0;i<n;i++){
			cout << "1 ";
		}
		cout << endl;
		return 0;
	}
	string rev = s;
	reverse(rev.begin(),rev.end());
	if(f(rev)){
		cout << "1\n";
		for(int i=0;i<n;i++){
			cout << "1 ";
		}
		cout << endl;
		return 0;
	}
	vector<int> l(n,0),r(n,0);
    int bal=0;
    for(int i=0;i<n;i++){
        if(s[i]=='('){ 
			bal++; 
		}
    else{ 
			bal--;
		}
    if(bal>=0){ 
			l[i]=1; 
		}
    }
    bal=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]==')'){ 
			bal++; 
		}
        else{ 
			bal--; 
		}
        if(bal>=0){ 
			r[i]=1; 
		}
    }
    cout<<"2\n";
    for(int i=0;i<n;i++){
        if(l[i] && r[i]){ 
			cout<<"1 "; 
		}
        else{ 
			cout<<"2 "; 
		}
    }
    cout<<"\n";
	return 0;
}
signed main(){
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}
