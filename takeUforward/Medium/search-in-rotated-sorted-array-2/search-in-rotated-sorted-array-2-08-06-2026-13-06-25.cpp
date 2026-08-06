
                // CHANGE 3: Use k < nums[mid] instead of nums[mid] >= k
                if (nums[low] <= k && k < nums[mid]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }

            // Right half is sorted
            else {

                // CHANGE 4: Use nums[mid] < k instead of nums[mid] <= k
                if (nums[mid] < k && k <= nums[high]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }

        return false;

            // Left half is sorted
            if (nums[low] <= nums[mid]) {