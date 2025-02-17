// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		long long int n;
// 		cin>>n;
// 		long long int n2;
// 		n2 = (n*(n-1))/2;
// 		vector<long long int>b(n2, 0);
// 		map<long long int, long long int>m;
// 		for (int i = 0 ; i < n2 ; i ++)
// 		{
// 			cin>>b[i];
// 			if(m.find(b[i])==m.end())
// 			{
// 				m[b[i]] = 0;
// 			}
// 			m[b[i]]++;
// 		}
// 		b.clear();
// 		for (auto it = m.begin() ; it != m.end() ; it++)
// 		{
// 			b.push_back(it->first);
// 		}
// 		reverse(b.begin(), b.end());
// 		vector<long long int>ans;
// 		for (int i = 0 ; i < b.size() ; i ++)
// 		{
// 			if(m[b[i]]<=ans.size())
// 			{
// 				ans.push_back(b[i]);
// 			}else
// 			{
// 				long long int h = ans.size();
// 				long long int temp3 = b[i];
// 				long long int num1 = (2*h-1)*(2*h-1)+8*m[b[i]];
// 				long long int temp2 = (1-2*h+sqrt(num1))/2;
// 				//cout<<temp3<<" "<<temp2<<endl;
// 				for (int i = 0 ; i < temp2 ; i++)
// 				{
// 					ans.push_back(temp3);
// 				}
// 			}

// 		}
// 		//cout<<ans.size()<<endl;
// 		if(n>ans.size())
// 		{
// 			//cout<<"HOO"<<endl;
// 			while(ans.size() != n)
// 			{
// 				ans.push_back(ans[0]);
// 			}
// 		}
// 		for (int i = 0 ; i <  n; i++)
// 		{
// 			cout<<ans[i]<<" ";
// 		}
// 		cout<<endl;


// 	}    

// }


#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,a,n) for(int i =a;i<n;i++)
#define vll vector<ll>
#define pb push_back
#define po pop_back
#define all(v) v.begin(),v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(v.begin(),v.end())
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){
	int n; cin>>n;
	ll rangw = n*(n-1)/2;
	vll v(rangw); map<ll,ll> mp;
	f(i,0,rangw)
	{ cin>>v[i];
   mp[v[i]]++;
	}
	vector<ll> b;
	 for(auto it = mp.begin();it!=mp.end();it++){
     b.pb(it->first);
	 }
	 reverse(all(b));
	 vector<ll> ans;
f(i,0,b.size()){
if(mp[b[i]]<=ans.size()){
	ans.pb(b[i]);
}
else{ 
	ll h = ans.size();
	ll num1= (2*h -1)*(2*h -1) + 8*mp[b[i]];
	ll temp =  (1 - 2*h + sqrt(num1)) /2;
	f(i,0,temp){
		ans.pb(b[i]);
	}
}
}
if(n>ans.size()){
	while(ans.size()!=n){
		ans.pb(b[0]);
	}
}
f(i,0,ans.size()) 
{
	cout<<ans[i]<<" ";
}
cout<<"\n";

}
return 0;
}