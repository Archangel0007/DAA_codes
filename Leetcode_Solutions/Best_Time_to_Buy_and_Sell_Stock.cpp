/*
This code solves the 121st problem of leetcode "Best Time to Buy and Sell Stock"
*/

class Solution {
public:
    int min(int a,int b){
        if(a>b){return(b);}
        return(a);
    }
    int max(int a,int b){
        if(a>b){return(a);}
        return(b);
    }
    int maxProfit(vector<int>& prices) {
        int min_now=prices[0];
        int total=0;
        for(int i=0;i<prices.size();i++){
            min_now=min(min_now,prices[i]);
            total=max(total,prices[i]-min_now);
        }
        return(total);
    }
};
