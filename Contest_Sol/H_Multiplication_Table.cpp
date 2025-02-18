/**
 * writer:blinderchief 
**/
#include<bits/stdc++.h>
using namespace std;
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
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

void go(int x, int k) {
	if (x == 0) cout << 0;
	else {
		int nxt = x / k;
		if (nxt != 0) {
			go(nxt, k);
		}
		cout << x % k;
	}
}
int main() {
	auto begin = chrono::high_resolution_clock::now();
ios_base::sync_with_stdio(false);
cin.tie(0);
int k;
	cin >> k;
	for (int i = 1; i < k; i++) {
		for (int j = 1; j < k; j++) {
			go(i * j, k);
			cout << " ";
		}
		cout << "\n";
	}
auto end = chrono::high_resolution_clock::now();
auto elapsed = chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
// cout << "Time taken:" << elapsed.count()*1e-9 << "seconds" << endl;
return 0;
}



