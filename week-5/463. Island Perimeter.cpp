class Solution {
    int goX[4] = {1, 0, -1, 0},
        goY[4] = {0, -1, 0, 1};
    int n, m;
public:
    int dfs(int x, int y, vector<vector<int>>& grid) {
        if(x < 0 || x >= n || y < 0 || y >= m || !grid[x][y]) return 1;

        if(grid[x][y] == 2) return 0;

        grid[x][y] = 2;

        int count = 0;

        for(int i=0; i<4; i++) {
            count += dfs(x + goX[i], y + goY[i], grid);
        }

        return count;
    }

    int islandPerimeter(vector<vector<int>>& grid) {
        n = grid.size(); m = grid[0].size();
        int x = 0, y = 0;

        for(int i=0; i<n; i++) {
            if(grid[x][y]) break;
            for(int j=0; j<m; j++) {
                if(grid[i][j]) {
                    x = i; y = j;
                    break;
                }
            }
        }

        return dfs(x, y, grid);
    }
};