            int sum = 0;
            for (int i = 0; i < n; i++) {
                sum += (nums[i]+ mid-1)/mid;
            }
        while (low <= high){
            
            if(sum <= limit){
                high = mid-1;
            }
            else{
            int mid = (low + high)/2;
                low = mid +1;
            }