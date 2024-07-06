/*
  This code solves th 1768th problem on leetcode "Merge Strings Alternatively"
*/

class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        string ans="";
        int n,flag;
        if(w1.size()>w2.size()){
            n=w2.size();
            flag=1;
        }
        else{
            n=w1.size();
            flag=2;
        }
        int i=0;
        for(i=0;i<n;i++){
            ans+=w1[i];
            ans+=w2[i];
        }
        if(flag==1){
            while(i<w1.size()){
                ans+=w1[i];
                i++;
            }
        }
        else if(flag==2){
            while(i<w2.size()){
                ans+=w2[i];
                i++;
            }
        }
        return(ans);
    }
};
