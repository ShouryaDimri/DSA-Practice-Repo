class Solution {
public:
    int findMin(vector<int>& nums) {
        int low =0;
        int n = nums.size();
        int high = n-1;
        int ans = nums[0];

        while (low <= high){
            int mid = (low + high)/2;

            //search left side is sorted
            if(nums[low]<= nums[mid]){
                if(nums[low]< ans){
                    ans = min(ans,nums[low]);
                }
                low = mid +1;
            }
            else{
                if(nums[mid] < ans){
                    ans = min(ans,nums[mid]);
                }
                high = mid -1;
            }
        }
        return ans;
    }
};