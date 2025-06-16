class Solution {
private:
    void dfs(int i, int j, vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        if (i < 0 || j < 0 || i >= n || j >= m || grid[i][j] == 0) {
            return;
        }
        grid[i][j] = 0;
        dfs(i + 1, j, grid);
        dfs(i - 1, j, grid);
        dfs(i, j + 1, grid);
        dfs(i, j - 1, grid);
    }

public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        for (int i = 0; i < n; i++) {
            if (grid[i][0] == 1) dfs(i, 0, grid);
            if (grid[i][m - 1] == 1) dfs(i, m - 1, grid);
        }
        for (int j = 0; j < m; j++) {
            if (grid[0][j] == 1) dfs(0, j, grid);
            if (grid[n - 1][j] == 1) dfs(n - 1, j, grid);
        }
        int cnt = 0;
        for (auto row : grid) {
            for (int cell : row) {
                if (cell == 1) cnt++;
            }
        }
        return cnt;
    }
};
