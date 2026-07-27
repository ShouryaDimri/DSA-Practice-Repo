            int mid = (low + high) / 2;

        while (low <= high) {
//if x is present then floor and ceil is x x
            if (nums[mid] == x) {
                return {x, x};
            }
            else if (nums[mid] > x) {
                ceil = nums[mid];
                high = mid - 1;
            }
            else {
                floor = nums[mid];