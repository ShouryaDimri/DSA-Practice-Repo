class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>mergedsol(m+n);
        for(int i=0; i<m; i++){
            mergedsol[i] = nums1[i];
        }
        int count =0;
        for(int i= m; i<m+n; i++){
            if(count == n){
                break;
            }
            mergedsol[i]=nums2[count];
            count++;
        }
        sort(mergedsol.begin(), mergedsol.end());
        nums1= mergedsol;
    }
};