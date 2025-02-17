
#include<bits/stdc++.h>
using namespace std;

int main() {
    int k, n;
    cin >> k >> n;
    
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + (n - k-1));
    reverse(arr.begin() + (n - k-1), arr.end());

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << '\n';

    return 0;
}
