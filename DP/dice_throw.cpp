int noOfWays(int m, int n, int x) {
  // Base case: Valid combination    if (n == 0 && x == 0)return 1;
    // Base case: Invalid combination
    if (n == 0 || x <= 0)
        return 0;
    int ans = 0;
    // Check for all values of m.
    for (int i = 1; i <= m; i++) {
        ans += noOfWays(m, n - 1, x - i);
    }

    return ans;
}
