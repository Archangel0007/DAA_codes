/*
  The given code solves the 2810th problem on leet code "Faulty Keyboard"
*/
class Solution {
public:
string reverseStr(string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
    return(str);
}
    string finalString(string s) {
        string output="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='i'){
                output=reverseStr(output);
            }
            else{
                output+=s[i];
            }
        }
        return(output);
    }
};
