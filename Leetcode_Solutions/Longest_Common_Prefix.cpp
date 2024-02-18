/*
  The given code solves the 14th problem on leetcode "Longest Common Prefix"
*/

class Solution {
public:
    int prefixcheck(string str1,string str2,int n){
            int flag=0;
            for(int i=0;i<n;i++){
                if(str1[i]==str2[i]){
                    flag++;
                }
                else{
                    break;
                }
            }
            return(min(flag,n));
        }
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1){return(strs[0]);}
        int n=min(strs[0].length(),strs[1].length());
        for(int i=0;i<strs.size()-1;i++){
            n=prefixcheck(strs[i],strs[i+1],n);
        }
        string output="";
        for(int i=0;i<n;i++){
            output+=strs[0][i];
        }
        return(output);
    }
};
