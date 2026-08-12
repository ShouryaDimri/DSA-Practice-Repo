class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string ans= "";
        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs[strs.size()-1];
        int minlength = min(last.size(), first.size());
        for(int i =0; i<minlength; i++){
            if(first[i] != last[i]){
                return ans;
            }
            ans +=first[i];
        }
        return ans;
    }
};