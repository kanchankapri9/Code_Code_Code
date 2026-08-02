# Maximize Pair Strength Using GCD

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an integer array `nums`.

Choose exactly one pair of distinct indices `i` and `j`. The strength of the pair is defined as `(nums[i] * nums[j]) / gcd(nums[i], nums[j])2`.

Return the maximum strength over all possible pairs.

 

 **Example 1:** 

 **Input:**  nums = [2,3,5]

 **Output:**  15

 **Explanation:** 

Choosing `i = 1` and `j = 2` gives strength `(3 * 5) / gcd(3, 5)2 = 15 / 1 = 15`, which is the maximum over all pairs.

 **Example 2:** 

 **Input:**  nums = [4,6,8]

 **Output:**  12

 **Explanation:** 

Choosing `i = 1` and `j = 2` gives strength `(6 * 8) / gcd(6, 8)2 = 48 / 4 = 12`, which is the maximum over all pairs.

 **Example 3:** 

 **Input:**  nums = [3,3]

 **Output:**  1

 **Explanation:** 

Choosing `i = 0` and `j = 1` gives strength `(3 * 3) / gcd(3, 3)2 = 9 / 9 = 1`, the maximum over all pairs.

 

 **Constraints:** 

- 2 <= nums.length <= 2000
- 1 <= nums[i] <= 105

## Solution

**Language:** C++  
**Runtime:** 753 ms (beats 65.41%)  
**Memory:** 37.2 MB (beats 18.52%)  
**Submitted:** 2026-08-02T17:17:14.049Z  

```cpp
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



```

---

[View on LeetCode](https://leetcode.com/problems/maximize-pair-strength-using-gcd/)