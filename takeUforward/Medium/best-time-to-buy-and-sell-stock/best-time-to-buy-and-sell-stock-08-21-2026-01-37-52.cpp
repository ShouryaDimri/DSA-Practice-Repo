class Solution{
public:
    int stockBuySell(vector<int> arr, int n){
        int mini = arr[0];
        int maxprofit=0;
        for(int i =0;i<n;i++){
            int cost = arr[i];
            int profit = arr[i] - mini;
            maxprofit = max(profit, maxprofit);
            mini = min(mini, cost);
        }
        return maxprofit;