/*
    This code solves the 2352nd problem on leetcode "Equal Row and Column Pairs"
*/


class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int i=0,j=0;
        int n=grid.size();
        vector<int>col_1;
        for(i=0;i<n;i++){
            col_1.push_back(grid[i][0]);
        }
        int count=0;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(grid[0][i]==col_1[j]){
                    int flag=0;
                    for(int k=0;k<n;k++){
                        if(grid[k][i]!=grid[j][k]){
                            flag++;
                            break;
                        }
                    }
                    if(flag==0){count++;}
                }
            }
        }
        return(count);
    }
};
