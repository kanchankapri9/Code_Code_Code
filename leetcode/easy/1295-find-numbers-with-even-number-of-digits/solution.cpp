class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int count = 0; //how many even digits  are there 

        for (int num : nums) {  

            int digitCount = 0;   // removals times tracks == the numbers in the digit
            int temp = num;  // temp for  num

            while (temp != 0) {
                temp = temp / 10;
                digitCount++;
            }

            if (digitCount % 2 == 0) {
                count++;
            }
        }

        return count;
    }
};