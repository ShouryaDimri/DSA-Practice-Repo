class Solution{
public:
    // Function to merge two sorted halves of 
    the array
    void merge(vector<int> &arr, int low, int 
    mid, int high) {
        // Temporary array to store merged 
        elements
        vector<int> temp;
        int left = low;
        int right = mid + 1;

        // Loop until subarrays are exhausted