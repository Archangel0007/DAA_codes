/*
  the given code solves the 326th problem of leetcode "Power of three"
*/
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<1){return(false);}
        while(n!=1){
            if(n%3!=0){return(false);}
            n=n/3;
        }
        return(true);
    }
};
