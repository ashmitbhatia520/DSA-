class Solution {
public:
bool is(vector<vector<int>>& grid, int r,int c,int n, int exp){
    if(r<0 || c<0 || r>=n || c>=n || grid[r][c] != exp) return false;
    if(exp == n*n - 1) return true;

    int ans1 = is(grid,r-2,c+1, n,exp+1);
    int ans2 = is(grid,r-1,c+2, n,exp+1);
    int ans3 = is(grid,r+1,c+2, n,exp+1);
    int ans4 = is(grid,r+2,c+1, n,exp+1);
    int ans5 = is(grid,r+2,c-1, n,exp+1);
    int ans6 = is(grid,r+1,c-2, n,exp+1);
    int ans7 = is(grid,r-1,c-2, n,exp+1);
    int ans8 = is(grid,r-2,c-1, n,exp+1);

    return ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7 || ans8;
}
    bool checkValidGrid(vector<vector<int>>& grid) {
        return is(grid,0,0,grid.size(),0);
    }
};
