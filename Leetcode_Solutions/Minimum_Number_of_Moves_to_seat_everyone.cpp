/* This code solves the 2037th problem on leet code "minimum-number-of-moves-to-seat-everyone" */

class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int n=0;
        for(int i=0;i<seats.size();i++){
            n+=abs(seats[i]-students[i]);
        }
        return(n);
    }
};
