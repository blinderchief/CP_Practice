
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

int colorCount(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 2;
    if (n == 4) return 3;
    if (n == 5) return 3;
    return 4;
}

void assignColors(int n, int numColors, vector<int> &colors) {
    if (n <= 5) {
        static vector<vector<int>> predefinedColors = {
            {1},
            {1, 2},
            {1, 2, 2},
            {1, 2, 2, 3},
            {1, 2, 2, 3, 3}
        };
        colors = predefinedColors[n - 1];
        return;
    }
    int currentColor = 1;
    for (int i = 1; i <= n; ++i) {
        colors.push_back(currentColor);
        currentColor = (currentColor % numColors) + 1;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int numColors = colorCount(n);
        vector<int> colors;
        assignColors(n, numColors, colors);

        cout << numColors << '\n';
        for (int i = 0; i < n; ++i) {
            if (i > 0) cout << " ";
            cout << colors[i];
        }
        cout << '\n';
    }

    return 0;
}
