class Solution {
public:
    // Function to print the grades based on marks
    void studentGrade(int marks) {
        
        // If else ladder
        if (marks >= 90) {
            cout << "Grade A";
        } else if (marks >= 70) {
            cout << "Grade B";
        } else if (marks >= 50) {
            cout << "Grade C";