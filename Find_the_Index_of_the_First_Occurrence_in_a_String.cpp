/*
  The below given code solves the 28th problem of leetcode "Find the Index of the First Occurrence in a String"
*/
class Solution {
public:
    int strStr(string haystack, string needle) {
        int j;
        for(int i=0;i<haystack.length();i++){
            for(j=0;j<needle.length();j++){
                if(needle[j]!=haystack[i+j]){
                    break;
                }
            }
            if(j==needle.length()){
                return(i);
            }
        }
        return(-1);
    }
};
