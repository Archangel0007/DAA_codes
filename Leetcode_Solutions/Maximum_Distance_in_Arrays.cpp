/*
  This code solves the 624th problem of leetcode "Maximum Distance in Arrays"
*/

class Solution {
public:
    static bool compare(pair<int,int>a,pair<int,int>b){
        return(a.first<b.first);
    }
    int maxDistance(vector<vector<int>>& arr) {
        vector<pair<int,int>>h;
        vector<pair<int,int>>l;
        for(int i=0;i<arr.size();i++){
            pair<int,int>t1;
            pair<int,int>t2;
            t1.first=arr[i][arr[i].size()-1];
            t1.second=i;
            t2.first=arr[i][0];
            t2.second=i;
            h.push_back(t1);
            l.push_back(t2);
        }
        sort(h.begin(),h.end(),compare);
        sort(l.begin(),l.end(),compare);
        if(l[0].second!=h[h.size()-1].second){
            return(abs(h[h.size()-1].first-l[0].first));
        }
        else {
            return(max(abs(h[h.size()-2].first-l[0].first),abs(h[h.size()-1].first-l[1].first)));
        }
        return(0);
    }
};
