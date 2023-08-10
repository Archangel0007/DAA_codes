/*
  The given code solves the 81st problem of leetcode "Search in Rotated Sorted Array II"
*/
int binarysearch(int* nums, int low,int high, int target,int n){
    if(low<high){
        int mid=(low+high)/2;
        int x;
        if(nums[mid%n]==target){return 1;}
        else if(nums[mid%n]>target){
            x=binarysearch(nums,low,mid,target,n);
        }
        else{
            x=binarysearch(nums,mid+1,high,target,n);
        }
        return(x);
    }
    else{
        return 0;
    }
}
bool search(int* nums, int n, int target){
    int low,high;
    if(n==1){
        if(nums[0]==target){
            return(true);
        }
        return(false);
    }
    for(int i=1;i<n;i++){
        if(nums[i]<nums[i-1]){
            low=i;
            high=low+n;
            break;
        }
    }
    return(binarysearch(nums,low,high,target,n));
}
