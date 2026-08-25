class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int i = 1;

        while (true) {
            bool found = false;

            for (int num : nums) {
                if (num == k * i) {
                    found = true;
                    break;
                }
            }

            if (!found) {
                return k * i;
            }

            i++;
        }
    }
};