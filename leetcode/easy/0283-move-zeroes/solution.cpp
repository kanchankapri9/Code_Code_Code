class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int next = 0; // pointer to track position for next non-zero

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                // swap current non-zero with the element at 
                                              
               nums[next] = nums[i];  
               next++;         
            }
        }

        while(next < nums.size()) {
          nums[next] = 0;
          next++;
        }
    }
};


