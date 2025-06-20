#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
#define INF(t) numeric_limits<t>::max()

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int tc; cin >> tc;
	while(tc--) {
		ll n; cin >> n;
		string s; cin >> s;

		ll ans = (n*(n+1)*(n+2))/6;
		vector<int> dd;
		dd.push_back(0);
		int d = 0;
		for(int i = 0; i < n; i++) {
			if(s[i] == '0') d++;
			else d--;
			dd.push_back(d);
		}

		sort(dd.begin(), dd.end());

		ll pref = dd[0];
		for(int i = 1; i < n+1; i++) {
			ans += (ll)i*dd[i] - pref;
			pref += dd[i];
		}

		cout << ans/2 << "\n";
	}

	return 0;
}