/*
  This code solves the 119th problem on leetcode "Pascals triangle 2"
*/

class Solution {
public:
    vector<int>solve(vector<int>arr,int k){
        vector<int>temp;
        temp.push_back(1);
        for(int i=0;i<arr.size()-1;i++){
            temp.push_back(arr[i]+arr[i+1]);
        }
        temp.push_back(1);
        if(k==0){
            return(temp);
        }
        else{
            return(solve(temp,k-1));
        }
    }
    vector<int> getRow(int rowIndex) {
        vector<int>one;
        one.push_back(1);
        if(rowIndex==0){return(one);}
        return(solve(one,rowIndex-1));
    }
};
