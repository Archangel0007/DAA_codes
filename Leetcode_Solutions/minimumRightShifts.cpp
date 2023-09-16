/*
  This code is the solutions to a leetcode Contest Problem
*/
class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
    int n = nums.size(); 
    vector<int> sorted_nums(nums);
    sort(sorted_nums.begin(), sorted_nums.end());   
    for (int start = 0; start < n; ++start) {
        int flag = 0;
        for (int i = 0; i < n; ++i) {
            int original_index = (start + i) % n;
            if (nums[original_index] != sorted_nums[i]) {
                flag++;
                break;
            }
        }
        if(flag==0 && start==0){return(0);}
        else if(flag==0){return(nums.size()-start);}
    }
    return(-1);
    }
};
