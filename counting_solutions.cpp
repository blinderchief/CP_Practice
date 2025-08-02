#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 1000007;

vector<int> sieve(int max_num) {
    vector<int> spf(max_num + 1);
    for (int i = 0; i <= max_num; ++i) {
        spf[i] = i;
    }
    for (int i = 2; i * i <= max_num; ++i) {
        if (spf[i] == i) {
            for (int j = i * i; j <= max_num; j += i) {
                if (spf[j] == j) {
                    spf[j] = i;
                }
            }
        }
    }
    return spf;
}

int main() {
    int N;
    cin >> N;
    if (N == 0) {
        cout << 0 << endl;
        return 0;
    }
    
    int max_p = N;
    auto spf = sieve(max_p);
    
    vector<int> prime_exponents(max_p + 1, 0);
    
    for (int i = 2; i <= N; ++i) {
        int num = i;
        while (num > 1) {
            int p = spf[num];
            while (num % p == 0) {
                prime_exponents[p]++;
                num /= p;
            }
        }
    }
    
    long long result = 1;
    for (int p = 2; p <= N; ++p) {
        if (prime_exponents[p] > 0) {
            result = (result * (2LL * prime_exponents[p] + 1)) % MOD;
        }
    }
    
    cout << result << endl;
    
    return 0;
}