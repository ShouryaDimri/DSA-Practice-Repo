        // Your code goes here
        string binary = "";
        while(n>0){
            binary +=(n%2==0 ? '0' : '1');
            n=n/2;
        }
        int index= binary.length()-1 -i;
        if(binary[index]== '1'){
        reverse(binary.begin(), binary.end());
            return true;
        }
        return false;
    }
};