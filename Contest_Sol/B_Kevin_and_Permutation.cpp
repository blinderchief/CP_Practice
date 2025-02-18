#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int tc; cin >> tc; while (tc--){
  int n , k; cin >> n >> k;

    vector<int> ans(n); int j = 1;

    for (int i = k - 1 ; i < n ; i += k , j++) {
        ans[i] = j;
    }
    for (int i = 1 ; i <= n ; i++) {
        if ((i) % k != 0) ans[i-1] = j , j++;
    }

    for (auto i : ans) cout << i << " ";
    cout<<'\n';
    } 
    return 0;
}