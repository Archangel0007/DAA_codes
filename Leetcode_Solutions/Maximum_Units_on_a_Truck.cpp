/*
  This code solves the 1710th problem on leetcode "Maximum Units on a Truck"
*/
class Solution {
public:
    static bool comp(vector<int>v1,vector<int>v2){
        if(v1[1]>v2[1]){return(true);}
        return(false);
    }
    int maximumUnits(vector<vector<int>>& v, int truckSize) {
        sort(v.begin(),v.end(),comp);
        cout<<v.size()<<endl;
        int ans=0,i=0;
        while(truckSize>=v[i][0]){    
            ans+=v[i][0]*v[i][1];
            truckSize-=v[i][0];
            i++;
            if(i>=v.size()){
                break;
            }
        }
        if(i==v.size()){return(ans);}
        else if(truckSize!=0){
            ans+=truckSize*v[i][1];
        }
        return(ans);
    }
};
