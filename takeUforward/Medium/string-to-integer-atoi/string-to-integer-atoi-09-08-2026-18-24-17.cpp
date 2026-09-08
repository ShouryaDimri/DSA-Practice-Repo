            i++;
        if(i<n && input[i]=='-'){
            sign = -1;
            i++;
        }
        int sign =1;
        int n= input.size();
        while (i<n && input[i] ==' '){
            if(i<n && input[i]=='+'){
                return 0;
            }
        }
        if(i<n && input[i]=='+'){
            i++;