/*
  The given code provides a solution to the 202th problem on leet code "isHappy"
*/
class Solution {
public:
    bool isHappy(int n) {
        if(n==1){return(true);}
        do{
            int val=0;
            while(n!=0){
                val+=(n%10)*(n%10);
                n=n/10;
            }
            if(val==37){
                return(false);
            }
            else if(val==1){
                return(true);
            }
            n=val;
        }while(true);
    }
};
