class Solution {
public:
    
    //  the product of digits
    int digitProduct(int num) {
        int product = 1;

        while (num > 0) {
            int digit = num % 10;
            product *= digit;
            num /= 10;
        }

        return product;
    }

    int smallestNumber(int n, int t) {

        while (true) {
            int product = digitProduct(n);

            if (product % t == 0)
                return n;

            n++;
        }
    }
};