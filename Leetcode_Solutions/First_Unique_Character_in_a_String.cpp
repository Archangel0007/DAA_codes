/*
  The given code solves the 387th problem on leet code "First Unique Character in a String"
*/
class Solution {
public:
    int find(vector<pair<char,int>>v,char c){
        for(int i=0;i<v.size();i++){
            if(v[i].first==c){
                return(i);
            }
        }
        return(-1);
    }
    int firstUniqChar(string s) {
        vector<pair<char,int>>dict;
        for(int i=0;i<s.length();i++){
            int index=find(dict,s[i]);
            if(index==-1){
                pair<char,int>temp;
                temp.first=s[i];
                temp.second=1;
                dict.push_back(temp);
            }
            else{
                dict[index].second++;
            }
        }
        char c;
        for(int i=0;i<dict.size();i++){
            cout<<dict[i].first<<dict[i].second<<endl;
            if(dict[i].second==1){
                c=dict[i].first;
                break;
            }
        }
        cout<<c;
        for(int i=0;i<s.length();i++){
            if(c==s[i]){
                return(i);
            }
        }
        return(-1);
    }
};
