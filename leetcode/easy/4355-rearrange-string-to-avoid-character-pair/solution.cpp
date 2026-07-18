class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        // input = a strring, two distinct letters x , y
        // output = rearange characters of s to construct a new string T 
       
    // Y should always come befor the x 
    // a new string in return such that it can be purmuation of t which is a new string
        int n = s.size();
        
        int i = 0;
        for(int j = 0; j<n; j++) {
                if(s[j] == y) {
                    swap(s[i],s[j]);
                    i++;
                }
            }
        return s;
        }
};