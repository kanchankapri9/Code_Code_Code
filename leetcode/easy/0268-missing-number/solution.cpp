class Solution {
public:
    int missingNumber(vector<int>& nums) {
         int n = nums.size(); // n is our largest nuber we want to actualsum 
        int Actual_Sum = 0;
        for(int i=1; i<=n; i++){
            Actual_Sum = Actual_Sum += i;
        }

        int Array_Sum = 0;
        for(int j=0; j<n; j++) {
            Array_Sum = Array_Sum += nums[j];
        }

        return Actual_Sum - Array_Sum;
    
    }
};