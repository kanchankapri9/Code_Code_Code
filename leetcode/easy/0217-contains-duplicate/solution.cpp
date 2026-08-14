class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      // sort the arrya

      sort(nums.begin(), nums.end());


        int n = nums.size();

        for(int i = 0; i<n-1; i++ ) {
           
                if( nums[i] == nums[i+1]) {
                    return true;
                }
            
        }
        return false;
    }
};

// capare as old one , ut this  array is sorted ? why sorted array helps to minimize the time?
// let s see