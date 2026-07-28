# Unique Number of Occurrences

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array of integers `arr`, return `true`  *if the number of occurrences of each value in the array is  **unique**  or* `false` *otherwise*.

 

 **Example 1:** 

```
Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
```

 **Example 2:** 

```
Input: arr = [1,2]
Output: false

```

 **Example 3:** 

```
Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true

```

 

 **Constraints:** 

- 1 <= arr.length <= 1000
- -1000 <= arr[i] <= 1000

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 11.9 MB (beats 68.53%)  
**Submitted:** 2026-07-28T18:26:14.492Z  

```cpp
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map<int, int> freq;

        // I will Count the frequency of each number
        for (int num : arr) {
            freq[num]++;
        }

        unordered_set<int> seen;

        // Check if any frequency is repeated
        for (auto &entry : freq) {
            if (seen.count(entry.second)) {
                return false;
            }
            seen.insert(entry.second);
        }

        return true;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/unique-number-of-occurrences/)