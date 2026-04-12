class Solution {
    int goX[4] = {1,0,-1,0},
        goY[4] = {0,-1,0,1},
        n, m;
public:
    void dfs(int x, int y, vector<vector<char>>& grid) {
        if(x < 0 || x >= n || y < 0 || y >= m || grid[x][y] == '0') return;

        grid[x][y] = '0';

        for(int i=0; i<4; i++) {
            int xx = x + goX[i], yy = y + goY[i];
            dfs(xx,yy,grid);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        n = grid.size(), m = grid[0].size();
        int res = 0;

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j] == '1') {
                    res++;
                    dfs(i,j,grid);
                }
            }
        }

        return res;
    }
};