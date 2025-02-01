int shortestCommonSupersequence(string &s1, string &s2) {
    return s1.size() + s2.size() - lcs(s1, s2);
}
