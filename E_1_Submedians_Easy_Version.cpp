// pair<bool, pair<int, int>> check(int n, vector<int> &a, int k, int mid) {
// 	vector<int> temp(n);
// 	for(int i = 0; i < n; i++) {
// 		if(a[i] < mid) temp[i] = -1;
// 		else temp[i] = 1;
// 	}
 
// 	vector<int> pref(n); pref[0] = temp[0];
// 	for(int i = 1; i < n; i++) pref[i] = pref[i-1] + temp[i];
 
// 	int min_pref = 0, min_pref_pos = 0;
// 	for(int i = k-1; i < n; i++) {
// 		if(pref[i] - min_pref >= 0) {
// 			return {true, {min_pref_pos, i}};
// 		}
 
// 		if(pref[i-(k-1)] < min_pref) {
// 			min_pref = pref[i-(k-1)];
// 			min_pref_pos = i-(k-1)+1;
// 		}
// 	}
 
// 	return {false, {-1, -1}};
// }
 
// int main() {
// 	ios_base::sync_with_stdio(false); cin.tie(0);
 
// 	int tc; cin >> tc;
// 	while(tc--) {
// 		int n, k; cin >> n >> k;
// 		vector<int> a(n);
// 		for(auto &x : a) cin >> x;
 
// 		int l = 1, r = n, best = 0;
// 		int L = 0, R = 0;
// 		while(l <= r) {
// 			int mid = (l+r)/2;
// 			auto chk = check(n, a, k, mid);
// 			if(chk.first) {
// 				if(mid > best) {
// 					best = mid;
// 					L = chk.second.first;
// 					R = chk.second.second;
// 				}
// 				l = mid + 1;
// 			}
// 			else {
// 				r = mid - 1;
// 			}
// 		}
// 		cout << best << " " << L+1 << " " << R+1 << "\n";
// 	}
 
// 	return 0;
// }