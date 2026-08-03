class Solution {
public:
    int thirdMax(vector<int>& nums) {

        // We use long long because nums can contain INT_MIN.
        // Initializing with LLONG_MIN ensures it is smaller than every int.
        long long first = LLONG_MIN;
        long long second = LLONG_MIN;
        long long third = LLONG_MIN;

        for (int num : nums) {

            // Skip duplicate values.
            if (num == first || num == second || num == third)
                continue;

            // If current number is the largest so far,
            // shift first -> second, second -> third.
            if (num > first) {
                third = second;
                second = first;
                first = num;
            }

            // If current number lies between first and second.
            else if (num > second) {
                third = second;
                second = num;
            }

            // If current number lies between second and third.
            else if (num > third) {
                third = num;
            }
        }

        // If there are fewer than 3 distinct elements,
        // return the largest.
        if (third == LLONG_MIN)
            return first;

        return third;
    }
};