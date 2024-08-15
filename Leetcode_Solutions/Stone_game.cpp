/*
  This code solves the 877th problem on leetcode "Stone Game"
*/

class Solution {
public:
    bool stoneGame(vector<int>& p) {
        int i=0,j=p.size()-1;
        int a=0,b=0;
        int turn=0;
        while(i<j){
            if(turn%2==0){
                if(p[i]>p[j]){
                    a+=p[i];
                    i++;
                }
                else{
                    a+=p[j];
                    j--;
                }
            }
            else{
                if(p[i]>p[j]){
                    b+=p[i];
                    i++;
                }
                else{
                    b+=p[j];
                    j--;
                }
            }
            turn++;
        }
        return(true);
    }
};
