# Odd or Even

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given a positive integer  **n**, determine whether it is odd or even. Return  **true** if the number is even and  **false** if the number is odd.

 **Examples:** 

```
Input: n = 15
Output: false
Explanation: The number is not divisible by 2, Odd number.
```

```
Input: n = 44
Output: true
Explanation: The number is divisible by 2, Even number.
```

 **Constraints:** 
1 ≤ n ≤ 104

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-16T09:23:38.659Z  

```java
class Solution {
    static boolean isEven(int n) {
        // code here
        if( n%2 == 0 ) {
            return true;
        } else {
        return false;
        }
    }
    
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/odd-or-even3618/1)