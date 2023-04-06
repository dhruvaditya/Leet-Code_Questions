// DFS used to solve this problem
class Solution {
public:
   void dfs(vector<vector<int>> &grid, int n, int m, int r, int c, int &fl){
        if (r<0 || c>=m || r>=n || c<0 || grid[r][c]==1){
            return;
        }
        if (r==0||c==0||r==n-1||c==m-1){ // <--- if anyone touches the edge set fl = 1; and keep marking the cluster
            fl = 1;
        }
        grid[r][c] = 1;
        dfs(grid, n, m , r+1, c, fl);
        dfs(grid, n, m , r-1, c, fl);
        dfs(grid, n, m , r, c+1, fl);
        dfs(grid, n, m , r, c-1, fl);
    }
    int closedIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        for (int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if (grid[i][j]==0){
                    int fl = 0;
                    dfs(grid, n, m, i, j, fl);
                    if (!fl){
                        count++;
                    }
                }
            }
        }
        return count;
        
    }
};
