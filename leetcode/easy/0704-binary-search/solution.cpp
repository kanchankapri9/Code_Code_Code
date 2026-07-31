class Solution {
public:
    int search(vector<int>& nums, int target) {

        int min = 0;
        int maz = nums.size() - 1;

        while (min <= maz) {

            // middle index
            int mid = min + (maz - min) / 2;

            // Target found if mid == target 
            if (nums[mid] == target) {
                return mid;
            }

            // Search the e right half
            else if (nums[mid] < target) {
                min = mid + 1;
            }

            // Search  left half
            else {
                maz = mid - 1;
            }
        }

        // Target not found
        return -1;
    }
};