/*
The given code solves the 633rd problem on leetcode "Sum_of_square_Numbers"
*/

class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c==0 || c==1){
            return(true);
        }
        else{
            long long int n = pow(c,0.5);
            for(long long int i=1; i<=n;i++){
                long long int a=i;
                long long int x=c - a * a;
                double b1 = pow(x,0.5);
                long long int b2 = pow(x,0.5);
                
                if(b1-b2==0){
                    return(true);
                }
            }
        }
        return(false);
    }
};
