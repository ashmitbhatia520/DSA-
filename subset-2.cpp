class Solution {
public:
void gets(vector<int> &nums, vector<int> &ans, int i,vector<vector<int>> &get){
      if(i==nums.size()){
          get.push_back({ans});
          return;
      }
      
      ans.push_back(nums[i]);
      gets(nums,ans,i+1,get);
      ans.pop_back();
      int idx=i+1;
      while(idx<nums.size() && nums[idx] == nums[idx-1]) idx++;
      gets(nums,ans,idx,get);
  }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        vector<vector<int>> get;
        gets(nums,ans,0,get);
        sort(get.begin(),get.end());
        return get;
    }
};
