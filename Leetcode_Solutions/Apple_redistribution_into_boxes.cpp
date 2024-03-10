/*
    This code solves the 100233rd problem on leetcode "Apple redistribution into boxes"
*/
class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
            sort(capacity.begin(), capacity.end(), greater<int>());
        int sum=0,cap=0,i;
        for(auto x: apple){
            sum+=x;
        }
        for(i=0;i<capacity.size();i++){
            cap+=capacity[i];
            if(cap>=sum){
                i+=1;
                break;
            }
        }
        return(i);
    }
};
