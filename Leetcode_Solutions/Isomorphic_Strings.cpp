/*
The given code solves the 205th problem on leetcode "Isomorphic Strings"
*/
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> myMap;
        for(int i=0;i<s.size();i++){
            auto it=myMap.find(s[i]);
            if(it==myMap.end()){
                myMap[s[i]]=t[i];
            }
            else if(myMap[s[i]]!=t[i]){
                return(false);
            }
        }
        map<char, char> m;
        for(int i=0;i<s.size();i++){
            auto it=m.find(t[i]);
            if(it==m.end()){
                m[t[i]]=s[i];
            }
            else if(m[t[i]]!=s[i]){
                return(false);
            }
        }
        return(true);
    }
};
