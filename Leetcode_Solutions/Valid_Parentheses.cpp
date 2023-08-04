/*
  The given code solves the 20th problem of leetcode "Valid Parentheses"
*/
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        vector<char>v;
        v.push_back('0');
        if(s.length()%2!=0){return(false);}
        for(int i=0;i<s.length();i++){
            if(s[i]=='{'|| s[i]=='['|| s[i]=='('){
                v.push_back(s[i]);
            }
            else if(s[i]=='}' && v.back()=='{'){
                v.pop_back();
            }
            else if(s[i]==']' && v.back()=='['){
                v.pop_back();
            }
            else if(s[i]==')' && v.back()=='('){
                v.pop_back();
            }
            else{
                return(false);
            }
        }
        if(v.size()==1){
            return(true);
        }
        else{
            return(false);
        }
    }
};
