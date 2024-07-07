/*
  This code solves the 345th problem on leetcode "Reverse Vowels of a String"
*/

class Solution {
public:
    string reverseVowels(string s) {
        vector<char>v;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'||s[i]=='o'||s[i]=='u' ||s[i]=='A'|| s[i]=='E'|| s[i]=='I'||s[i]=='O'||s[i]=='U' ){
                v.push_back(s[i]);
            }
        }
        string ans="";
        int ptr=v.size()-1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'||s[i]=='o'||s[i]=='u' ||s[i]=='A'|| s[i]=='E'|| s[i]=='I'||s[i]=='O'||s[i]=='U'){
                ans+=v[ptr];
                ptr--;
            }
            else{
                ans+=s[i];
            }
        }
        return(ans);
        
    }
};
