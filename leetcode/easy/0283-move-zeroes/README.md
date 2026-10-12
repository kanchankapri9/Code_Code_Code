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

**Language:** Java  
**Runtime:** 2 ms (beats 91.51%)  
**Memory:** 47.6 MB (beats 75.09%)  
**Submitted:** 2026-10-12T11:47:25.473Z  

```java
class Solution {
    public void moveZeroes(int[] nums) {
        int i = 0;
        while ( i < nums.length && nums[i] != 0) {
            i++;
        }

        for ( int j = i + 1; j<nums.length; j++) {
            if(nums[j] != 0) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            

            i++;
        }
        }
}
}
```

---

[View on LeetCode](https://leetcode.com/problems/move-zeroes/)