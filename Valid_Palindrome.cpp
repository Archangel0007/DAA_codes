/*
    This code solves the 125th problem on leetcode "Valid Palindrome"
*/

class Solution {
public:
    bool ispal(string s){
        for(int i=0;i<s.size()/2;i++){
            if(s[i]!=s[s.size()-i-1]){
                return(false);
            }
        }
        return(true);
    }
    bool isPalindrome(string s) {
        
        string str="";
        for (int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                str+=tolower(s[i]);
            }
        }
        cout<<str;
        return(ispal(str));
    }
};
