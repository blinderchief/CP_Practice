
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int tc; cin >> tc;
	while(tc--) {
				int n; cin >> n;
		set<int> s;
		for(int i = 0; i < n; i++) s.insert(i+1);
		vector<int> v(n);
		for(auto &x : v) {
			cin >> x;
			if(x) s.erase(x);
		}
		for(auto &x : v) {
			if(!x) {
				auto it = s.end(); it--;
				x = *it;
				s.erase(it);
			}
		}
		int l = n+1, r = n;
		for(int i = 0; i < n; i++) {
			if(v[i] != i+1) {
				r = i;
				l = min(l, i);
			}
		}
		cout << (r-l+1) << "\n";

  }
	return 0;
}