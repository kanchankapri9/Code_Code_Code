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