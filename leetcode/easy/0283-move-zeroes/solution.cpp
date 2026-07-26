class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int next = 0; // pointer to track position for next non-zero

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[next], nums[i]);
               next++;         
            }
        }

        // while(next < nums.size()) {
        //   nums[next] = 0;   // next at the index of 3 where non zero ending now will have 0
        //   next++;
        // }
    }
};