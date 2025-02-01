bool evaluate(bool b1, bool b2, char op) {
    if (op == '&') {
        return b1 & b2;
    }
    else if (op == '|') {
        return b1 | b2;
    }
    return b1 ^ b2;
}

// Function which returns the number of ways
// s[i:j] evaluates to req.
int countRecur(int i, int j, bool req, string &s) {

    // Base case:
    if (i == j) {
        return (req == (s[i] == 'T')) ? 1 : 0;
    }

    int ans = 0;
    for (int k = i + 1; k < j; k += 1) {

 int leftTrue = countRecur(i, k - 1, 1, s);
        int leftFalse = countRecur(i, k - 1, 0, s);

        // Count Ways in which right substring
        // evaluates to true and false.
        int rightTrue = countRecur(k + 1, j, 1, s);
        int rightFalse = countRecur(k + 1, j, 0, s);

        // Check if the combinations results
        // to req.
        if (evaluate(true, true, s[k]) == req) {
            ans += leftTrue * rightTrue;
        }
        if (evaluate(true, false, s[k]) == req) {
            ans += leftTrue * rightFalse;
        }
        if (evaluate(false, true, s[k]) == req) {
            ans += leftFalse * rightTrue;
        }
        if (evaluate(false, false, s[k]) == req) {
            ans += leftFalse * rightFalse;
        }
    }

    return ans;
}
int countWays(string s) {
      int n = s.length();
    return countRecur(0, n - 1, 1, s);
}
