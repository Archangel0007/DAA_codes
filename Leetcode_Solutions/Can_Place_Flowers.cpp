/*
  this code solves the 605th problem on leetcode "Can Place Flowers"
*/
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count=0;
        if(flowerbed.size()==1){
            if(flowerbed[0]==0){return(true);}
            return(n<=count);
        }
        if(flowerbed[0]==0 && flowerbed[1]==0){
            flowerbed[0]=1;
            count++;
            if(flowerbed.size()==2){
                return(count>=n);
            }
        }
        for(int i=1;i<flowerbed.size()-1;i++){
            if(flowerbed[i-1]!=1 && flowerbed[i+1]!=1 && flowerbed[i]!=1){
                flowerbed[i]=1;
                count++;
            }
        }
        if(flowerbed[flowerbed.size()-1]==0 && flowerbed[flowerbed.size()-2]==0){
            
            count++;
        }
        return(count>=n);
    }
};
