class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minIn =min_element(nums.begin(), nums.end()) -nums.begin();
        int maxIn =  max_element(nums.begin(), nums.end()) - nums.begin();
        int minremove;

        

        int left = max(maxIn, minIn)+1;
        int right = n- min(minIn, maxIn);
        int both = (min(maxIn, minIn)+1) + n-max(maxIn, minIn);
        minremove = min({left, right, both});
        return minremove;
    }
};