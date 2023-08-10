/*
  The given code Solves the 35th problem of leet code "Search Insert Position"
*/
int binarysearch(int* nums, int low, int high, int target){
    if(low<high){
        int mid=(low+high)/2;
        int x;
        if(nums[mid]==target){return mid;}
        else if(nums[mid]<target){
            x=binarysearch(nums,mid+1,high,target);
        }
        else{
            x=binarysearch(nums,low,mid,target);
        }
        return(x);
    }
    else{
        return(high);
    }
}
int searchInsert(int* nums, int n, int target){
    return(binarysearch(nums,0,n,target));
}
