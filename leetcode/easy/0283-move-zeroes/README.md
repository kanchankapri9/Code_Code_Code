# Move Zeroes

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer array `nums`, move all `0`'s to the end of it while maintaining the relative order of the non-zero elements.

 **Note**  that you must do this in-place without making a copy of the array.

 

 **Example 1:** 

```
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

```

 **Example 2:** 

```
Input: nums = [0]
Output: [0]

```

 

 **Constraints:** 

- 1 <= nums.length <= 104
- -231 <= nums[i] <= 231 - 1

 

 **Follow up:**  Could you minimize the total number of operations done?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 23.8 MB (beats 56.53%)  
**Submitted:** 2026-07-25T16:15:46.868Z  

```cpp
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



```

---

[View on LeetCode](https://leetcode.com/problems/move-zeroes/)