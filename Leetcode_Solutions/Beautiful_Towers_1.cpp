/*
  This code Solves the problem in a leetcode contest "Beautiful Towers 1"
*/

class Solution {
public:
    long long left(vector<int>& max, int pos) {
    if (pos == -1) {
        return 0;
    }
    long long ans = 0;
    long long n = max[pos + 1];
    for (int i = pos; i >= 0; i--) {
        long long m = max[i];
        while (m > n && m != 1) {
            m=n;
        }
        ans+=m;
        n = m;
    }
    return ans;
}

long long right(vector<int>& max, int pos) {
    if (pos == max.size()) {
        return 0;
    }
    long long ans = 0;
    long long n = max[pos - 1];
    for (int i = pos; i < max.size(); i++) {
        long long m = max[i];
        while (m > n && m != 1) {
            m=n;
        }
        ans+=m;
        n = m;
    }
    return ans;
}

    long long maximumSumOfHeights(vector<int>& max) {
        long long ans=0,l,r;
        for(int i=0;i<max.size();i++){
            l=left(max,i-1);
            r=right(max,i+1);
            //cout<<l<<' '<<r<<' '<<max[i]<<endl;
            if((l+r+max[i])>ans){
                ans=l+r+max[i];
            }
        }
        return(ans);
    }
};
