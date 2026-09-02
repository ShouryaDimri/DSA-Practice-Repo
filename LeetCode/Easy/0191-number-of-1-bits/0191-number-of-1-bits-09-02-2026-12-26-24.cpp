class Solution {
public:
    int hammingWeight(int n) {
        string binary ="";
        while(n>0){
            if(n%2==1){
                binary +='1';
            }
            else {
                binary +='0';
            }
            n=n/2;
        }
        int ans=0;
        for(int i=0; i<binary.length(); i++){
            if(binary[i]=='1'){
                ans++;
            }
        }
        return ans;
    }
};