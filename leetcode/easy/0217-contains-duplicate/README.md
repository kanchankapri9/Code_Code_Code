# Contains Duplicate

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer array `nums`, return `true` if any value appears  **at least twice**  in the array, and return `false` if every element is distinct.

 

 **Example 1:** 

 **Input:**  nums = [1,2,3,1]

 **Output:**  true

 **Explanation:** 

The element 1 occurs at the indices 0 and 3.

 **Example 2:** 

 **Input:**  nums = [1,2,3,4]

 **Output:**  false

 **Explanation:** 

All elements are distinct.

 **Example 3:** 

 **Input:**  nums = [1,1,1,3,3,4,3,2,4,2]

 **Output:**  true

 

 **Constraints:** 

- 1 <= nums.length <= 105
- -109 <= nums[i] <= 109

## Solution

**Language:** C++  
**Runtime:** 24 ms (beats 89.83%)  
**Memory:** 82.9 MB (beats 77.18%)  
**Submitted:** 2026-08-14T17:44:09.963Z  

```cpp
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
// done
```

---

[View on LeetCode](https://leetcode.com/problems/contains-duplicate/)