class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> hash;
        int left = 0;
        int maxcount = 0;

        for (int right = 0; right < s.length(); right++) {
            while (hash.find(s[right]) != hash.end()) {
                hash.erase(s[left]);
                left++;
            }

            hash[s[right]] = 1;
            maxcount = max(maxcount, right - left + 1);
        }

        return maxcount;
    }
};