/*
  The given code solves the 151st problem on leetcode "Reverse Words in a String"
*/
class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string temp="";
        int i=0;
        while(s[i]!='\0'){
            if(s[i]==' '){
                if(temp==""){
                    i++;
                    continue;}
                else{
                    ans=temp+' ' + ans;
                    temp="";
                }
                
            }
            else{
                temp+=s[i];
            }
            i++;
        }
        ans=temp+' '+ans;
        while(ans[ans.size()-1]==' '){
            ans.erase(ans.size()-1);
        }
        while(ans[0]==' '){
            ans.erase(0,1);
        }
        return(ans);
    }
};
