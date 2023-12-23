/*
  This file contains the solution to the 278th problem of leetcode "First Bad Version"
*/
class Solution {
public:
    int firstBadVersion(int n) {
        if(n==1){return(1);}
        while(n>0){
            if(!isBadVersion(n)){
                return(n+1);
            }
            n--;
        }
        return(1);
    }
};
