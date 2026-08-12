class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1,
                                           vector<vector<int>>& items2) {

        map<int, int> mp;

        // Add items from items1
        for (auto item : items1) {
            mp[item[0]] += item[1];
        }

        // Add items from items2
        for (auto item : items2) {
            mp[item[0]] += item[1];
        }

        // Convert map into answer
        vector<vector<int>> ans;

        for (auto it : mp) {
            ans.push_back({it.first, it.second});
        }

        return ans;
    }
};