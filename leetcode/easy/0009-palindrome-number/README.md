# Palindrome Number

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer `x`, return `true` *if* `x` *is a   palindrome , and* `false` *otherwise*.

 

 **Example 1:** 

```
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.

```

 **Example 2:** 

```
Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

```

 **Example 3:** 

```
Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

```

 

 **Constraints:** 

- -231 <= x <= 231 - 1

 

 **Follow up:**  Could you solve it without converting the integer to a string?

## Solution

**Language:** C++  
**Runtime:** 4 ms (beats 31.38%)  
**Memory:** 8.6 MB (beats 65.75%)  
**Submitted:** 2026-07-17T18:24:33.097Z  

```cpp
class Solution {
public:
    bool isPalindrome(int x) {
        // Step 1: Negative numbers are not palindromes
        if (x < 0) return false;

        // Step 2: Reverse the number
        long long reversed = 0;   // use long long to avoid overflow
        int original = x;

        while (x != 0) {
            int digit = x % 10;          // extract last digit
            reversed = reversed * 10 + digit; // build reversed number
            x /= 10;                     // remove last digit
        }

        // Step 3: Compare reversed with original
        return reversed == original;
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/palindrome-number/)