        }
        else {
            if (nums[mid]<= k && nums[high] >= k){
                low = mid + 1;
            }
            else high = mid -1;
        }
       }
       return index;
    }
};
            else low = mid +1;