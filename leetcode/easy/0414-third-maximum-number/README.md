# Third Maximum Number

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer array `nums`, return  *the  **third distinct maximum**  number in this array. If the third maximum does not exist, return the  **maximum**  number*.

 

 **Example 1:** 

```
Input: nums = [3,2,1]
Output: 1
Explanation:
The first distinct maximum is 3.
The second distinct maximum is 2.
The third distinct maximum is 1.

```

 **Example 2:** 

```
Input: nums = [1,2]
Output: 2
Explanation:
The first distinct maximum is 2.
The second distinct maximum is 1.
The third distinct maximum does not exist, so the maximum (2) is returned instead.

```

 **Example 3:** 

```
Input: nums = [2,2,3,1]
Output: 1
Explanation:
The first distinct maximum is 3.
The second distinct maximum is 2 (both 2's are counted together since they have the same value).
The third distinct maximum is 1.

```

 

 **Constraints:** 

- 1 <= nums.length <= 104
- -231 <= nums[i] <= 231 - 1

 

 **Follow up:**  Can you find an `O(n)` solution?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 13 MB (beats 47.01%)  
**Submitted:** 2026-08-03T16:55:34.797Z  

```cpp
class Solution {
public:
    int thirdMax(vector<int>& nums) {

        // We use long long because nums can contain INT_MIN.
        // Initializing with LLONG_MIN ensures it is smaller than every int.
        long long first = LLONG_MIN;
        long long second = LLONG_MIN;
        long long third = LLONG_MIN;

        for (int num : nums) {

            // Skip duplicate values.
            if (num == first || num == second || num == third)
                continue;

            // If current number is the largest so far,
            // shift first -> second, second -> third.
            if (num > first) {
                third = second;
                second = first;
                first = num;
            }

            // If current number lies between first and second.
            else if (num > second) {
                third = second;
                second = num;
            }

            // If current number lies between second and third.
            else if (num > third) {
                third = num;
            }
        }

        // If there are fewer than 3 distinct elements,
        // return the largest.
        if (third == LLONG_MIN)
            return first;

        return third;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/third-maximum-number/)