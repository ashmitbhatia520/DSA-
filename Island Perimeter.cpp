class Solution {
public:
int cnt = 0;
    int islandPerimeter(vector<vector<int>>& grid) {
        cnt = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j] == 1){
                    dfs(grid,i,j);
                    break;
                }
            }
        }
        return cnt;
    }
    private:
    void dfs(vector<vector<int>>& grid,int i,int j){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j] == 0){
            cnt++;
            return ;
        }
        if(grid[i][j] == -1) return;
        grid[i][j] = -1;
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
    }
};
