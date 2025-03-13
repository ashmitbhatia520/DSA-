class Solution {
public:
void gets(vector<int>& nums,vector<int>& ans, int i, vector<vector<int>> &get){
    if(i==nums.size()){
        get.push_back({ans});
        return;
    }

    ans.push_back(nums[i]);
    gets(nums,ans,i+1,get);
    ans.pop_back();
    gets(nums,ans,i+1,get);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> get;
        gets(nums,ans,0,get);
        return get;
    }
};
