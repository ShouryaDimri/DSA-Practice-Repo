     int high = n-1;
     while(low <= high){
        int mid = (low + high)/2;
        if(nums[mid]== target){
            return mid;
        }
        else if (nums[mid]<target){
            low = mid+1;
public:
    int search(vector<int> &nums, int target){
     int low = 0;
class Solution{
    int n = nums.size();