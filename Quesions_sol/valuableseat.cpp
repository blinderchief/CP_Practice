#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
	int t; cin >> t;
	while (t--) {
		int n, x; cin >> n >> x;
		vector <int> a(n);
		for (int i = 0; i < n; ++i) cin >> a[i];
 
		set <int> s;
		s.insert(x);
		int st = 0;
		int cnt = 1;
		for (int i = 0; i < n; i++) {
			if (s.count(a[i])) {
				s.clear();
				s.insert(x);
				s.insert(x / a[i]);
				++cnt;
			} else {
				vector <int> to_add;
				for (int x : s) {
					if (x % a[i] == 0) to_add.push_back(x / a[i]);
				}
				for (int x : to_add) s.insert(x);
			}
		}
		cout << cnt << '\n';
	}
}

