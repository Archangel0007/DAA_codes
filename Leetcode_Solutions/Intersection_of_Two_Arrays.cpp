/*
  This given code solves the 349th problem on leetcode "Intersection of Two Arrays"
*/
class Solution {
public:
    set<int> convertToSet(vector<int> v){
        set<int> s;
        for (int x : v) {
            s.insert(x);
        }
        return s;
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>n1=convertToSet(nums1);
        set<int>n2=convertToSet(nums2);
        vector<int>ans;
        int x1=0,x2=0;
        set<int>::iterator itr1=n1.begin();
        set<int>::iterator itr2=n2.begin();
        while(itr1!=n1.end() && itr2!=n2.end()){
            if(*itr1>*itr2){
                itr2++;
            }
            else if(*itr1<*itr2){
                itr1++;
            }
            else{
                ans.push_back(*itr1);
                itr1++;
                itr2++;
            }
        }

        return(ans);
    }
};
