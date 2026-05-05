class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int r = grid.size(), c = grid[0].size(), fresh = 0;
        queue<pair<int,int>> q;

        for(int i=0; i<r; i++) {
            for(int j=0; j<c; j++) {
                if(grid[i][j] == 2) q.push({i,j});
                else if(grid[i][j] == 1) fresh++;
            }
        }

        if(!fresh) return 0;

        int m = 0;
        vector<pair<int,int>> dirs = {{1,0}, {-1,0}, {0,1}, {0,-1}};

        while(!q.empty() && fresh > 0) {
            int n = q.size();
            m++;

            while(n--) {
                auto [x, y] = q.front(); q.pop();

                for(auto d : dirs) {
                    int xx = x + d.first, yy = y + d.second;

                    if(xx >= 0 && xx < r && yy >= 0 && yy < c && grid[xx][yy] == 1) {
                        fresh--;
                        grid[xx][yy] = 2;
                        q.push({xx, yy});
                    }
                }
            }
        }

        return (fresh == 0) ? m : -1;
    }
};