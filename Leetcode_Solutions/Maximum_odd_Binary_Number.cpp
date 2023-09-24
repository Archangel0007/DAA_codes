/*
  This code solves the problem in a leetcode contest "Maximum Odd Binary Number"
*/
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                count++;
            }
        }
        string ans="";
        int n=1;
        for(int i=0;i<s.length()-1;i++){
            if(n<count){
                ans+='1';
                n++;
            }
            else{
                ans+='0';
            }
        }
        return(ans+'1');
    }
};
