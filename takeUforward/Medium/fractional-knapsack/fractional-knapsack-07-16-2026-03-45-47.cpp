class Solution {
public:
    double fractionalKnapsack(vector<long long>& val, vector<long long>& 
    wt, long long capacity) {
        // Your code goes here
        vector<pair<double, int>>ratio;
        for(int i=0; i<wt.size(); i++){
            ratio.push_back({(double)val[i]/wt[i], i});
        }
        sort(ratio.rbegin(), ratio.rend());
        double totalval=0.0;
        for(auto r: ratio){