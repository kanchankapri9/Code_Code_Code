class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        // int per = nums[0];
        for(int i = 1; i<nums.size(); i++ ) {
            // nums[i] += per;
           nums[i] += nums[i-1];
            // per = nums[0] + nums[1];
            
        }
        return nums;
    }
};