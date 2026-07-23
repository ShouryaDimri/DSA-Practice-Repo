        int mid = (low+high)/2;
        if(nums[mid]== target){
            return mid;
        }
        else if (target> nums[mid]){
            low = mid+1;
        }
        else high= mid-1;
    int search(vector<int> &nums, int target){
     int low=0, high=nums.size()-1;
     while(low <= high){
class Solution{
public: