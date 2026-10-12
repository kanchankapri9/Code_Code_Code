class Solution {
    public int removeDuplicates(int[] nums) {
        int n = nums.length;
        int i = 0;  // at first position 
        // will be used for camparing

        for( int j = i+1; j<n; j++) {
            if( nums[i] != nums[j]) {
                nums[i+1] = nums[j];
            }

        }
        return i + 1; 
    }
}