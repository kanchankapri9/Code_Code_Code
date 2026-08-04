class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        vector<int> ans;

        int mn = nums[0];
        int mx = nums[0];

        // Find minnu and mixu
        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] < mn)
                mn = nums[i];

            if (nums[i] > mx)
                mx = nums[i];
        }

        // Check 
        for (int num = mn; num <= mx; num++) {   // start = min end = max

            bool found = false;

            // Search 
            for (int j = 0; j < nums.size(); j++) {

                if (nums[j] == num) {

                    found = true;
                    break;
                }
            }

            if (!found)
                ans.push_back(num);
        }

        return ans;
    }
};
