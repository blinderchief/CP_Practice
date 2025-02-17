// #include <iostream>
// using namespace std;

// bool isPeriodic(long long n) {
//     if (n == 1 || n==2 || n==3) return true; 

//     string binary = "";
//     while (n > 0) {
//         binary = (n % 2 == 0 ? '0' : '1') + binary;
//         n /= 2;
//     }

//     int runLength = 0, i = 0;
//     while (i < binary.size()) {
//         int start = i;
//         while (i < binary.size() && binary[i] == binary[start]) {
//             i++;
//         }
//         if (runLength == 0) {
//             runLength = i - start; 
//         } else if (runLength != i - start) {
//             return false; 
//         }
//     }
//     return true;
// }

// int countPeriodicNumbers(long long L, long long R) {
//     int count = 0;
//     for (long long i = L; i <= R; i++) {
//         if (isPeriodic(i)) count++;
//     }
//     return count;
// }

// int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         long long L, R;
//         cin >> L >> R;
//         cout << countPeriodicNumbers(L, R) << "\n";
//     }
//     return 0;
// }

