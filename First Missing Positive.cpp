class Solution {
    public int firstMissingPositive(int[] nums) {
        int missing = 1;
        Arrays.sort(nums);
        for(int num :nums){
            if(num>0){
                if(num==missing) missing++;
                else if(num>missing) break;
            }
        }
        return missing;
    }
}
