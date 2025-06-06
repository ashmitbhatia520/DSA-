class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    if (matrix.empty())
        return {};

    int m = matrix.size();
    int n = matrix[0].size();
    vector<int> ans;
    int top = 0;
    int bottom = m - 1;
    int left = 0;
    int right = n - 1;

    while (top <= bottom && left <= right) {
        for (int j = left; j <= right; j++) {
            ans.push_back(matrix[top][j]);
        }
        top++; 
        for (int i = top; i <= bottom; i++) {
            ans.push_back(matrix[i][right]);
        }
        right--; 

        if (top <= bottom) { 
            for (int j = right; j >= left; j--) {
                ans.push_back(matrix[bottom][j]);
            }
            bottom--; 
        }

        if (left <= right) { 
            for (int i = bottom; i >= top; i--) {
                ans.push_back(matrix[i][left]);
            }
            left++; 
        }
    }

    return ans;
}
};
