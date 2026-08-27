            int missingcount = arr[mid]-(mid+1);
            if(missingcount <k){
                low = mid +1;
            }
            //logic
            int mid = (low+high)/2;
    int findKthPositive(vector<int>& arr, int k) {
        // Your code goes here
        int low = 0;
        int high = arr.size()-1;
        while (low <= high){
class Solution {
public:
            else{
                high = mid-1;
            }
        }
        return low+k;

    }
};
