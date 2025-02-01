int longestPath(int i, int j, vector<vector<int>> &matrix) {
    int ans = 1;

    vector<vector<int>> dir = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    // Check for all 4 directions
    for (auto d : dir) {
        int x = i + d[0];
        int y = j + d[1];

        // If new cells are valid and
        // increasing by 1.
        if (x >= 0 && x < matrix.size() && y >= 0 && 
            y < matrix[0].size() && matrix[x][y] == matrix[i][j] + 1) {
            ans = max(ans, 1 + longestPath(x, y, matrix));
        }
    }

    return ans;
}

int longestIncreasingPath(vector<vector<int>> &matrix) {
    int ans = 0;

    // Find length of longest path
    // from each cell i, j
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
            int val = longestPath(i, j, matrix);
            ans = max(ans, val);
        }
    }

    return ans;
}
