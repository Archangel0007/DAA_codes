/*
  This code solves the 1876th problem on leetcode "Substrings of Size Three with Distinct Characters"
*/

class Solution {
public:
    int countGoodSubstrings(string s) {
        int count=0;
        if(s.size()<3){return 0;}
        for(int i=0;i<s.size()-2;i++){
            char a=s[i],b=s[i+1],c=s[i+2];
            if(a!=b && b!=c && a!=c){
                cout<<i;
                count++;
            }
        }
        return(count);
    }
};
