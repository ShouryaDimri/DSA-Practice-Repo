class Solution {
public:
    string largestOddNumber(string num) {
        int end =-1;
        for(int i =num.size()-1; i>=0;i--){
            if((num[i] - '0') % 2 !=0){
                end =i;
                break;
            }
        }
        if( end ==-1){
            return "";
        }
        //remove leading 0
        int start=0;
        while(start <end && num[start]=='0'){
            start++;
        }
        return num.substr(start, end-start+1);
    }
};