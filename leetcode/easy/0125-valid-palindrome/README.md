# Valid Palindrome

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

A phrase is a  **palindrome**  if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string `s`, return `true` *if it is a  **palindrome**, or* `false` *otherwise*.

 

 **Example 1:** 

```
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.

```

 **Example 2:** 

```
Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.

```

 **Example 3:** 

```
Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.

```

 

 **Constraints:** 

- 1 <= s.length <= 2 * 105
- s consists only of printable ASCII characters.

## Solution

**Language:** C++  
**Runtime:** 2 ms (beats 35.98%)  
**Memory:** 9.9 MB (beats 78.03%)  
**Submitted:** 2026-08-11T02:42:40.947Z  

```cpp
class Solution {
public:
    bool isPalindrome(string s) {
        int st = 0;
        int end = s.length() - 1;

        while (st <= end) {

            // Skip spaces and special characters from left
            if (!isalnum(s[st])) {
                st++;
                continue;
            }

            // Skip spaces and special characters from right
            if (!isalnum(s[end])) {
                end--;
                continue;
            }

            // Compare after converting to lowercase
            if (tolower(s[st]) != tolower(s[end])) {
                return false;
            }

            // Move both pointers
            st++;
            end--;
        }

        return true;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/valid-palindrome/)