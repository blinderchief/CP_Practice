#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
#define INF(t) numeric_limits<t>::max()

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int tc; cin >> tc;
	while(tc--) {
		int n; string a, b; cin >> a >> b; n = a.size();
		int ans = 0;
		int i = 0;
		while(i < n && a[i] == b[i]) { i++; ans+=2; }

		if(i == n) {
			cout << ans << "\n";
			continue;
		}

		int x = (a[i] -  '0'), y = (b[i] - '0');
		if(abs(x-y) > 1) {
			cout << ans << "\n";
			continue;
		}

		if(y < x) swap(a, b);

		int ans1 = ans + 1, ans2 = ans + 1; i++; int j = i;
		while(i < n) {
			if(a[i] == '9') {
				if(b[i] == '9') ans1++;
				ans1++;
			}
			else if(a[i] == '8') {
				if(b[i] == '9') ans1++;
				break;
			}
			else break;
			i++;
		}
		while(j < n) {
			if(b[j] == '0') {
				if(a[j] == '0') ans2++;
				ans2++;
			}
			else if(b[j] == '1') {
				if(a[j] == '0') ans2++;
				break;
			}
			else break;
			j++;
		}

		cout << min(ans1, ans2) << "\n";
	}

	return 0;
}