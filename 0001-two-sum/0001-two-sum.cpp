class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //using map method
        unordered_map<int,int>mpp;
        // iterate every element once
        for(int i=0; i<nums.size(); i++){
            // a+b=c; 
            // b=c-b
            int diff= target-nums[i];
            if(mpp.find(diff) != mpp.end()){
                // if c found; return indexes of both a & b
                return {i, mpp[diff]};
            }
            // 
            mpp[nums[i]]=i;
        }
        return {-1,-1};
    }
};