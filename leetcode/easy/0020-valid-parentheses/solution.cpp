class Solution {
public:
  

bool isValid(string s) {

    stack<char> st;

    unordered_map<char, char> mapping = {
        {')', '('},
        {']', '['},
        {'}', '{'}
    };

    for (char c : s) {

        // Closing bracket
        if (mapping.find(c) != mapping.end()) {

            if (st.empty()) {
                return false;
            }

            if (st.top() != mapping[c]) {
                return false;
            }

            st.pop();
        }

        // Opening bracket
        else {
            st.push(c);
        }
    }

    return st.empty();
}
};