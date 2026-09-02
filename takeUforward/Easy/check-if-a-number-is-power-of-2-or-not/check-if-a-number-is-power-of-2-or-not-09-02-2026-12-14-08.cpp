public:
    bool isPowerOfTwo(int n) {
        // Your code goes here
    while(n>1){
        if(n%2==1){
            return false;
        }
        else{
            n=n/2;
        }
        if(n <= 0){
            return false;
        }