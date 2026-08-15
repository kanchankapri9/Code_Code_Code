# Group Anagrams

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of strings `strs`, group the anagrams together. You can return the answer in  **any order**.

 

 **Example 1:** 

 **Input:**  strs = ["eat","tea","tan","ate","nat","bat"]

 **Output:**  [["bat"],["nat","tan"],["ate","eat","tea"]]

 **Explanation:** 

- There is no string in strs that can be rearranged to form "bat".
- The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.
- The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.

 **Example 2:** 

 **Input:**  strs = [""]

 **Output:**  [[""]]

 **Example 3:** 

 **Input:**  strs = ["a"]

 **Output:**  [["a"]]

 

 **Constraints:** 

- 1 <= strs.length <= 104
- 0 <= strs[i].length <= 100
- strs[i] consists of lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** 16 ms (beats 58.91%)  
**Memory:** 26.2 MB (beats 39.63%)  
**Submitted:** 2026-08-15T18:28:21.484Z  

```cpp
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mp;

        for (string s : strs) {
            string key = s;
            sort(key.begin(), key.end());

            mp[key].push_back(s);
        }

        vector<vector<string>> ans;

        for (auto it : mp) {
            ans.push_back(it.second);
        }

        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/group-anagrams/)