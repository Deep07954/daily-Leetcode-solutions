class Solution {
public:
  long long dp[100005]; 
    int MOD = 1e9 + 7;

    // Change: Changed return type to long long to comfortably hold large counts before modulo operations
    long long solve(int i, string &s, int &n) {
        if (i == n) {
            return 1; // Base case shifted to top for ultimate safety
        }
        if (dp[i] != -1) {
            return dp[i];
        }
        if (s[i] == '0') {
            return dp[i] = 0;
        }

        long long result = 0;

        // Change: Factored single character transitions when s[i] can be '*'
        if (s[i] == '*') {
            result = (9 * solve(i + 1, s, n)) % MOD; // '*' can map to 9 distinct digits (1-9)
        } else {
            result = solve(i + 1, s, n) % MOD;       // Normal digit (1-9) gives 1 option
        }

        // Change: Maintained your preferred safe indexing structure but added '*' scenarios
        if (i + 1 < n) {
            // Sub-case A: Both are wildcards ("**")
            if (s[i] == '*' && s[i+1] == '*') {
                result = (result + 15 * solve(i + 2, s, n)) % MOD; // 11-19 (9 ways) + 21-26 (6 ways)
            }
            // Sub-case B: Wildcard followed by normal digit ("*X")
            else if (s[i] == '*') {
                if (s[i+1] <= '6') {
                    result = (result + 2 * solve(i + 2, s, n)) % MOD; // Can form '1X' or '2X'
                } else {
                    result = (result + 1 * solve(i + 2, s, n)) % MOD; // Can only form '1X'
                }
            }
            // Sub-case C: Normal digit followed by wildcard ("X*")
            else if (s[i+1] == '*') {
                if (s[i] == '1') {
                    result = (result + 9 * solve(i + 2, s, n)) % MOD; // Forms 11 through 19
                } else if (s[i] == '2') {
                    result = (result + 6 * solve(i + 2, s, n)) % MOD; // Forms 21 through 26
                }
            }
            // Sub-case D: Classic hardcoded digit combination ("XY")
            else {
                if (s[i] == '1' || (s[i] == '2' && s[i+1] <= '6')) {
                    result = (result + solve(i + 2, s, n)) % MOD;
                }
            }
        }

        return dp[i] = result;
    }
    int numDecodings(string s) {
        int n=s.length();
        memset(dp,-1,sizeof(dp));
        return solve(0,s,n);
    }
};