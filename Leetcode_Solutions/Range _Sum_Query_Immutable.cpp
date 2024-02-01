/*
  This code solves the 303rd problem on leetcode "Range Sum Query - Immutable"
*/

class NumArray {
private:
    vector<int> Sum;
public:
    
    NumArray(vector<int>& nums) {
        Sum.resize(nums.size());
        for(int i=0;i<nums.size();i++){
            Sum[i]=nums[i];
        }
    }
    int sumRange(int left, int right) {
        int a=0;
        for(int i=left;i<right+1;i++){
            a+=Sum[i];
        }
        return(a);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
