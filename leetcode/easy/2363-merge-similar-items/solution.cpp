class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1,
                                           vector<vector<int>>& items2) {

        int weight[1001] = {};

        for (auto item : items1) {
            weight[item[0]] += item[1];
        }

        for (auto item : items2) {
            weight[item[0]] += item[1];
        }

        vector<vector<int>> ans;

        for (int value = 1; value <= 1000; value++) {

            if (weight[value] > 0) {
                ans.push_back({value, weight[value]});
            }
        }

        return ans;
    }
};