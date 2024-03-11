/*
  This code solves the 201st problem of leetcode "Bitwise AND of Numbers Range"
*/
class Solution {
public:
    int rangeBitwiseAnd(int l, int r) {
          //s = shift;
       int s=0;
       while(l<r){
           l>>=1;  //l left
           r>>=1;  //r right
           s++;
       }
       return l<<s;
    }
};
