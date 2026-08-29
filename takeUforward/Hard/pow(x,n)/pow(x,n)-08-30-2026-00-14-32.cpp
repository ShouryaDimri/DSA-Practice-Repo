        while (N > 0) {
            //if the current exponent is odd, multiply the answer by the current x.
            if (N % 2 == 1) {
                ans *= x;
            }

            x *= x;
            N /= 2;
        }

        return ans;
    }
};