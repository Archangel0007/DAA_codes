/*
  This code solves the 357th code of leetcode "Count Numbers with Unique Digits"
*/

class Solution {
    public:
        int countNumbersWithUniqueDigits(int n) {
            if(n==0)
            return 1;
            if(n==1)
            return 10;

            int c=10;
            int a=9;
            int l=9;
            for(int i=1;i<n;i++){
                a=a*l;
                c+=a;
                l--;

            }
            return c;
    }
};
