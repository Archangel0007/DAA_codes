/*
This code solves the 374th problem on leetcode "Guess Number Higher or Lower"
*/

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int solve(int s,int e){
        int mid=s+(e-s)/2;
        if(guess(mid)==0)
            return mid;
        else if(guess(mid)==-1)
            e=mid-1;
        else
            s=mid+1;
        return solve(s,e);
    }
    int guessNumber(int n) {
        return(solve(1,n));    
    }
};
