#include<bits/stdc++.h>
using namespace std;

int countCarries(const vector<long long>& b) {
    int carry = 0;
    int carriesCount = 0;
    for (long long num : b) {
        long long temp = num + carry;
        while (temp > 9) {
            carriesCount++;
            temp /= 10;
        }
        carry = temp;
    }
    return carriesCount;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;  
    cin >> t;
    
    while (t--) {
        int n;  
        cin >> n;

        vector<long long> a(n);  
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        if(n==1) {cout<<0<<'\n'; continue;}

        sort(a.begin(), a.end());

        int result = countCarries(a);
        
        cout << result << '\n';
    }

    return 0;
}
