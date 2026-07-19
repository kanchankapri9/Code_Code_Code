class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
    int n = nums.size();
    int Maxio = 0;  // maxio = max(Count,Maxio);  // stl
    int Count = 0;

    for(int i=0; i<n; i++) {
        if(nums[i] == 1) {
            Count++;
        Maxio = max(Count,Maxio);
        } else {
            Count = 0;
        }
    }
    return Maxio ;
    }
};



// current count
// max

// icrese count when i found 
// reset count when 0 came
// update max when , count > max 
// 

