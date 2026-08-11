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