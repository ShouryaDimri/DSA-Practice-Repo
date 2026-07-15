class Solution{    
    public:
    int findMaximumCookieStudents(vector<int>& 
    Student, vector<int>& Cookie){
        //your code goes here
        int m= Cookie.size();
        int n= Student.size();
        sort(Cookie.begin(), Cookie.end());
        sort(Student.begin(), Student.end());
        int l=0, r=0;
        while(l<n && r <m){
            if(Cookie[r]>= Student[l])l++;
            r++;