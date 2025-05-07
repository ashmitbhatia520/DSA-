class Solution {
public:
    int trap(vector<int>& height) {
        int num_elements = height.size(); 
        if(num_elements < 2) {
            return 0;
        }
        vector<int> left_max(num_elements), right_max(num_elements); 
        left_max[0] = height[0];
        right_max[num_elements - 1] = height[num_elements - 1];
        for (int i = 1; i < num_elements; ++i) {
            left_max[i] = max(left_max[i - 1], height[i]);
        }
        for (int i = num_elements - 2; i >= 0; --i) {
            right_max[i] = max(right_max[i + 1], height[i]);
        }
      
        int total_water = 0;
        for (int i = 0; i < num_elements; ++i) {
            total_water += min(left_max[i], right_max[i]) - height[i];
        }
        return total_water;
    }
};
