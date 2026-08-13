# Remove All Occurrences of a Substring

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given two strings `s` and `part`, perform the following operation on `s` until  **all**  occurrences of the substring `part` are removed:

- Find the leftmost occurrence of the substring part and remove it from s.

Return `s` *after removing all occurrences of* `part`.

A  **substring**  is a contiguous sequence of characters in a string.

 

 **Example 1:** 

```
Input: s = "daabcbaabcbc", part = "abc"
Output: "dab"
Explanation: The following operations are done:
- s = "daabcbaabcbc", remove "abc" starting at index 2, so s = "dabaabcbc".
- s = "dabaabcbc", remove "abc" starting at index 4, so s = "dababc".
- s = "dababc", remove "abc" starting at index 3, so s = "dab".
Now s has no occurrences of "abc".

```

 **Example 2:** 

```
Input: s = "axxxxyyyyb", part = "xy"
Output: "ab"
Explanation: The following operations are done:
- s = "axxxxyyyyb", remove "xy" starting at index 4 so s = "axxxyyyb".
- s = "axxxyyyb", remove "xy" starting at index 3 so s = "axxyyb".
- s = "axxyyb", remove "xy" starting at index 2 so s = "axyb".
- s = "axyb", remove "xy" starting at index 1 so s = "ab".
Now s has no occurrences of "xy".

```

 

 **Constraints:** 

- 1 <= s.length <= 1000
- 1 <= part.length <= 1000
- s​​​​​​ and part consists of lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** 7 ms (beats 5.67%)  
**Memory:** 12.5 MB (beats 5.22%)  
**Submitted:** 2026-08-13T05:36:57.164Z  

```cpp
// let's start a fresh 
// we can make a windows that has same size as the part
// we move it though s and if window matches we will remove it. 


// here's a catch
// -evrytime when we delete the s has new attached or new indexes beacuse some of the elements has left , we removerd them

// how we will handle them?

// ?? we should be htingiking about it 



// this is the same exaple of it -


// Note that a new occurrence of pattern can appear if you remove an old one, For example, s = "ababcc" and pattern = "abc".


// maaybe after every deletion we have to check it from index 0
// like if something has removed( the one window has matched and removed )
// we will check s from start



class Solution {
    public : 
    // the function
    string removeOccurrences(string s, string part){
        // sure about , it checks for the lentgh pf part
        // slength - partlength will give a number from there , 3 character or whatever the part length is there will be elements exactly size of part possible for window to move till then 
        // 12 - 6 = 6

        for(int i = 0; i <= (int)s.length() - (int)part.length(); i++) {
            // window
             string window = s.substr(i, part.length());

             // check

             if( window == part) {
                s.erase(i, part.length());

                i = -1;
             }
        }

             return s ;
        }


};







```

---

[View on LeetCode](https://leetcode.com/problems/remove-all-occurrences-of-a-substring/)