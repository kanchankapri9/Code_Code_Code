# Max Consecutive Ones

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a binary array `nums`, return  *the maximum number of consecutive* `1` *'s in the array*.

 

 **Example 1:** 

```
Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.

```

 **Example 2:** 

```
Input: nums = [1,0,1,1,0,1]
Output: 2

```

 

 **Constraints:** 

- 1 <= nums.length <= 105
- nums[i] is either 0 or 1.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 50.3 MB (beats 34.21%)  
**Submitted:** 2026-07-19T17:24:31.673Z  

```cpp
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
    int n = nums.size();
    int Maxio = 0;  // maxio = max(Count,Maxio);  // stl
    int Count = 0;

    for(int i=0; i<n; i++) {
        if(nums[i] == 1) {
            Count++;
        Maxio = max(Count,Maxio);
        } else {
            Count = 0;
        }
    }
    return Maxio ;
    }
};



// current count
// max

// icrese count when i found 
// reset count when 0 came
// update max when , count > max 
// 


```

---

[View on LeetCode](https://leetcode.com/problems/max-consecutive-ones/)