class Solution {
public:

    vector<vector<int>> dp;

    int solve(string& s, string& t, int i, int j) {

        // We have formed all of t
        if (j == t.length()) {
            return 1;
        }

        // We ran out of s
        if (i == s.length()) {
            return 0;
        }

        // Already calculated
        if (dp[i][j] != -1) {
            return dp[i][j];
        }

        int count = 0;

        // Option 1: Skip s[i]
        count += solve(s, t, i + 1, j);

        // Option 2: Take s[i] if it matches
        if (s[i] == t[j]) {
            count += solve(s, t, i + 1, j + 1);
        }

        // Store the answer
        dp[i][j] = count;

        return count;
    }

    int numDistinct(string s, string t) {

        int n = s.length();
        int m = t.length();

        dp.resize(n, vector<int>(m, -1));

        return solve(s, t, 0, 0);
    }
};