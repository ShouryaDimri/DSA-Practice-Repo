class Solution {
public:
    int firstOccurence(vector<int> arr, int target){
        int low =0;
        int high = arr.size() -1 ;
        int count =-1;
        while (low <= high){
            int mid = (low + high)/2;
            if (arr[mid]== target){
                count = mid;
                //search left to find first
                high = mid-1;
            }