/*
  This code is the solution for the 29th problem of leetcode "Divide Two Integers"
*/
class Solution {
public:
    int divide(int a, int b) {
        int ans;
        if(b==-1 && a==-2147483648){
            return(2147483647);
        }
        ans=a/b;

        return ans;
    }
};
