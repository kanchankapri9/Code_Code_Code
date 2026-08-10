class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<int> ans(2 * n);   // we got the size it's going to be n*2
        
        for(int i = 0; i < n; i++) {
            ans[i] = nums[i];
            ans[i + n] = nums[i];     // i+n = 0+3 , 1+3, 2+3
        }
        
        return ans;
    }
};