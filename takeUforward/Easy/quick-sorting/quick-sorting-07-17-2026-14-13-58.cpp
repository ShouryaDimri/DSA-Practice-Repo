        // Now choosing arr[low] as the pivot after the swap
        int pivot = arr[low];
        // Starting index for left subarray
        int i = low;
        // Starting index for right subarray
        int j = high;

        while (i < j) {
            /*  Move i to the right until we find an
                element greater than the pivot  */
            while (arr[i] <= pivot && i <= high - 1) {
                i++;
            }
            /*  Move j to the left until we find an
                element smaller than the pivot  */
            while (arr[j] > pivot && j >= low + 1) {
                j--;
            }
            /*  Swap elements at i and j if i is still