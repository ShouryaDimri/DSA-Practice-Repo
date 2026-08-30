class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minIn =0;
        int maxIn = 0;
        int minremove;

        for(int i=0; i<n; i++){
            if(nums[i]>nums[maxIn]){
                maxIn = i;
            }
            if(nums[i]< nums[minIn]){
                minIn = i;
            }
        }
        int left = max(maxIn, minIn)+1;
        int right = n- min(minIn, maxIn);
        int both = (min(maxIn, minIn)+1) + n-max(maxIn, minIn);
        minremove = min({left, right, both});
        return minremove;
    }
};