class Solution {
public:
    int makeTheIntegerZero(int num1, int num2) {
           for (long long k = 1; k <= 60; k++) {

            long long x = num1 - k * num2;

            if (x <= 0)
                continue;

            if (__builtin_popcountll(x) <= k && k <= x)
                return k;
        }

        return -1;
    }
};