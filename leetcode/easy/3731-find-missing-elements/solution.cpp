class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans; // empty array ( vector ans)

        int mn = *min_element(nums.begin(), nums.end());   //min
        int mx = *max_element(nums.begin(), nums.end());   // max

        unordered_set<int> st(nums.begin(), nums.end());

        for (int i = mn; i <= mx; i++) {
            if (st.find(i) == st.end()) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};