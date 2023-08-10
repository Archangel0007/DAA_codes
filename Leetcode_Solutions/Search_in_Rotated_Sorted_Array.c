/*
  The given code solves the 33rd problem on leetcode "Search in Rotated Sorted Array"
*/
int binarysearch(int* nums, int low,int high, int target,int n){
    if(low<high){
        int mid=(low+high)/2;
        int x;
        if(nums[mid%n]==target){return (mid%n);}
        else if(nums[mid%n]>target){
            x=binarysearch(nums,low,mid,target,n);
        }
        else{
            x=binarysearch(nums,mid+1,high,target,n);
        }
        return(x);
    }
    else{
        return -1;
    }
}
int search(int* nums, int n, int target){
    int low=0,high=n;
    if(n==1){
        if(nums[0]==target){
            return(0);
        }
        return(-1);
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
