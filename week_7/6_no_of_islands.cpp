class Solution {
public:
    void bfs(int r, int c, vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<int, int>> q;
        
        q.push({r, c});
        grid[r][c] = '0'; 
        
        int delr[] = {-1, 1, 0, 0};
        int delc[] = {0, 0, -1, 1};
        
        while (!q.empty()) {
            int currR = q.front().first;
            int currC = q.front().second;
            q.pop();
            
            for (int i = 0; i < 4; i++) {
                int nr = currR + delr[i];
                int nc = currC + delc[i];
                
               
                if (nr >= 0 && nr < m && nc >= 0 && nc < n && grid[nr][nc] == '1') {
                    grid[nr][nc] = '0'; 
                    q.push({nr, nc});
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty()) return 0;
        int count = 0;
        int m = grid.size();
        int n = grid[0].size();
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1') {
                    count++;
                    bfs(i, j, grid);
                }
            }
        }
        return count;
    }
};