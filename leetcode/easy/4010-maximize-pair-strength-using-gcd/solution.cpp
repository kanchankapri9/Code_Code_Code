class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        // nums[i] * nums[j] / gcd(nums[i, nums[j]]2)
        // gcd = greatest common divisor of nums[i,j]
         long long ans = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                long long g = gcd(nums[i], nums[j]);

                long long strength = (1LL * nums[i] * nums[j]) / (g * g);

                ans = max(ans, strength);
            }
        }

        return ans;
    


    }
};


