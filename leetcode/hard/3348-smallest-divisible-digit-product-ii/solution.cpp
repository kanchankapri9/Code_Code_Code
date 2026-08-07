class Solution {
public:

    // prime factors contributed by each digit
    int factor[10][4] = {
        {0, 0, 0, 0}, // 0
        {0, 0, 0, 0}, // 1
        {1, 0, 0, 0}, // 2
        {0, 1, 0, 0}, // 3
        {2, 0, 0, 0}, // 4
        {0, 0, 1, 0}, // 5
        {1, 1, 0, 0}, // 6
        {0, 0, 0, 1}, // 7
        {3, 0, 0, 0}, // 8
        {0, 2, 0, 0}  // 9
    };

    int A, B, C, D;
    vector<int> dp;

    int id(int a, int b, int c, int d) {
        return (((a * (B + 1) + b)
                * (C + 1) + c)
                * (D + 1) + d);
    }

    // Minimum number of digits needed to satisfy
    // a copies of 2, b copies of 3,
    // c copies of 5, d copies of 7.
    int minDigits(int a, int b, int c, int d) {

        int best = 1e9;

        for (int digit = 2; digit <= 9; digit++) {

            int na = max(0, a - factor[digit][0]);
            int nb = max(0, b - factor[digit][1]);
            int nc = max(0, c - factor[digit][2]);
            int nd = max(0, d - factor[digit][3]);

            best = min(best, 1 + dp[id(na, nb, nc, nd)]);
        }

        return best;
    }

    string buildSmallest(vector<int> need, int len) {

        string ans = "";

        for (int pos = 0; pos < len; pos++) {

            for (int digit = 1; digit <= 9; digit++) {

                vector<int> rem(4);

                for (int j = 0; j < 4; j++) {
                    rem[j] = max(
                        0,
                        need[j] - factor[digit][j]
                    );
                }

                int remainingSlots = len - pos - 1;

                if (dp[id(
                    rem[0],
                    rem[1],
                    rem[2],
                    rem[3]
                )] <= remainingSlots) {

                    ans += char('0' + digit);

                    need = rem;

                    break;
                }
            }
        }

        return ans;
    }

    string smallestNumber(string num, long long t) {

        // ----------------------------------
        // STEP 1: Factorize t
        // ----------------------------------

        int need[4] = {0, 0, 0, 0};

        long long x = t;

        int primes[4] = {2, 3, 5, 7};

        for (int i = 0; i < 4; i++) {

            while (x % primes[i] == 0) {
                need[i]++;
                x /= primes[i];
            }
        }

        // If another prime remains,
        // impossible.
        if (x != 1) {
            return "-1";
        }

        A = need[0];
        B = need[1];
        C = need[2];
        D = need[3];

        // ----------------------------------
        // STEP 2: Build DP
        // ----------------------------------

        int totalStates =
            (A + 1) *
            (B + 1) *
            (C + 1) *
            (D + 1);

        dp.assign(totalStates, 1e9);

        dp[id(0, 0, 0, 0)] = 0;

        for (int a = 0; a <= A; a++) {
            for (int b = 0; b <= B; b++) {
                for (int c = 0; c <= C; c++) {
                    for (int d = 0; d <= D; d++) {

                        if (a == 0 &&
                            b == 0 &&
                            c == 0 &&
                            d == 0) {
                            continue;
                        }

                        dp[id(a, b, c, d)] =
                            minDigits(a, b, c, d);
                    }
                }
            }
        }

        // ----------------------------------
        // STEP 3: Calculate factors
        // already present in num
        // ----------------------------------

        vector<int> total(4, 0);

        int zeroCount = 0;

        for (char ch : num) {

            int digit = ch - '0';

            if (digit == 0) {
                zeroCount++;
                continue;
            }

            for (int j = 0; j < 4; j++) {
                total[j] += factor[digit][j];
            }
        }

        // ----------------------------------
        // STEP 4:
        // Is num already a valid answer?
        // ----------------------------------

        if (zeroCount == 0) {

            bool good = true;

            for (int j = 0; j < 4; j++) {
                if (total[j] < need[j]) {
                    good = false;
                }
            }

            if (good) {
                return num;
            }
        }

        // ----------------------------------
        // STEP 5:
        // Try changing a digit from RIGHT
        // to LEFT
        // ----------------------------------

        vector<int> prefix = total;

        int zerosInPrefix = zeroCount;

        int n = num.size();

        for (int i = n - 1; i >= 0; i--) {

            int currentDigit = num[i] - '0';

            // Remove num[i] from prefix.
            if (currentDigit == 0) {
                zerosInPrefix--;
            }
            else {
                for (int j = 0; j < 4; j++) {
                    prefix[j] -= factor[currentDigit][j];
                }
            }

            // Prefix must contain no zero.
            if (zerosInPrefix != 0) {
                continue;
            }

            // Try the smallest digit greater than
            // currentDigit.
            for (int newDigit = currentDigit + 1;
                 newDigit <= 9;
                 newDigit++) {

                vector<int> remaining(4);

                for (int j = 0; j < 4; j++) {

                    remaining[j] = max(
                        0,
                        need[j]
                        - prefix[j]
                        - factor[newDigit][j]
                    );
                }

                int suffixLength = n - i - 1;

                // Can suffix satisfy remaining factors?
                if (dp[id(
                    remaining[0],
                    remaining[1],
                    remaining[2],
                    remaining[3]
                )] <= suffixLength) {

                    string answer = "";

                    // Original prefix
                    answer += num.substr(0, i);

                    // New digit
                    answer += char('0' + newDigit);

                    // Smallest possible suffix
                    answer += buildSmallest(
                        remaining,
                        suffixLength
                    );

                    return answer;
                }
            }
        }

        // ----------------------------------
        // STEP 6:
        // Need one extra digit.
        // ----------------------------------

        vector<int> allNeed = {
            need[0],
            need[1],
            need[2],
            need[3]
        };

        if (dp[id(
            allNeed[0],
            allNeed[1],
            allNeed[2],
            allNeed[3]
        )] <= n) {

            // Smallest possible (n+1)-digit
            // zero-free number starts with 1.
            return "1" +
                   buildSmallest(allNeed, n);
        }

        return "-1";
    }
};