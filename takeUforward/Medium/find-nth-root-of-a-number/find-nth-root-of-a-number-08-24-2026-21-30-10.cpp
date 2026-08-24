                break;
            }
        }
        if(val == M){
            return mid;
        }
        else if(val<M){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
