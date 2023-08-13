/*
  The given code solves the 2485th problem on leetcode "Find the Pivot Integer"
*/
class Solution {
public:
    int pivotInteger(int n) {
        if(n==1){return(1);}
        int lsum=0,rsum=0;
        int i=1,j=n,flag=0;

        while(i<=j){
            if(i==j && lsum==rsum){
                flag=1;
                break;
            }
            else if(lsum<=rsum){
                lsum+=i;
                i++;
            }
            else if(lsum>rsum){
                rsum+=j;
                j--;
            }
            cout<<lsum<<'\t'<<rsum<<'\t'<<i<<'\t'<<j<<endl;
        }
        if(flag==1){
            return(i);
        }
        return(-1);
    }
};
