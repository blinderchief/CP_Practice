int countTriplets(const std::vector<int>& A) {
    int n = A.size();
    std::vector<int> leftGreater(n, 0), rightSmaller(n, 0);

    // Fill leftGreater array
    for (int j = 1; j < n; ++j) {
        for (int i = 0; i < j; ++i) {
            if (A[i] > A[j]) {
                leftGreater[j]++;
            }
        }
    }

    // Fill rightSmaller array
    for (int j = 0; j < n - 1; ++j) {
        for (int k = j + 1; k < n; ++k) {
            if (A[j] > A[k]) {
                rightSmaller[j]++;
            }
        }
    }

    // Calculate the number of valid triplets
    int tripletCount = 0;
    for (int j = 1; j < n - 1; ++j) {
        tripletCount += leftGreater[j] * rightSmaller[j];
    }

    return tripletCount;
}
