#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int MAD(const vector<int>& arr) {
    unordered_map<int, int> count;
    int max_dup = 0;

    // Count frequencies of each element
    for (int num : arr) {
        count[num]++;
    }

    // Find the maximum element that appears at least twice
    for (const auto& pair : count) {
        if (pair.second >= 2) {
            max_dup = max(max_dup, pair.first);
        }
    }

    return max_dup;
}

int process_array(vector<int>& a) {
    int total_sum = 0;
    int n = a.size();
    vector<int> b(n);

    while (true) {
        bool all_zeros = true;

        // Calculate the sum of the array
        for (int i = 0; i < n; i++) {
            total_sum += a[i];
            if (a[i] != 0) {
                all_zeros = false;
            }
        }

        if (all_zeros) {
            break;
        }

        // Compute the MAD for each prefix and fill array b
        for (int i = 0; i < n; i++) {
            b[i] = MAD(vector<int>(a.begin(), a.begin() + i + 1));
        }

        // Update array a with array b
        a = b;
    }

    return total_sum;
}

int main() {
    vector<int> a ={2,2,3} ;
    int result = process_array(a);
    cout << result << endl; // Expected output: 5
    return 0;
}
