class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int  n = nums.size();
        int left = 0;
        int right = n-1;
        vector<double> avg;
        while(left<right){
            double av = (nums[left] + nums[right])/2.0;
            avg.push_back(av);
            left++;
            right--;
        }
        return *min_element(avg.begin(),avg.end());
    }
};
