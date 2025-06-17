// #include <iostream>
// #include <vector>
// using namespace std;

// // Function to compute the LPS (Longest Prefix Suffix) array
// void computeLPSArray(const string& pattern, vector<int>& lps) {
//     int length = 0;  // Length of the previous longest prefix suffix
//     int i = 1;
//     int m = static_cast<int>(pattern.size());
//     lps[0] = 0;  // LPS[0] is always 0

//     while (i < m) {
//         if (pattern[i] == pattern[length]) {
//             length++;
//             lps[i] = length;
//             i++;
//         } else {
//             if (length != 0) {
//                 length = lps[length - 1];  // Try a shorter prefix
//             } else {
//                 lps[i] = 0;
//                 i++;
//             }
//         }
//     }
// }

// // KMP search function
// vector<int> KMPSearch(const string& text, const string& pattern) {
//     int n = text.size();
//     int m = pattern.size();

//     vector<int> lps(m);
//     computeLPSArray(pattern, lps);

//     vector<int> result;
//     int i = 0; // Index for text[]
//     int j = 0; // Index for pattern[]

//     while (i < n) {
//         if (pattern[j] == text[i]) {
//             i++;
//             j++;
//         }

//         if (j == m) {
//             result.push_back(i - j);  // Match found at index i - j
//             j = lps[j - 1];  // Prepare for the next match
//         } else if (i < n && pattern[j] != text[i]) {
//             if (j != 0)
//                 j = lps[j - 1];
//             else
//                 i++;
//         }
//     }

//     return result;
// }

// // Example usage
// int main() {
//     string text = "ababcababcabc";
//     string pattern = "ababc";

//     vector<int> matches = KMPSearch(text, pattern);

//     for (int pos : matches)
//         cout << "Pattern found at index " << pos << endl;

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

// Compute the Longest Prefix Suffix (LPS) array
void computeLPSArray(const string& pattern, vector<int>& lps) {
    int len = 0;
    lps[0] = 0;
    int i = 1;

    while (i < pattern.size()) {
        if (pattern[i] == pattern[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
}

// KMP search that counts overlapping matches
int countOverlappingMatches(const string& text, const string& pattern) {
    int n = text.size();
    int m = pattern.size();
    vector<int> lps(m);

    computeLPSArray(pattern, lps);

    int i = 0, j = 0;
    int count = 0;

    while (i < n) {
        if (text[i] == pattern[j]) {
            i++;
            j++;
        }

        if (j == m) {
            count++;             // Found a match
            j = lps[j - 1];      // Allow overlapping by resetting j
        } else if (i < n && text[i] != pattern[j]) {
            if (j != 0)
                j = lps[j - 1];
            else
                i++;
        }
    }

    return count;
}

// Example usage
int main() {
    string text = "aaaabaaabaaa";
    string pattern = "aa";

    int result = countOverlappingMatches(text, pattern);
    cout << "Pattern found " << result << " times (including overlaps)." << endl;

    return 0;
}
