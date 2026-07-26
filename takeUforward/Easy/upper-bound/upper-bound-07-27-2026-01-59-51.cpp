
        int mid = (high + low)/2;
        if(nums[mid]>x){
            ans = mid;
            high = mid -1;
        }
        else low = mid +1;
       }
       return ans;
    }
       int high = nums.size()-1;
       int ans = nums.size();
       while(low <= high){