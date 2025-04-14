class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchRowMatrix(vector<vector<int>> &mat, int x) {
          int n = mat.size();
          if(n==0) return false;
          int m = mat[0].size();
          vector<int> arr;
          for(int i=0;i<n;i++){
              for(int j=0;j<m;j++){
                  arr.push_back(mat[i][j]);
              }
          }
          for(int i=0;i<arr.size();i++){
              if(arr[i] == x) return true;
          }
          return false;
    }
};
