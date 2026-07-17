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
