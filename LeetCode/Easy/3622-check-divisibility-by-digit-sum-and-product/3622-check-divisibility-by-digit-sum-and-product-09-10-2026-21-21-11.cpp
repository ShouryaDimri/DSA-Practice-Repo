class Solution {
public:
    bool checkDivisibility(int n) {
        int sum, prod;
        sum =0;
        prod =1;
        int temp = n;
        while(temp>0){
            int digit = temp%10;
            sum +=digit;
            prod *=digit;
            temp /=10;
        }
        if(n%(sum+prod) ==0){
            return true;
        }
        else return false;
        
    }
};